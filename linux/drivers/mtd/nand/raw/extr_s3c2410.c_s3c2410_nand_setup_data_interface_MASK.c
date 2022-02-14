
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_platform_nand {void* twrph1; void* twrph0; void* tacls; } ;
struct s3c2410_nand_info {struct s3c2410_platform_nand* platform; } ;
struct nand_sdr_timings {int tCLS_min; int tWP_min; int tCLH_min; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nand_sdr_timings const*) ;
 struct nand_sdr_timings* FUNC_2 (struct nand_data_interface const*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 struct s3c2410_nand_info* FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (struct s3c2410_nand_info*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1, int VAR_2,
     const struct nand_data_interface *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_3(VAR_1);
 struct s3c2410_nand_info *VAR_5 = FUNC_4(VAR_4);
 struct s3c2410_platform_nand *VAR_6 = VAR_5->platform;
 const struct nand_sdr_timings *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_3);
 if (FUNC_1(VAR_7))
  return -VAR_0;

 VAR_8 = VAR_7->tCLS_min - VAR_7->tWP_min;
 if (VAR_8 < 0)
  VAR_8 = 0;

 VAR_6->tacls = FUNC_0(VAR_8, 1000);
 VAR_6->twrph0 = FUNC_0(VAR_7->tWP_min, 1000);
 VAR_6->twrph1 = FUNC_0(VAR_7->tCLH_min, 1000);

 return FUNC_5(VAR_5);
}

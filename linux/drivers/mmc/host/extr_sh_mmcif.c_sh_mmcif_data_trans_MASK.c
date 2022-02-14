
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_mmcif_host {int dummy; } ;
struct mmc_request {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct device*,char*,int) ;
 struct device* FUNC_1 (struct sh_mmcif_host*) ;
 int FUNC_2 (struct sh_mmcif_host*,struct mmc_request*) ;
 int FUNC_3 (struct sh_mmcif_host*,struct mmc_request*) ;
 int FUNC_4 (struct sh_mmcif_host*,struct mmc_request*) ;
 int FUNC_5 (struct sh_mmcif_host*,struct mmc_request*) ;

__attribute__((used)) static int FUNC_6(struct sh_mmcif_host *VAR_1,
          struct mmc_request *VAR_2, u32 VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_3) {
 case 132:
  FUNC_2(VAR_1, VAR_2);
  return 0;
 case 128:
  FUNC_3(VAR_1, VAR_2);
  return 0;
 case 129:
  FUNC_5(VAR_1, VAR_2);
  return 0;
 case 131:
 case 130:
  FUNC_4(VAR_1, VAR_2);
  return 0;
 default:
  FUNC_0(VAR_4, "Unsupported CMD%d\n", VAR_3);
  return -VAR_0;
 }
}

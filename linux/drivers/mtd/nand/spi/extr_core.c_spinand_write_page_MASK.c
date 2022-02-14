
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int dummy; } ;
struct nand_page_io_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spinand_device*,struct nand_page_io_req const*) ;
 int FUNC_1 (struct spinand_device*,int*) ;
 int FUNC_2 (struct spinand_device*) ;
 int FUNC_3 (struct spinand_device*,struct nand_page_io_req const*) ;

__attribute__((used)) static int FUNC_4(struct spinand_device *VAR_2,
         const struct nand_page_io_req *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (!VAR_5 && (VAR_4 & VAR_1))
  VAR_5 = -VAR_0;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int dummy; } ;
struct nand_page_io_req {int dummy; } ;


 int FUNC_0 (struct spinand_device*,int ) ;
 int FUNC_1 (struct spinand_device*,struct nand_page_io_req const*) ;
 int FUNC_2 (struct spinand_device*,struct nand_page_io_req const*) ;
 int FUNC_3 (struct spinand_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct spinand_device *VAR_0,
        const struct nand_page_io_req *VAR_1,
        bool VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_0, VAR_3);
}

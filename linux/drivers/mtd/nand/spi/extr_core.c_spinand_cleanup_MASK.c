
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int scratchbuf; int databuf; } ;
struct nand_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_device*) ;
 int FUNC_2 (struct spinand_device*) ;
 struct nand_device* FUNC_3 (struct spinand_device*) ;

__attribute__((used)) static void FUNC_4(struct spinand_device *VAR_0)
{
 struct nand_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->databuf);
 FUNC_0(VAR_0->scratchbuf);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinand_device {int dummy; } ;
struct TYPE_2__ {unsigned int ntargets; } ;
struct nand_device {TYPE_1__ memorg; } ;


 int VAR_0 ;
 int FUNC_0 (struct spinand_device*,unsigned int) ;
 struct nand_device* FUNC_1 (struct spinand_device*) ;
 int FUNC_2 (struct spinand_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct spinand_device *VAR_1)
{
 struct nand_device *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_2->memorg.ntargets; VAR_3++) {
  FUNC_0(VAR_1, VAR_3);
  FUNC_2(VAR_1, VAR_0,
    VAR_0);
 }

 return 0;
}

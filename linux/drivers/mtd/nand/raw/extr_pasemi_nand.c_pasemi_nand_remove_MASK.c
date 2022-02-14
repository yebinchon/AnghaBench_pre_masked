
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int VAR_0 ;
 struct nand_chip* FUNC_2 (int *) ;
 int FUNC_3 (struct nand_chip*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct nand_chip *VAR_3;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_2(VAR_1);


 FUNC_3(VAR_3);

 FUNC_4(VAR_0, 4);

 FUNC_0(VAR_3->legacy.IO_ADDR_R);


 FUNC_1(VAR_3);

 VAR_1 = ((void*)0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; int cur_cs; } ;


 int FUNC_0 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_1 (struct nand_chip*,int *,int,int,int ) ;
 int FUNC_2 (struct nand_chip*,int *,int,int) ;
 int FUNC_3 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, u8 *VAR_1,
       int VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_0, VAR_0->cur_cs);

 FUNC_0(VAR_0, VAR_3, 0, ((void*)0), 0);

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
            VAR_0->ecc.steps);
 if (VAR_4 >= 0)
  return VAR_4;


 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}

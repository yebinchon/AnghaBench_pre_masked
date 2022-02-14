
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int size; } ;
struct nand_chip {int cur_cs; TYPE_1__ ecc; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_2 (struct nand_chip*,int *,int,int,int) ;
 int FUNC_3 (struct nand_chip*,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_4 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0,
          u32 VAR_1, u32 VAR_2,
          u8 *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1 + VAR_2, VAR_0->ecc.size);
 int VAR_6;

 FUNC_4(VAR_0, VAR_0->cur_cs);

 FUNC_1(VAR_0, VAR_4, 0, ((void*)0), 0);

 VAR_6 = FUNC_2(VAR_0, VAR_3, 0, VAR_4, VAR_5);
 if (VAR_6 >= 0)
  return VAR_6;


 return FUNC_3(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
}

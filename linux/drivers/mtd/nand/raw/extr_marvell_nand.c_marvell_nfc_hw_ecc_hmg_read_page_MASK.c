
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int * oob_poi; int cur_cs; } ;
struct marvell_hw_ecc_layout {unsigned int data_bytes; unsigned int spare_bytes; unsigned int ecc_bytes; } ;
struct TYPE_2__ {struct marvell_hw_ecc_layout* layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct nand_chip*,int *,unsigned int,int *,int ,int *,int ,int*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int*) ;
 int FUNC_6 (struct nand_chip*,int *,int *,int,int) ;
 int FUNC_7 (struct nand_chip*,int ) ;
 TYPE_1__* FUNC_8 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_2, u8 *VAR_3,
         int VAR_4, int VAR_5)
{
 const struct marvell_hw_ecc_layout *VAR_6 = FUNC_8(VAR_2)->layout;
 unsigned int VAR_7 = VAR_6->data_bytes + VAR_6->spare_bytes + VAR_6->ecc_bytes;
 int VAR_8 = 0, VAR_9;
 u8 *VAR_10;

 FUNC_7(VAR_2, VAR_2->cur_cs);
 FUNC_4(VAR_2);
 FUNC_6(VAR_2, VAR_3, VAR_2->oob_poi, 0,
         VAR_5);
 VAR_9 = FUNC_5(VAR_2, &VAR_8);
 FUNC_3(VAR_2);

 if (!VAR_9)
  return VAR_8;





 VAR_10 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_6(VAR_2, VAR_10, VAR_10 +
         VAR_6->data_bytes, 1, VAR_5);
 FUNC_2(VAR_2, VAR_10, VAR_7, ((void*)0), 0, ((void*)0), 0,
          &VAR_8);
 FUNC_0(VAR_10);

 return VAR_8;
}

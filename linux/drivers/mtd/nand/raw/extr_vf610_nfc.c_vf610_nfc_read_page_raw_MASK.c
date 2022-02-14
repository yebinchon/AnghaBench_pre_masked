
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vf610_nfc {int data_access; } ;
struct nand_chip {int dummy; } ;


 struct vf610_nfc* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, u8 *VAR_1,
       int VAR_2, int VAR_3)
{
 struct vf610_nfc *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 VAR_4->data_access = 1;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_4->data_access = 0;

 return VAR_5;
}

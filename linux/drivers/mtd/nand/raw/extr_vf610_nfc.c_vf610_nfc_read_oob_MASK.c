
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_nfc {int data_access; } ;
struct nand_chip {int dummy; } ;


 struct vf610_nfc* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct vf610_nfc *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_2->data_access = 1;
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_2->data_access = 0;

 return VAR_3;
}

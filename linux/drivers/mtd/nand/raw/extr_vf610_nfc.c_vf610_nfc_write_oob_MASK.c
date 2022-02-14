
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_nfc {int data_access; } ;
struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 struct vf610_nfc* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int,int ,int ,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_3(VAR_0);
 struct vf610_nfc *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_3->data_access = 1;
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2->writesize,
          VAR_0->oob_poi, VAR_2->oobsize);
 VAR_3->data_access = 0;

 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_0);
}

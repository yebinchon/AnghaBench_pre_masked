
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vf610_nfc {int data_access; } ;
struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 struct vf610_nfc* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int,int ,int const*,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, const u8 *VAR_1,
        int VAR_2, int VAR_3)
{
 struct vf610_nfc *VAR_4 = FUNC_0(VAR_0);
 struct mtd_info *VAR_5 = FUNC_3(VAR_0);
 int VAR_6;

 VAR_4->data_access = 1;
 VAR_6 = FUNC_1(VAR_0, VAR_3, 0, VAR_1, VAR_5->writesize);
 if (!VAR_6 && VAR_2)
  VAR_6 = FUNC_4(VAR_0, VAR_0->oob_poi, VAR_5->oobsize,
      0);
 VAR_4->data_access = 0;

 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_0);
}

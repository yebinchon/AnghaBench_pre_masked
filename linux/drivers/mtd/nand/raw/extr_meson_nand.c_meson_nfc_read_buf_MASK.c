
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct meson_nfc {scalar_t__ reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nand_chip*,int,int ,int ) ;
 int FUNC_4 (struct nand_chip*,int *,int,int *,int ,int ) ;
 int FUNC_5 (struct meson_nfc*) ;
 int FUNC_6 (struct meson_nfc*,int) ;
 struct meson_nfc* FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_6, u8 *VAR_7, int VAR_8)
{
 struct meson_nfc *VAR_9 = FUNC_7(VAR_6);
 int VAR_10 = 0;
 u32 VAR_11;
 u8 *VAR_12;

 VAR_12 = FUNC_2(VAR_5, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_12,
      VAR_5, VAR_0);
 if (VAR_10)
  goto out;

 VAR_11 = VAR_3 | (VAR_8 & FUNC_0(5, 0));
 FUNC_8(VAR_11, VAR_9->reg_base + VAR_4);

 FUNC_5(VAR_9);
 FUNC_6(VAR_9, 1000);
 FUNC_3(VAR_6, VAR_8, VAR_5, VAR_0);

out:
 FUNC_1(VAR_12);

 return VAR_10;
}

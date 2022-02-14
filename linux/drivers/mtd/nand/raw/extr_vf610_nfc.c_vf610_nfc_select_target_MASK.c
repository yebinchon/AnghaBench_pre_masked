
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vf610_nfc {scalar_t__ variant; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vf610_nfc* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct vf610_nfc*,int ) ;
 int FUNC_3 (struct vf610_nfc*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_6, unsigned int VAR_7)
{
 struct vf610_nfc *VAR_8 = FUNC_1(VAR_6);
 u32 VAR_9;


 if (VAR_8->variant != VAR_1)
  return;

 VAR_9 = FUNC_2(VAR_8, VAR_0);
 VAR_9 &= ~(VAR_3 | VAR_2);
 VAR_9 |= 1 << VAR_4;
 VAR_9 |= FUNC_0(VAR_7) << VAR_5;

 FUNC_3(VAR_8, VAR_0, VAR_9);
}

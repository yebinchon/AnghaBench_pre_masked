
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int bcn_li_dtim; int bcn_li_bcn; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_c_info *VAR_1)
{

 if (VAR_1->bcn_li_dtim == 1)
  FUNC_0(VAR_1->hw, VAR_0, 0);
 else
  FUNC_0(VAR_1->hw, VAR_0,
         (VAR_1->bcn_li_dtim << 8) | VAR_1->bcn_li_bcn);
}

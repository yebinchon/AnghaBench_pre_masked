
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct vnt_private {int * ofdm_pwr_tbl; int * ofdm_a_pwr_tbl; int * cck_pwr_tbl; int cck_pwr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnt_private*,int ,scalar_t__) ;

int FUNC_1(struct vnt_private *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u8 VAR_5 = VAR_2->cck_pwr;

 if (VAR_4 == 0)
  return -VAR_1;

 switch (VAR_3) {
 case 136:
 case 134:
 case 130:
 case 139:
  VAR_4--;

  if (VAR_4 < sizeof(VAR_2->cck_pwr_tbl))
   VAR_5 = VAR_2->cck_pwr_tbl[VAR_4];
  break;
 case 129:
 case 128:
 case 138:
 case 137:
 case 135:
 case 133:
 case 132:
 case 131:
  if (VAR_4 > VAR_0)
   VAR_5 = VAR_2->ofdm_a_pwr_tbl[VAR_4 - 15];
  else
   VAR_5 = VAR_2->ofdm_pwr_tbl[VAR_4 - 1];
  break;
 }

 return FUNC_0(VAR_2, VAR_5, VAR_3);
}

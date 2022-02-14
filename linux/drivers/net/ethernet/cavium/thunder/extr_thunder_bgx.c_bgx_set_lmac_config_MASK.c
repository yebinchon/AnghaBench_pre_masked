
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
struct lmac {int lmac_type; size_t lane_to_sds; int lmacid; } ;
struct bgx {scalar_t__ is_rgx; int is_dlm; struct lmac* lmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bgx*,size_t,int ) ;
 int FUNC_1 (struct bgx*,struct lmac*) ;
 int FUNC_2 (struct bgx*,struct lmac*,int ) ;

__attribute__((used)) static void FUNC_3(struct bgx *VAR_3, u8 VAR_4)
{
 struct lmac *VAR_5;
 u64 VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 VAR_5 = &VAR_3->lmac[VAR_4];

 if (!VAR_3->is_dlm || VAR_3->is_rgx) {



  VAR_6 = FUNC_0(VAR_3, 0, VAR_0);
  VAR_5->lmac_type = (VAR_6 >> 8) & 0x07;
  if (VAR_3->is_rgx)
   VAR_5->lmac_type = VAR_2;
  FUNC_2(VAR_3, VAR_5, 0);
  FUNC_1(VAR_3, VAR_5);
  return;
 }






 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_0);
 VAR_7 = (u8)((VAR_6 >> 8) & 0x07);
 VAR_8 = (u8)(VAR_6 & 0xFF);

 if ((VAR_7 == 0) && (VAR_8 == 0xE4))
  VAR_5->lmac_type = VAR_1;
 else
  VAR_5->lmac_type = VAR_7;
 VAR_5->lane_to_sds = VAR_8;
 FUNC_2(VAR_3, VAR_5, VAR_5->lmacid);
}

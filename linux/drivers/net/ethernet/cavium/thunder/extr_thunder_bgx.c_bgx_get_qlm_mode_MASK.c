
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lmac {size_t lmacid; int use_training; int lmac_type; } ;
struct bgx {size_t max_lmac; int lmac_count; struct lmac* lmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgx*,size_t) ;
 int FUNC_1 (struct bgx*,int ,int ) ;
 int FUNC_2 (struct bgx*,size_t) ;

__attribute__((used)) static void FUNC_3(struct bgx *VAR_2)
{
 struct lmac *VAR_3;
 u8 VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2->max_lmac; VAR_4++) {
  VAR_3 = &VAR_2->lmac[VAR_4];
  VAR_3->lmacid = VAR_4;
  VAR_3->lmac_type = VAR_1;
  VAR_3->use_training = 0;
 }


 VAR_2->lmac_count = FUNC_1(VAR_2, 0, VAR_0) & 0x7;
 if (VAR_2->lmac_count > VAR_2->max_lmac)
  VAR_2->lmac_count = VAR_2->max_lmac;

 for (VAR_4 = 0; VAR_4 < VAR_2->lmac_count; VAR_4++) {
  FUNC_2(VAR_2, VAR_4);
  FUNC_0(VAR_2, VAR_4);
 }
}

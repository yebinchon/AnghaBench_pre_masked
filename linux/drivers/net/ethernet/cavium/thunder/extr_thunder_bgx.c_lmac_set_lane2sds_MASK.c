
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {int lmac_type; int lane_to_sds; int lmacid; } ;
struct bgx {int dummy; } ;
 int FUNC_0 (struct bgx*,struct lmac*) ;

__attribute__((used)) static void FUNC_1(struct bgx *VAR_0, struct lmac *VAR_1)
{
 switch (VAR_1->lmac_type) {
 case 131:
 case 129:
  VAR_1->lane_to_sds = VAR_1->lmacid;
  break;
 case 130:
 case 128:
 case 133:
  VAR_1->lane_to_sds = 0xE4;
  break;
 case 132:
  VAR_1->lane_to_sds = (VAR_1->lmacid) ? 0xE : 0x4;
  break;
 case 134:





  VAR_1->lane_to_sds = FUNC_0(VAR_0, VAR_1);
  break;
 default:
  VAR_1->lane_to_sds = 0;
  break;
 }
}

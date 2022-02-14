
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bm; } ;
struct uwb_rsv_move {TYPE_1__ companion_mas; } ;
struct TYPE_4__ {int bm; } ;
struct uwb_rsv {int state; TYPE_2__ mas; struct uwb_rsv_move mv; } ;
struct uwb_mas_bm {int bm; } ;


 int VAR_0 ;







 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uwb_rsv*,int const) ;

__attribute__((used)) static void FUNC_2(struct uwb_rsv *VAR_1,
      struct uwb_mas_bm *VAR_2)
{
 struct uwb_rsv_move *VAR_3 = &VAR_1->mv;

 switch (VAR_1->state) {
 case 128:
 case 133:
 case 134:
  FUNC_1(VAR_1, 134);
  break;
 case 132:
  if (FUNC_0(VAR_2->bm, VAR_1->mas.bm, VAR_0))
   FUNC_1(VAR_1, 134);
  else
   FUNC_1(VAR_1, 132);
  break;

 case 129:
  if (FUNC_0(VAR_2->bm, VAR_1->mas.bm, VAR_0))
   FUNC_1(VAR_1, 134);
  else
   FUNC_1(VAR_1, 129);
  break;
 case 130:
  if (FUNC_0(VAR_2->bm, VAR_3->companion_mas.bm, VAR_0)) {

   FUNC_1(VAR_1, 131);
  } else {
   FUNC_1(VAR_1, 130);
  }
  break;
 case 131:
  if (FUNC_0(VAR_2->bm, VAR_1->mas.bm, VAR_0))
   FUNC_1(VAR_1, 129);
  else
   FUNC_1(VAR_1, 131);
  break;
 default:
  break;
 }
}

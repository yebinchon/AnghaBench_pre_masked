
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_rsv {int tiebreaker; int type; TYPE_2__* rc; } ;
struct uwb_ie_drp {int dummy; } ;
struct TYPE_3__ {int beacon_slot; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uwb_ie_drp*) ;
 int FUNC_1 (struct uwb_ie_drp*) ;
 int FUNC_2 (struct uwb_ie_drp*) ;

__attribute__((used)) static int FUNC_3(struct uwb_ie_drp *VAR_6, int VAR_7,
        struct uwb_rsv *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_8->tiebreaker;
 int VAR_11 = VAR_8->type;
 int VAR_12 = VAR_8->rc->uwb_dev.beacon_slot;

 int VAR_13 = FUNC_1(VAR_6);
 int VAR_14 = FUNC_0(VAR_6);
 int VAR_15 = FUNC_2(VAR_6);



 if (VAR_15 == VAR_5 && VAR_11 == VAR_5) {
  return VAR_3;
 }


 if (VAR_11 == VAR_4) {
  return VAR_3;
 }


 if (VAR_15 == VAR_4) {

  return VAR_0;
 }


 if (VAR_9 == 0 && VAR_14 == 1) {
  return VAR_1;
 }


 if (VAR_9 == 1 && VAR_14 == 0) {
  return VAR_3;
 }


 if (VAR_10 == VAR_13 &&
     VAR_12 < VAR_7) {
  return VAR_3;
 }


 if (VAR_10 != VAR_13 &&
     VAR_12 > VAR_7) {
  return VAR_3;
 }

 if (VAR_9 == 0) {
  if (VAR_10 == VAR_13) {

   if (VAR_12 > VAR_7) {
    return VAR_1;
   }
  } else {

   if (VAR_12 < VAR_7) {
    return VAR_1;
   }
  }
 } else {
  if (VAR_10 == VAR_13) {

   if (VAR_12 > VAR_7) {
    return VAR_2;
   }
  } else {

   if (VAR_12 < VAR_7) {
    return VAR_2;
   }
  }
 }
 return VAR_3;
}

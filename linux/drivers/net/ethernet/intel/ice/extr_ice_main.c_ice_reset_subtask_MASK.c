
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_ongoing; } ;
struct ice_pf {int state; TYPE_1__ hw; } ;
typedef enum ice_reset_req { ____Placeholder_ice_reset_req } ice_reset_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ice_pf*,int) ;
 int FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct ice_pf*,int) ;
 int FUNC_5 (struct ice_pf*,int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct ice_pf *VAR_16)
{
 enum ice_reset_req VAR_17 = VAR_3;
 if (FUNC_8(VAR_15, VAR_16->state)) {

  if (FUNC_7(VAR_6, VAR_16->state))
   VAR_17 = VAR_0;
  if (FUNC_7(VAR_10, VAR_16->state))
   VAR_17 = VAR_2;
  if (FUNC_7(VAR_9, VAR_16->state))
   VAR_17 = VAR_1;

  if (VAR_17 == VAR_3)
   return;
  FUNC_3(VAR_16);


  if (FUNC_1(&VAR_16->hw)) {
   FUNC_6(VAR_14, VAR_16->state);
  } else {

   VAR_16->hw.reset_ongoing = 0;
   FUNC_4(VAR_16, VAR_17);



   FUNC_0(VAR_15, VAR_16->state);
   FUNC_0(VAR_13, VAR_16->state);
   FUNC_0(VAR_12, VAR_16->state);
   FUNC_0(VAR_7, VAR_16->state);
   FUNC_0(VAR_11, VAR_16->state);
   FUNC_5(VAR_16, 1);
  }

  return;
 }


 if (FUNC_8(VAR_12, VAR_16->state))
  VAR_17 = VAR_4;
 if (FUNC_8(VAR_7, VAR_16->state))
  VAR_17 = VAR_0;
 if (FUNC_8(VAR_11, VAR_16->state))
  VAR_17 = VAR_2;

 if (VAR_17 == VAR_3)
  return;


 if (!FUNC_8(VAR_8, VAR_16->state) &&
     !FUNC_8(VAR_5, VAR_16->state)) {
  FUNC_2(VAR_16, VAR_17);
 }
}

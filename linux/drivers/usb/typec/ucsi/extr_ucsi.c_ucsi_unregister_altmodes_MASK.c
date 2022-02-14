
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucsi_connector {struct typec_altmode** partner_altmode; struct typec_altmode** port_altmode; } ;
struct typec_altmode {scalar_t__ svid; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct typec_altmode* FUNC_0 (struct typec_altmode*) ;
 int FUNC_1 (struct typec_altmode*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct ucsi_connector *VAR_2, u8 VAR_3)
{
 const struct typec_altmode *VAR_4;
 struct typec_altmode **VAR_5;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129:
  VAR_5 = VAR_2->port_altmode;
  break;
 case 128:
  VAR_5 = VAR_2->partner_altmode;
  break;
 default:
  return;
 }

 while (VAR_5[VAR_6]) {
  if (VAR_3 == 128 &&
      (VAR_5[VAR_6]->svid == VAR_0 ||
   VAR_5[VAR_6]->svid == VAR_1)) {
   VAR_4 = FUNC_0(VAR_5[VAR_6]);
   FUNC_2((void *)VAR_4);
  }
  FUNC_1(VAR_5[VAR_6]);
  VAR_5[VAR_6++] = ((void*)0);
 }
}

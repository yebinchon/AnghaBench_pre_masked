
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ plt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl1271*) ;

void FUNC_3(struct wl1271 *VAR_1)
{
 if (VAR_1->plt) {
  FUNC_1("Got DUMMY_PACKET event in PLT mode.  FW bug, ignoring.");
  return;
 }

 FUNC_0(VAR_0, "DUMMY_PACKET_ID_EVENT_ID");
 FUNC_2(VAR_1);
}

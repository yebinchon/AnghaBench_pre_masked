
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int psm_entry_retry; int station_mode; } ;
struct event_mailbox {int ps_status; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl1251*,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1251 *VAR_4,
      struct event_mailbox *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_0, "ps status: %x", VAR_5->ps_status);

 switch (VAR_5->ps_status) {
 case 131:
  FUNC_0(VAR_1, "PSM entry failed");

  if (VAR_4->station_mode != VAR_2) {

   VAR_4->psm_entry_retry = 0;
   break;
  }

  if (VAR_4->psm_entry_retry < VAR_3) {
   VAR_4->psm_entry_retry++;
   VAR_6 = FUNC_2(VAR_4, VAR_2);
  } else {
   FUNC_1("Power save entry failed, giving up");
   VAR_4->psm_entry_retry = 0;
  }
  break;
 case 130:
 case 129:
 case 128:
 default:
  VAR_4->psm_entry_retry = 0;
  break;
 }

 return 0;
}

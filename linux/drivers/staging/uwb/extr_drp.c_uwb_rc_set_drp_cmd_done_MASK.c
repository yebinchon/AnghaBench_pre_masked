
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rceb {int dummy; } ;
struct uwb_rc_evt_set_drp_ie {scalar_t__ bResultCode; } ;
struct TYPE_2__ {int dev; } ;
struct uwb_rc {int set_drp_ie_pending; int rsvs_lock; TYPE_1__ uwb_dev; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct uwb_rc*) ;

__attribute__((used)) static void FUNC_5(struct uwb_rc *VAR_1, void *VAR_2,
        struct uwb_rceb *VAR_3, ssize_t VAR_4)
{
 struct uwb_rc_evt_set_drp_ie *VAR_5 = (struct uwb_rc_evt_set_drp_ie *)VAR_3;
 unsigned long VAR_6;

 if (VAR_5 != ((void*)0)) {
  if (VAR_5->bResultCode != VAR_0)
   FUNC_0(&VAR_1->uwb_dev.dev, "SET-DRP-IE failed: %s (%d)\n",
    FUNC_3(VAR_5->bResultCode), VAR_5->bResultCode);
 } else
  FUNC_0(&VAR_1->uwb_dev.dev, "SET-DRP-IE: timeout\n");

 FUNC_1(&VAR_1->rsvs_lock, VAR_6);
 if (VAR_1->set_drp_ie_pending > 1) {
  VAR_1->set_drp_ie_pending = 0;
  FUNC_4(VAR_1);
 } else {
  VAR_1->set_drp_ie_pending = 0;
 }
 FUNC_2(&VAR_1->rsvs_lock, VAR_6);
}

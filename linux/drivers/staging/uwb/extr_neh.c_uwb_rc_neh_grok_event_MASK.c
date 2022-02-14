
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rceb {scalar_t__ bEventContext; int wEvent; int bEventType; } ;
struct uwb_rc_neh {int completed; int timer; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {int neh_lock; TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ,int ,scalar_t__,size_t) ;
 int FUNC_2 (struct device*,char*,int ,int ,scalar_t__,size_t) ;
 struct uwb_rceb* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uwb_rceb*,struct uwb_rceb*,size_t) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct uwb_rc_neh*,struct uwb_rceb*,size_t) ;
 struct uwb_rc_neh* FUNC_9 (struct uwb_rc*,struct uwb_rceb*) ;
 int FUNC_10 (struct uwb_rc*,struct uwb_rceb*,size_t) ;

__attribute__((used)) static void FUNC_11(struct uwb_rc *VAR_1, struct uwb_rceb *VAR_2, size_t VAR_3)
{
 struct device *VAR_4 = &VAR_1->uwb_dev.dev;
 struct uwb_rc_neh *VAR_5;
 struct uwb_rceb *VAR_6;
 unsigned long VAR_7;

 if (VAR_2->bEventContext == 0) {
  VAR_6 = FUNC_3(VAR_3, VAR_0);
  if (VAR_6) {
   FUNC_5(VAR_6, VAR_2, VAR_3);
   FUNC_10(VAR_1, VAR_6, VAR_3);
  } else
   FUNC_1(VAR_4, "event 0x%02x/%04x/%02x (%zu bytes): no memory\n",
    VAR_2->bEventType, FUNC_4(VAR_2->wEvent),
    VAR_2->bEventContext, VAR_3);
 } else {
  VAR_5 = FUNC_9(VAR_1, VAR_2);
  if (VAR_5) {
   FUNC_6(&VAR_1->neh_lock, VAR_7);

   VAR_5->completed = 1;
   FUNC_0(&VAR_5->timer);
   FUNC_7(&VAR_1->neh_lock, VAR_7);
   FUNC_8(VAR_5, VAR_2, VAR_3);
  } else
   FUNC_2(VAR_4, "event 0x%02x/%04x/%02x (%zu bytes): nobody cared\n",
     VAR_2->bEventType, FUNC_4(VAR_2->wEvent),
     VAR_2->bEventContext, VAR_3);
 }
}

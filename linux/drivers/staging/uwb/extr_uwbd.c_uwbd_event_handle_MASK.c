
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct uwb_rc {TYPE_2__ uwb_dev; scalar_t__ ready; } ;
struct TYPE_3__ {int rceb; } ;
struct uwb_event {int type; TYPE_1__ notif; struct uwb_rc* rc; } ;




 int FUNC_0 (struct uwb_rc*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uwb_event*) ;
 int FUNC_4 (struct uwb_event*) ;

__attribute__((used)) static void FUNC_5(struct uwb_event *VAR_0)
{
 struct uwb_rc *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->rc;

 if (VAR_1->ready) {
  switch (VAR_0->type) {
  case 128:
   VAR_2 = FUNC_4(VAR_0);
   if (VAR_2 <= 0)
    FUNC_2(VAR_0->notif.rceb);
   break;
  case 129:
   FUNC_3(VAR_0);
   break;
  default:
   FUNC_1(&VAR_1->uwb_dev.dev, "UWBD: invalid event type %d\n", VAR_0->type);
   break;
  }
 }

 FUNC_0(VAR_1);
}

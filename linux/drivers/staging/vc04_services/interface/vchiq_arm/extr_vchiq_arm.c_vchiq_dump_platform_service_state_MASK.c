
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ callback; scalar_t__ userdata; } ;
struct vchiq_service {TYPE_1__ base; int instance; } ;
struct user_service {int msg_insert; int msg_remove; scalar_t__ dequeue_pending; scalar_t__ is_vchi; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (void*,char*,int) ;

void
FUNC_2(void *VAR_2,
      struct vchiq_service *VAR_3)
{
 struct user_service *VAR_4 =
   (struct user_service *)VAR_3->base.userdata;
 char VAR_5[80];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, sizeof(VAR_5), "  instance %pK", VAR_3->instance);

 if ((VAR_3->base.callback == VAR_1) &&
  VAR_4->is_vchi) {
  VAR_6 += FUNC_0(VAR_5 + VAR_6, sizeof(VAR_5) - VAR_6,
   ", %d/%d messages",
   VAR_4->msg_insert - VAR_4->msg_remove,
   VAR_0);

  if (VAR_4->dequeue_pending)
   VAR_6 += FUNC_0(VAR_5 + VAR_6, sizeof(VAR_5) - VAR_6,
    " (dequeue pending)");
 }

 FUNC_1(VAR_2, VAR_5, VAR_6 + 1);
}

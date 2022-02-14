
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; struct sbp_target_agent* callback_data; int address_callback; } ;
struct sbp_target_agent {int doorbell; TYPE_1__ handler; scalar_t__ orb_pointer; int work; int state; struct sbp_login_descriptor* login; int lock; } ;
struct sbp_login_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sbp_target_agent* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct sbp_target_agent*) ;
 struct sbp_target_agent* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct sbp_target_agent *FUNC_6(
  struct sbp_login_descriptor *VAR_6)
{
 struct sbp_target_agent *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 FUNC_5(&VAR_7->lock);

 VAR_7->handler.length = 0x20;
 VAR_7->handler.address_callback = VAR_5;
 VAR_7->handler.callback_data = VAR_7;

 VAR_7->login = VAR_6;
 VAR_7->state = VAR_0;
 FUNC_1(&VAR_7->work, VAR_4);
 VAR_7->orb_pointer = 0;
 VAR_7->doorbell = 0;

 VAR_8 = FUNC_2(&VAR_7->handler,
   &VAR_3);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}

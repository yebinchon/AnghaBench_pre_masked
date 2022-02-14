
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_tport {int dummy; } ;
struct TYPE_2__ {int length; struct sbp_management_agent* callback_data; int address_callback; } ;
struct sbp_management_agent {TYPE_1__ handler; int * request; scalar_t__ orb_offset; int work; int state; struct sbp_tport* tport; int lock; } ;


 int VAR_0 ;
 struct sbp_management_agent* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct sbp_management_agent*) ;
 struct sbp_management_agent* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct sbp_management_agent *FUNC_6(
  struct sbp_tport *VAR_6)
{
 int VAR_7;
 struct sbp_management_agent *VAR_8;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_8->lock);
 VAR_8->tport = VAR_6;
 VAR_8->handler.length = 0x08;
 VAR_8->handler.address_callback = VAR_4;
 VAR_8->handler.callback_data = VAR_8;
 VAR_8->state = VAR_2;
 FUNC_1(&VAR_8->work, VAR_3);
 VAR_8->orb_offset = 0;
 VAR_8->request = ((void*)0);

 VAR_7 = FUNC_2(&VAR_8->handler,
   &VAR_5);
 if (VAR_7 < 0) {
  FUNC_3(VAR_8);
  return FUNC_0(VAR_7);
 }

 return VAR_8;
}

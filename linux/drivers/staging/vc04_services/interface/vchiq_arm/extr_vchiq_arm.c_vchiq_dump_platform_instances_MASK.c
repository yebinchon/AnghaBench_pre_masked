
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vchiq_state {int unused_service; struct vchiq_service** services; } ;
struct TYPE_4__ {scalar_t__ callback; } ;
struct vchiq_service {TYPE_2__* instance; TYPE_1__ base; } ;
typedef int buf ;
typedef TYPE_2__* VCHIQ_INSTANCE_T ;
struct TYPE_5__ {int mark; int pid; int completion_insert; int completion_remove; scalar_t__ connected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,TYPE_2__*,int,char*,int,int) ;
 int FUNC_1 (void*,char*,int) ;
 struct vchiq_state* FUNC_2 () ;

void
FUNC_3(void *VAR_2)
{
 struct vchiq_state *VAR_3 = FUNC_2();
 char VAR_4[80];
 int VAR_5;
 int VAR_6;




 for (VAR_6 = 0; VAR_6 < VAR_3->unused_service; VAR_6++) {
  struct vchiq_service *VAR_7 = VAR_3->services[VAR_6];
  VCHIQ_INSTANCE_T VAR_8;

  if (VAR_7 && (VAR_7->base.callback == VAR_1)) {
   VAR_8 = VAR_7->instance;
   if (VAR_8)
    VAR_8->mark = 0;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->unused_service; VAR_6++) {
  struct vchiq_service *VAR_9 = VAR_3->services[VAR_6];
  VCHIQ_INSTANCE_T VAR_10;

  if (VAR_9 && (VAR_9->base.callback == VAR_1)) {
   VAR_10 = VAR_9->instance;
   if (VAR_10 && !VAR_10->mark) {
    VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4),
     "Instance %pK: pid %d,%s completions %d/%d",
     VAR_10, VAR_10->pid,
     VAR_10->connected ? " connected, " :
      "",
     VAR_10->completion_insert -
      VAR_10->completion_remove,
     VAR_0);

    FUNC_1(VAR_2, VAR_4, VAR_5 + 1);

    VAR_10->mark = 1;
   }
  }
 }
}

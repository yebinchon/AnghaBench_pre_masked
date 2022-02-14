
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int notifier_call; } ;
struct watchdog_device {int id; TYPE_3__ restart_nb; TYPE_2__* ops; TYPE_1__* parent; int max_hw_heartbeat_ms; int * info; } ;
struct TYPE_5__ {scalar_t__ restart; int stop; int start; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct watchdog_device*) ;
 int FUNC_6 (struct watchdog_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_6)
{
 int VAR_7, VAR_8 = -1;

 if (VAR_6 == ((void*)0) || VAR_6->info == ((void*)0) || VAR_6->ops == ((void*)0))
  return -VAR_1;


 if (!VAR_6->ops->start || (!VAR_6->ops->stop && !VAR_6->max_hw_heartbeat_ms))
  return -VAR_1;

 FUNC_5(VAR_6);
 if (VAR_6->parent) {
  VAR_7 = FUNC_2(VAR_6->parent->of_node, "watchdog");
  if (VAR_7 >= 0)
   VAR_8 = FUNC_0(&VAR_4, VAR_7,
         VAR_7 + 1, VAR_2);
 }

 if (VAR_8 < 0)
  VAR_8 = FUNC_0(&VAR_4, 0, VAR_3, VAR_2);

 if (VAR_8 < 0)
  return VAR_8;
 VAR_6->id = VAR_8;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_4, VAR_8);
  if (!(VAR_8 == 0 && VAR_7 == -VAR_0))
   return VAR_7;


  VAR_8 = FUNC_0(&VAR_4, 1, VAR_3, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_6->id = VAR_8;

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7) {
   FUNC_1(&VAR_4, VAR_8);
   return VAR_7;
  }
 }

 if (VAR_6->ops->restart) {
  VAR_6->restart_nb.notifier_call = VAR_5;

  VAR_7 = FUNC_4(&VAR_6->restart_nb);
  if (VAR_7)
   FUNC_3("watchdog%d: Cannot register restart handler (%d)\n",
    VAR_6->id, VAR_7);
 }

 return 0;
}

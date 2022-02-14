
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {scalar_t__ unload; int issuepend_done; struct megasas_aen_event* ev; TYPE_1__* pdev; int * aen_cmd; } ;
struct megasas_cmd {scalar_t__ abort_aen; } ;
struct megasas_aen_event {int hotplug_work; struct megasas_instance* instance; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct megasas_aen_event* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct megasas_instance*,struct megasas_cmd*) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct megasas_instance *VAR_8, struct megasas_cmd *VAR_9)
{
 unsigned long VAR_10;




 if ((!VAR_9->abort_aen) && (VAR_8->unload == 0)) {
  FUNC_6(&VAR_7, VAR_10);
  VAR_6 = 1;
  FUNC_7(&VAR_7, VAR_10);
  FUNC_8(&VAR_5);
  FUNC_2(&VAR_4, VAR_2, VAR_1);
 }
 else
  VAR_9->abort_aen = 0;

 VAR_8->aen_cmd = ((void*)0);

 FUNC_4(VAR_8, VAR_9);

 if ((VAR_8->unload == 0) &&
  ((VAR_8->issuepend_done == 1))) {
  struct megasas_aen_event *VAR_11;

  VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_0);
  if (!VAR_11) {
   FUNC_1(&VAR_8->pdev->dev, "megasas_service_aen: out of memory\n");
  } else {
   VAR_11->instance = VAR_8;
   VAR_8->ev = VAR_11;
   FUNC_0(&VAR_11->hotplug_work,
       VAR_3);
   FUNC_5(&VAR_11->hotplug_work, 0);
  }
 }
}

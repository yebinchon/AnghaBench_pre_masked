
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct cx18 {int in_work_queue; int in_workq_name; TYPE_1__ v4l2_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct cx18 *VAR_1)
{
 FUNC_2(VAR_1->in_workq_name, sizeof(VAR_1->in_workq_name), "%s-in",
   VAR_1->v4l2_dev.name);
 VAR_1->in_work_queue = FUNC_1("%s", 0, VAR_1->in_workq_name);
 if (!VAR_1->in_work_queue) {
  FUNC_0("Unable to create incoming mailbox handler thread\n");
  return -VAR_0;
 }
 return 0;
}

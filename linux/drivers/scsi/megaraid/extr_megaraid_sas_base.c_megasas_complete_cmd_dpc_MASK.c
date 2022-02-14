
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct megasas_instance {size_t max_fw_cmds; int completion_lock; int * consumer; struct megasas_cmd** cmd_list; TYPE_1__* pdev; int * reply_queue; int * producer; int adprecovery; } ;
struct megasas_cmd {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,char*,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct megasas_instance*) ;
 int FUNC_6 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 struct megasas_cmd *VAR_6;
 struct megasas_instance *VAR_7 =
    (struct megasas_instance *)VAR_2;
 unsigned long VAR_8;


 if (FUNC_1(&VAR_7->adprecovery) == VAR_1)
  return;

 FUNC_7(&VAR_7->completion_lock, VAR_8);

 VAR_3 = FUNC_4(*VAR_7->producer);
 VAR_4 = FUNC_4(*VAR_7->consumer);

 while (VAR_4 != VAR_3) {
  VAR_5 = FUNC_4(VAR_7->reply_queue[VAR_4]);
  if (VAR_5 >= VAR_7->max_fw_cmds) {
   FUNC_3(&VAR_7->pdev->dev, "Unexpected context value %x\n",
    VAR_5);
   FUNC_0();
  }

  VAR_6 = VAR_7->cmd_list[VAR_5];

  FUNC_6(VAR_7, VAR_6, VAR_0);

  VAR_4++;
  if (VAR_4 == (VAR_7->max_fw_cmds + 1)) {
   VAR_4 = 0;
  }
 }

 *VAR_7->consumer = FUNC_2(VAR_3);

 FUNC_8(&VAR_7->completion_lock, VAR_8);




 FUNC_5(VAR_7);
}

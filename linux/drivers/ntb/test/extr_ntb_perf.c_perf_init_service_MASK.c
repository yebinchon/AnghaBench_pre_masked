
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct perf_ctx {scalar_t__ pcnt; TYPE_1__* ntb; int cmd_recv; int cmd_send; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct perf_ctx *VAR_6)
{
 u64 VAR_7;

 if (FUNC_6(VAR_6->ntb) < VAR_6->pcnt + 1) {
  FUNC_3(&VAR_6->ntb->dev, "Not enough memory windows\n");
  return -VAR_0;
 }

 if (FUNC_5(VAR_6->ntb) >= VAR_1) {
  VAR_6->cmd_send = VAR_3;
  VAR_6->cmd_recv = VAR_2;

  FUNC_2(&VAR_6->ntb->dev, "Message service initialized\n");

  return 0;
 }

 FUNC_2(&VAR_6->ntb->dev, "Message service unsupported\n");

 VAR_7 = FUNC_0(VAR_6->pcnt, 0);
 if (FUNC_7(VAR_6->ntb) >= FUNC_1(VAR_6->pcnt) &&
     (FUNC_4(VAR_6->ntb) & VAR_7) == VAR_7) {
  VAR_6->cmd_send = VAR_5;
  VAR_6->cmd_recv = VAR_4;

  FUNC_2(&VAR_6->ntb->dev, "Scratchpad service initialized\n");

  return 0;
 }

 FUNC_2(&VAR_6->ntb->dev, "Scratchpad service unsupported\n");

 FUNC_3(&VAR_6->ntb->dev, "Command services unsupported\n");

 return -VAR_0;
}

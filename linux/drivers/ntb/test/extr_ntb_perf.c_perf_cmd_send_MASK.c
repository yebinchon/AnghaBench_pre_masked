
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_peer {struct perf_ctx* perf; } ;
struct perf_ctx {int (* cmd_send ) (struct perf_peer*,int,int ) ;TYPE_1__* ntb; } ;
typedef enum perf_cmd { ____Placeholder_perf_cmd } perf_cmd ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct perf_peer*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_peer *VAR_3, enum perf_cmd VAR_4, u64 VAR_5)
{
 struct perf_ctx *VAR_6 = VAR_3->perf;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_2)
  return VAR_6->cmd_send(VAR_3, VAR_4, VAR_5);

 FUNC_0(&VAR_6->ntb->dev, "Send invalid command\n");
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* qflags; void* mode; void* bursttime; void* logcwmax; void* logcwmin; void* aifs; void* priority; } ;
struct ar5523_cmd_txq_setup {TYPE_1__ attr; void* len; void* qid; } ;
struct ar5523 {int dummy; } ;
typedef int qinfo ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_txq_setup*,int,int ) ;
 int FUNC_1 (struct ar5523*,char*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_1)
{
 struct ar5523_cmd_txq_setup VAR_2;

 FUNC_1(VAR_1, "setting up Tx queue\n");
 VAR_2.qid = FUNC_2(0);
 VAR_2.len = FUNC_2(sizeof(VAR_2.attr));
 VAR_2.attr.priority = FUNC_2(0);
 VAR_2.attr.aifs = FUNC_2(3);
 VAR_2.attr.logcwmin = FUNC_2(4);
 VAR_2.attr.logcwmax = FUNC_2(10);
 VAR_2.attr.bursttime = FUNC_2(0);
 VAR_2.attr.mode = FUNC_2(0);
 VAR_2.attr.qflags = FUNC_2(1);
 return FUNC_0(VAR_1, VAR_0, &VAR_2,
     sizeof(VAR_2), 0);
}

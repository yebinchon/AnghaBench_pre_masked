
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct adapter* private; } ;
struct mbox_cmd_log {scalar_t__ size; } ;
struct adapter {struct mbox_cmd_log* mbox_log; } ;
typedef scalar_t__ loff_t ;



__attribute__((used)) static inline void *FUNC_0(struct seq_file *VAR_0, loff_t VAR_1)
{
 struct adapter *VAR_2 = VAR_0->private;
 struct mbox_cmd_log *VAR_3 = VAR_2->mbox_log;

 return ((VAR_1 <= VAR_3->size) ? (void *)(uintptr_t)(VAR_1 + 1) : ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct pstore_private* private; } ;
struct pstore_private {TYPE_1__* record; } ;
struct pstore_ftrace_seq_data {scalar_t__ off; } ;
struct pstore_ftrace_record {scalar_t__ parent_ip; scalar_t__ ip; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int FUNC_0 (struct pstore_ftrace_record*) ;
 int FUNC_1 (struct pstore_ftrace_record*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,scalar_t__,scalar_t__,void*,void*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct pstore_private *VAR_2 = VAR_0->private;
 struct pstore_ftrace_seq_data *VAR_3 = VAR_1;
 struct pstore_ftrace_record *VAR_4;

 VAR_4 = (struct pstore_ftrace_record *)(VAR_2->record->buf + VAR_3->off);

 FUNC_2(VAR_0, "CPU:%d ts:%llu %08lx  %08lx  %ps <- %pS\n",
     FUNC_0(VAR_4),
     FUNC_1(VAR_4),
     VAR_4->ip, VAR_4->parent_ip, (void *)VAR_4->ip,
     (void *)VAR_4->parent_ip);

 return 0;
}

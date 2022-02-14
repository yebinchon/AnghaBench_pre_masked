
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ramoops_context {scalar_t__ pmsg_read_cnt; scalar_t__ ftrace_read_cnt; scalar_t__ console_read_cnt; scalar_t__ dump_read_cnt; } ;
struct pstore_info {struct ramoops_context* data; } ;



__attribute__((used)) static int FUNC_0(struct pstore_info *VAR_0)
{
 struct ramoops_context *VAR_1 = VAR_0->data;

 VAR_1->dump_read_cnt = 0;
 VAR_1->console_read_cnt = 0;
 VAR_1->ftrace_read_cnt = 0;
 VAR_1->pmsg_read_cnt = 0;
 return 0;
}

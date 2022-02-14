
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {char const* name; char const* proc_name; struct module* module; } ;
struct module {int dummy; } ;


 struct scsi_host_template VAR_0 ;

void FUNC_0(struct scsi_host_template *VAR_1,
     const char *VAR_2, struct module *VAR_3)
{
 *VAR_1 = VAR_0;
 VAR_1->name = VAR_2;
 VAR_1->proc_name = VAR_2;
 VAR_1->module = VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenpf_symdata {int type; int address; } ;
struct TYPE_3__ {struct xenpf_symdata symdata; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct xensyms {int name; TYPE_2__ op; } ;
struct seq_file {scalar_t__ private; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct xensyms *VAR_2 = (struct xensyms *)VAR_0->private;
 struct xenpf_symdata *VAR_3 = &VAR_2->op.u.symdata;

 FUNC_0(VAR_0, "%016llx %c %s\n", VAR_3->address,
     VAR_3->type, VAR_2->name);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int symnum; } ;
struct TYPE_5__ {TYPE_1__ symdata; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct xensyms {TYPE_3__ op; } ;
struct seq_file {void* private; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct xensyms*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct xensyms *VAR_2 = (struct xensyms *)VAR_0->private;

 VAR_2->op.u.symdata.symnum = *VAR_1;

 if (FUNC_0(VAR_2))
  return ((void*)0);

 return VAR_0->private;
}

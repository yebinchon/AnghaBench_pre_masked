
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ symnum; } ;
struct TYPE_5__ {TYPE_1__ symdata; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct xensyms {TYPE_3__ op; } ;
struct seq_file {scalar_t__ private; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct xensyms*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct xensyms *VAR_3 = (struct xensyms *)VAR_0->private;

 VAR_3->op.u.symdata.symnum = ++(*VAR_2);

 if (FUNC_0(VAR_3))
  return ((void*)0);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {void* key; scalar_t__ done; } ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 if (FUNC_0(VAR_1)->done)
  return ((void*)0);

 return *VAR_2 ? FUNC_0(VAR_1)->key : VAR_0;
}

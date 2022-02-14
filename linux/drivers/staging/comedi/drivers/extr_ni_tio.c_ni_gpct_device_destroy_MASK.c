
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {struct ni_gpct_device* counters; struct ni_gpct_device* regs; } ;


 int FUNC_0 (struct ni_gpct_device*) ;

void FUNC_1(struct ni_gpct_device *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->regs);
 FUNC_0(VAR_0->counters);
 FUNC_0(VAR_0);
}

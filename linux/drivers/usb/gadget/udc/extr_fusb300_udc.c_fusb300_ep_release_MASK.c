
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb300_ep {scalar_t__ wedged; scalar_t__ stall; scalar_t__ epnum; } ;



__attribute__((used)) static int FUNC_0(struct fusb300_ep *VAR_0)
{
 if (!VAR_0->epnum)
  return 0;
 VAR_0->epnum = 0;
 VAR_0->stall = 0;
 VAR_0->wedged = 0;
 return 0;
}

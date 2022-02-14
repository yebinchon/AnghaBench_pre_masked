
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_ep {scalar_t__ epnum; int fotg210; scalar_t__ wedged; scalar_t__ stall; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct fotg210_ep *VAR_0)
{
 if (!VAR_0->epnum)
  return 0;
 VAR_0->epnum = 0;
 VAR_0->stall = 0;
 VAR_0->wedged = 0;

 FUNC_0(VAR_0->fotg210, VAR_0->epnum);

 return 0;
}

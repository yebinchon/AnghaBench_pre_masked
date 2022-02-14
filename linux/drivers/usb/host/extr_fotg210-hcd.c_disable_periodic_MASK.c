
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {scalar_t__ periodic_count; } ;


 int FUNC_0 (struct fotg210_hcd*) ;

__attribute__((used)) static void FUNC_1(struct fotg210_hcd *VAR_0)
{
 if (--VAR_0->periodic_count)
  return;


 FUNC_0(VAR_0);
}

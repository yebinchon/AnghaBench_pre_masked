
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {int scanning; int need_rescan; scalar_t__ intr_count; scalar_t__ isoc_count; scalar_t__ async_count; } ;


 int FUNC_0 (struct fotg210_hcd*) ;
 int FUNC_1 (struct fotg210_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*) ;
 int FUNC_3 (struct fotg210_hcd*) ;

__attribute__((used)) static void FUNC_4(struct fotg210_hcd *VAR_0)
{




 if (VAR_0->scanning) {
  VAR_0->need_rescan = 1;
  return;
 }
 VAR_0->scanning = 1;

rescan:
 VAR_0->need_rescan = 0;
 if (VAR_0->async_count)
  FUNC_0(VAR_0);
 if (VAR_0->intr_count > 0)
  FUNC_1(VAR_0);
 if (VAR_0->isoc_count > 0)
  FUNC_2(VAR_0);
 if (VAR_0->need_rescan)
  goto rescan;
 VAR_0->scanning = 0;





 FUNC_3(VAR_0);
}

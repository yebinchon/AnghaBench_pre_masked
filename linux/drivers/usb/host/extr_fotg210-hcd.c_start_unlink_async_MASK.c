
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_qh {scalar_t__ qh_state; int needs_rescan; } ;
struct fotg210_hcd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_1 (struct fotg210_hcd*,int) ;

__attribute__((used)) static void FUNC_2(struct fotg210_hcd *VAR_2,
  struct fotg210_qh *VAR_3)
{





 if (VAR_3->qh_state != VAR_1) {
  if (VAR_3->qh_state == VAR_0)
   VAR_3->needs_rescan = 1;
  return;
 }

 FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_2, 0);
}

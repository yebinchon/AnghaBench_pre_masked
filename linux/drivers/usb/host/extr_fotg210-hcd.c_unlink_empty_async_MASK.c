
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct fotg210_qh* qh; } ;
struct fotg210_qh {scalar_t__ qh_state; scalar_t__ unlink_cycle; int qtd_list; TYPE_3__ qh_next; } ;
struct fotg210_hcd {scalar_t__ rh_state; scalar_t__ async_unlink_cycle; scalar_t__ async_unlink; TYPE_2__* async; } ;
struct TYPE_4__ {struct fotg210_qh* qh; } ;
struct TYPE_5__ {TYPE_1__ qh_next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fotg210_hcd*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_3 (struct fotg210_hcd*,int) ;

__attribute__((used)) static void FUNC_4(struct fotg210_hcd *VAR_3)
{
 struct fotg210_qh *VAR_4, *VAR_5;
 bool VAR_6 = (VAR_3->rh_state < VAR_1);
 bool VAR_7 = 0;


 VAR_5 = VAR_3->async->qh_next.qh;
 while (VAR_5) {
  VAR_4 = VAR_5;
  VAR_5 = VAR_4->qh_next.qh;

  if (FUNC_1(&VAR_4->qtd_list) &&
    VAR_4->qh_state == VAR_2) {
   if (!VAR_6 && VAR_4->unlink_cycle ==
     VAR_3->async_unlink_cycle)
    VAR_7 = 1;
   else
    FUNC_2(VAR_3, VAR_4);
  }
 }


 if (VAR_3->async_unlink)
  FUNC_3(VAR_3, 0);


 if (VAR_7) {
  FUNC_0(VAR_3, VAR_0,
    1);
  ++VAR_3->async_unlink_cycle;
 }
}

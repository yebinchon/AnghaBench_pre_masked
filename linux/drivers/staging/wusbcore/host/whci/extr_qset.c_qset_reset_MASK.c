
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_window; int status; } ;
struct whc_qset {int max_burst; TYPE_1__ qh; scalar_t__ reset; } ;
struct whc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct whc *VAR_1, struct whc_qset *VAR_2)
{
 VAR_2->reset = 0;

 VAR_2->qh.status &= ~VAR_0;
 VAR_2->qh.cur_window = FUNC_0((1 << VAR_2->max_burst) - 1);
}

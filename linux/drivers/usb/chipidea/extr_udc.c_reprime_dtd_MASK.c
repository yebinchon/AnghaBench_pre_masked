
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct td_node {int dma; } ;
struct TYPE_6__ {TYPE_2__* ptr; } ;
struct ci_hw_ep {scalar_t__ type; int dir; int num; TYPE_3__ qh; } ;
struct ci_hdrc {int dummy; } ;
struct TYPE_4__ {int token; int next; } ;
struct TYPE_5__ {TYPE_1__ td; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ci_hdrc*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ci_hdrc *VAR_3, struct ci_hw_ep *VAR_4,
        struct td_node *VAR_5)
{
 VAR_4->qh.ptr->td.next = FUNC_0(VAR_5->dma);
 VAR_4->qh.ptr->td.token &=
  FUNC_0(~(VAR_1 | VAR_0));

 return FUNC_1(VAR_3, VAR_4->num, VAR_4->dir,
    VAR_4->type == VAR_2);
}

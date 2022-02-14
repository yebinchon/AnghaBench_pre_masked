
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union fotg210_shadow {TYPE_3__* itd; TYPE_2__* fstn; TYPE_1__* qh; } ;
struct fotg210_hcd {int dummy; } ;
typedef int __hc32 ;
struct TYPE_6__ {union fotg210_shadow itd_next; } ;
struct TYPE_5__ {union fotg210_shadow fstn_next; } ;
struct TYPE_4__ {union fotg210_shadow qh_next; } ;




 int FUNC_0 (struct fotg210_hcd*,int ) ;

__attribute__((used)) static union fotg210_shadow *FUNC_1(struct fotg210_hcd *VAR_0,
  union fotg210_shadow *VAR_1, __hc32 VAR_2)
{
 switch (FUNC_0(VAR_0, VAR_2)) {
 case 128:
  return &VAR_1->qh->qh_next;
 case 129:
  return &VAR_1->fstn->fstn_next;
 default:
  return &VAR_1->itd->itd_next;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union fotg210_shadow {int * hw_next; TYPE_2__* qh; } ;
struct fotg210_hcd {int dummy; } ;
typedef int __hc32 ;
struct TYPE_4__ {TYPE_1__* hw; } ;
struct TYPE_3__ {int hw_next; } ;



 int FUNC_0 (struct fotg210_hcd*,int ) ;

__attribute__((used)) static __hc32 *FUNC_1(struct fotg210_hcd *VAR_0,
  union fotg210_shadow *VAR_1, __hc32 VAR_2)
{
 switch (FUNC_0(VAR_0, VAR_2)) {

 case 128:
  return &VAR_1->qh->hw->hw_next;

 default:
  return VAR_1->hw_next;
 }
}

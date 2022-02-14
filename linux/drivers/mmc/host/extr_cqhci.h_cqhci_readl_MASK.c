
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cqhci_host {scalar_t__ mmio; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_l ) (struct cqhci_host*,int) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cqhci_host*,int) ;
 scalar_t__ FUNC_2 (int (*) (struct cqhci_host*,int)) ;

__attribute__((used)) static inline u32 FUNC_3(struct cqhci_host *VAR_0, int VAR_1)
{
 if (FUNC_2(VAR_0->ops->read_l))
  return VAR_0->ops->read_l(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0->mmio + VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cqhci_host {scalar_t__ mmio; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_l ) (struct cqhci_host*,int ,int) ;} ;


 int FUNC_0 (struct cqhci_host*,int ,int) ;
 scalar_t__ FUNC_1 (int (*) (struct cqhci_host*,int ,int)) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct cqhci_host *VAR_0, u32 VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_0->ops->write_l))
  VAR_0->ops->write_l(VAR_0, VAR_1, VAR_2);
 else
  FUNC_2(VAR_1, VAR_0->mmio + VAR_2);
}

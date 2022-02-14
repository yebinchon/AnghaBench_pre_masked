
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cqhci_host {int* trans_desc_base; int trans_desc_len; TYPE_1__* mmc; } ;
struct TYPE_2__ {int max_segs; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct cqhci_host *VAR_0, u8 VAR_1)
{
 return VAR_0->trans_desc_base +
  (VAR_0->trans_desc_len * VAR_0->mmc->max_segs * VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cqhci_host {int* desc_base; int slot_sz; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct cqhci_host *VAR_0, u8 VAR_1)
{
 return VAR_0->desc_base + (VAR_1 * VAR_0->slot_sz);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uhci_td {void* buffer; void* token; void* status; } ;
struct uhci_hcd {int dummy; } ;


 void* FUNC_0 (struct uhci_hcd*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct uhci_hcd *VAR_0, struct uhci_td *VAR_1,
  u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 VAR_1->status = FUNC_0(VAR_0, VAR_2);
 VAR_1->token = FUNC_0(VAR_0, VAR_3);
 VAR_1->buffer = FUNC_0(VAR_0, VAR_4);
}

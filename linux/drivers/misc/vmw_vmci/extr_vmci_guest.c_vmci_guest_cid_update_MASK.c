
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmci_event_payld_ctx {scalar_t__ context_id; } ;
struct vmci_event_data {int event; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 struct vmci_event_payld_ctx* FUNC_1 (struct vmci_event_data const*) ;

__attribute__((used)) static void FUNC_2(u32 VAR_3,
      const struct vmci_event_data *VAR_4,
      void *VAR_5)
{
 const struct vmci_event_payld_ctx *VAR_6 =
    FUNC_1(VAR_4);

 if (VAR_3 != VAR_1) {
  FUNC_0("Invalid subscriber (ID=0x%x)\n", VAR_3);
  return;
 }

 if (!VAR_4 || VAR_6->context_id == VAR_0) {
  FUNC_0("Invalid event data\n");
  return;
 }

 FUNC_0("Updating context from (ID=0x%x) to (ID=0x%x) on event (type=%d)\n",
   VAR_2, VAR_6->context_id, VAR_4->event);

 VAR_2 = VAR_6->context_id;
}

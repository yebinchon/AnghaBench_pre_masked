
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int quirks; } ;
struct xhci_event_cmd {int status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct xhci_hcd*,int ,char*,int ,int ) ;
 int FUNC_4 (struct xhci_hcd*,char*) ;

__attribute__((used)) static void FUNC_5(struct xhci_hcd *VAR_2,
  struct xhci_event_cmd *VAR_3)
{
 if (!(VAR_2->quirks & VAR_0)) {
  FUNC_4(VAR_2, "WARN NEC_GET_FW command on non-NEC host\n");
  return;
 }
 FUNC_3(VAR_2, VAR_1,
   "NEC firmware version %2x.%02x",
   FUNC_0(FUNC_2(VAR_3->status)),
   FUNC_1(FUNC_2(VAR_3->status)));
}

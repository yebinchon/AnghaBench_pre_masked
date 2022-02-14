
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_response {int status; } ;
struct pci_create_int_response {int int_desc; } ;
struct TYPE_2__ {int host_event; int completion_status; } ;
struct compose_comp_ctxt {TYPE_1__ comp_pkt; int int_desc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct pci_response *VAR_1,
     int VAR_2)
{
 struct compose_comp_ctxt *VAR_3 = VAR_0;
 struct pci_create_int_response *VAR_4 =
  (struct pci_create_int_response *)VAR_1;

 VAR_3->comp_pkt.completion_status = VAR_1->status;
 VAR_3->int_desc = VAR_4->int_desc;
 FUNC_0(&VAR_3->comp_pkt.host_event);
}

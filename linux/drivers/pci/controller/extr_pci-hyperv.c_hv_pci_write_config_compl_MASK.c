
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_response {int status; } ;
struct hv_pci_compl {int host_event; int completion_status; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct pci_response *VAR_1,
          int VAR_2)
{
 struct hv_pci_compl *VAR_3 = VAR_0;

 VAR_3->completion_status = VAR_1->status;
 FUNC_0(&VAR_3->host_event);
}

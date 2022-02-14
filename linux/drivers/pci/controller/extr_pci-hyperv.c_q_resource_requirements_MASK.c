
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct q_res_req_compl {int host_event; TYPE_3__* hpdev; } ;
struct pci_response {int status; } ;
struct pci_q_res_req_response {int * probed_bar; } ;
struct TYPE_6__ {int * probed_bar; TYPE_2__* hbus; } ;
struct TYPE_5__ {TYPE_1__* hdev; } ;
struct TYPE_4__ {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct pci_response *VAR_1,
        int VAR_2)
{
 struct q_res_req_compl *VAR_3 = VAR_0;
 struct pci_q_res_req_response *VAR_4 =
  (struct pci_q_res_req_response *)VAR_1;
 int VAR_5;

 if (VAR_1->status < 0) {
  FUNC_1(&VAR_3->hpdev->hbus->hdev->device,
   "query resource requirements failed: %x\n",
   VAR_1->status);
 } else {
  for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
   VAR_3->hpdev->probed_bar[VAR_5] =
    VAR_4->probed_bar[VAR_5];
  }
 }

 FUNC_0(&VAR_3->host_event);
}

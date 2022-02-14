
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb2_sync_hdr {scalar_t__ CreditRequest; } ;
struct TCP_Server_Info {int request_q; int req_lock; int credits; TYPE_1__* vals; } ;
struct TYPE_2__ {scalar_t__ header_preamble_size; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, struct TCP_Server_Info *VAR_1)
{
 struct smb2_sync_hdr *VAR_2 = (struct smb2_sync_hdr *)VAR_0;




 if (VAR_1->vals->header_preamble_size)
  return;

 if (VAR_2->CreditRequest) {
  FUNC_1(&VAR_1->req_lock);
  VAR_1->credits += FUNC_0(VAR_2->CreditRequest);
  FUNC_2(&VAR_1->req_lock);
  FUNC_3(&VAR_1->request_q);
 }
}

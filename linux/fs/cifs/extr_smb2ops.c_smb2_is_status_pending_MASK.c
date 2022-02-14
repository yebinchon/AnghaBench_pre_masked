
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {scalar_t__ Status; scalar_t__ CreditRequest; } ;
struct TCP_Server_Info {int request_q; int req_lock; int credits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(char *VAR_1, struct TCP_Server_Info *VAR_2)
{
 struct smb2_sync_hdr *VAR_3 = (struct smb2_sync_hdr *)VAR_1;

 if (VAR_3->Status != VAR_0)
  return 0;

 if (VAR_3->CreditRequest) {
  FUNC_1(&VAR_2->req_lock);
  VAR_2->credits += FUNC_0(VAR_3->CreditRequest);
  FUNC_2(&VAR_2->req_lock);
  FUNC_3(&VAR_2->request_q);
 }

 return 1;
}

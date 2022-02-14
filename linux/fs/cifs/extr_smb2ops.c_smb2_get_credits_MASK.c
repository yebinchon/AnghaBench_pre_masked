
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {int CreditRequest; } ;
struct mid_q_entry {scalar_t__ mid_state; scalar_t__ resp_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct mid_q_entry *VAR_2)
{
 struct smb2_sync_hdr *VAR_3 = (struct smb2_sync_hdr *)VAR_2->resp_buf;

 if (VAR_2->mid_state == VAR_1
     || VAR_2->mid_state == VAR_0)
  return FUNC_0(VAR_3->CreditRequest);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb_hdr {int Flags2; } ;
struct mid_q_entry {int sequence_number; } ;
struct TCP_Server_Info {scalar_t__ sign; } ;
struct TYPE_2__ {scalar_t__ iov_base; int iov_len; } ;


 struct mid_q_entry* FUNC_0 (struct smb_hdr*,struct TCP_Server_Info*) ;
 int FUNC_1 (struct mid_q_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mid_q_entry* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct smb_rqst*,struct TCP_Server_Info*,int *) ;

struct mid_q_entry *
FUNC_4(struct TCP_Server_Info *VAR_3, struct smb_rqst *VAR_4)
{
 int VAR_5;
 struct smb_hdr *VAR_6 = (struct smb_hdr *)VAR_4->rq_iov[0].iov_base;
 struct mid_q_entry *VAR_7;

 if (VAR_4->rq_iov[0].iov_len != 4 ||
     VAR_4->rq_iov[0].iov_base + 4 != VAR_4->rq_iov[1].iov_base)
  return FUNC_2(-VAR_0);


 if (VAR_3->sign)
  VAR_6->Flags2 |= VAR_2;

 VAR_7 = FUNC_0(VAR_6, VAR_3);
 if (VAR_7 == ((void*)0))
  return FUNC_2(-VAR_1);

 VAR_5 = FUNC_3(VAR_4, VAR_3, &VAR_7->sequence_number);
 if (VAR_5) {
  FUNC_1(VAR_7);
  return FUNC_2(VAR_5);
 }

 return VAR_7;
}

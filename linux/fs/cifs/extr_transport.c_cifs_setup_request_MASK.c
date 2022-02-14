
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb_hdr {int dummy; } ;
struct mid_q_entry {int sequence_number; } ;
struct cifs_ses {int server; } ;
struct TYPE_2__ {scalar_t__ iov_base; int iov_len; } ;


 int VAR_0 ;
 struct mid_q_entry* FUNC_0 (int) ;
 int FUNC_1 (struct cifs_ses*,struct smb_hdr*,struct mid_q_entry**) ;
 int FUNC_2 (struct mid_q_entry*) ;
 int FUNC_3 (struct smb_rqst*,int ,int *) ;

struct mid_q_entry *
FUNC_4(struct cifs_ses *VAR_1, struct smb_rqst *VAR_2)
{
 int VAR_3;
 struct smb_hdr *VAR_4 = (struct smb_hdr *)VAR_2->rq_iov[0].iov_base;
 struct mid_q_entry *VAR_5;

 if (VAR_2->rq_iov[0].iov_len != 4 ||
     VAR_2->rq_iov[0].iov_base + 4 != VAR_2->rq_iov[1].iov_base)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_1(VAR_1, VAR_4, &VAR_5);
 if (VAR_3)
  return FUNC_0(VAR_3);
 VAR_3 = FUNC_3(VAR_2, VAR_1->server, &VAR_5->sequence_number);
 if (VAR_3) {
  FUNC_2(VAR_5);
  return FUNC_0(VAR_3);
 }
 return VAR_5;
}

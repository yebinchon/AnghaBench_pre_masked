
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb2_sync_hdr {int dummy; } ;
struct mid_q_entry {int dummy; } ;
struct cifs_ses {int server; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 struct mid_q_entry* FUNC_0 (int) ;
 int FUNC_1 (struct mid_q_entry*) ;
 int FUNC_2 (int ,struct smb2_sync_hdr*) ;
 int FUNC_3 (struct cifs_ses*,struct smb2_sync_hdr*,struct mid_q_entry**) ;
 int FUNC_4 (int ,struct smb2_sync_hdr*) ;
 int FUNC_5 (struct smb_rqst*,int ) ;

struct mid_q_entry *
FUNC_6(struct cifs_ses *VAR_0, struct smb_rqst *VAR_1)
{
 int VAR_2;
 struct smb2_sync_hdr *VAR_3 =
   (struct smb2_sync_hdr *)VAR_1->rq_iov[0].iov_base;
 struct mid_q_entry *VAR_4;

 FUNC_4(VAR_0->server, VAR_3);

 VAR_2 = FUNC_3(VAR_0, VAR_3, &VAR_4);
 if (VAR_2) {
  FUNC_2(VAR_0->server, VAR_3);
  return FUNC_0(VAR_2);
 }

 VAR_2 = FUNC_5(VAR_1, VAR_0->server);
 if (VAR_2) {
  FUNC_2(VAR_0->server, VAR_3);
  FUNC_1(VAR_4);
  return FUNC_0(VAR_2);
 }

 return VAR_4;
}

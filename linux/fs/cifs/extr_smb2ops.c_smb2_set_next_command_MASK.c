
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {size_t rq_nvec; TYPE_1__* rq_iov; } ;
struct smb2_sync_hdr {int NextCommand; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {int dummy; } ;
struct TYPE_2__ {int iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct cifs_tcon*) ;
 unsigned long FUNC_5 (struct TCP_Server_Info*,struct smb_rqst*) ;

void
FUNC_6(struct cifs_tcon *VAR_2, struct smb_rqst *VAR_3)
{
 struct smb2_sync_hdr *VAR_4;
 struct cifs_ses *VAR_5 = VAR_2->ses;
 struct TCP_Server_Info *VAR_6 = VAR_5->server;
 unsigned long VAR_7 = FUNC_5(VAR_6, VAR_3);
 int VAR_8, VAR_9;

 VAR_4 = (struct smb2_sync_hdr *)(VAR_3->rq_iov[0].iov_base);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_0, "shdr NULL in smb2_set_next_command\n");
  return;
 }




 if (!(VAR_7 & 7))
  goto finished;

 VAR_9 = 8 - (VAR_7 & 7);
 if (!FUNC_4(VAR_2)) {




  VAR_3->rq_iov[VAR_3->rq_nvec].iov_base = VAR_1;
  VAR_3->rq_iov[VAR_3->rq_nvec].iov_len = VAR_9;
  VAR_3->rq_nvec++;
  VAR_7 += VAR_9;
 } else {







  for (VAR_8 = 1; VAR_8 < VAR_3->rq_nvec; VAR_8++) {
   FUNC_2(VAR_3->rq_iov[0].iov_base +
          VAR_3->rq_iov[0].iov_len,
          VAR_3->rq_iov[VAR_8].iov_base,
          VAR_3->rq_iov[VAR_8].iov_len);
   VAR_3->rq_iov[0].iov_len += VAR_3->rq_iov[VAR_8].iov_len;
  }
  FUNC_3(VAR_3->rq_iov[0].iov_base + VAR_3->rq_iov[0].iov_len,
         0, VAR_9);
  VAR_3->rq_iov[0].iov_len += VAR_9;
  VAR_7 += VAR_9;
  VAR_3->rq_nvec = 1;
 }

 finished:
 VAR_4->NextCommand = FUNC_1(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_2__ {int Flags; int SessionId; } ;
struct smb2_logoff_req {TYPE_1__ sync_hdr; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_ses {int session_flags; int Suid; scalar_t__ need_reconnect; struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {scalar_t__ sign; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,struct cifs_ses*) ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (struct smb2_logoff_req*) ;
 int FUNC_3 (struct smb_rqst*,int ,int) ;
 int FUNC_4 (int ,int *,void**,unsigned int*) ;

int
FUNC_5(const unsigned int VAR_7, struct cifs_ses *VAR_8)
{
 struct smb_rqst VAR_9;
 struct smb2_logoff_req *VAR_10;
 int VAR_11 = 0;
 struct TCP_Server_Info *VAR_12;
 int VAR_13 = 0;
 unsigned int VAR_14;
 struct kvec VAR_15[1];
 struct kvec VAR_16;
 int VAR_17;

 FUNC_0(VAR_3, "disconnect session %p\n", VAR_8);

 if (VAR_8 && (VAR_8->server))
  VAR_12 = VAR_8->server;
 else
  return -VAR_2;


 if (VAR_8->need_reconnect)
  goto smb2_session_already_dead;

 VAR_11 = FUNC_4(VAR_5, ((void*)0), (void **) &VAR_10, &VAR_14);
 if (VAR_11)
  return VAR_11;


 VAR_10->sync_hdr.SessionId = VAR_8->Suid;

 if (VAR_8->session_flags & VAR_6)
  VAR_13 |= VAR_1;
 else if (VAR_12->sign)
  VAR_10->sync_hdr.Flags |= VAR_4;

 VAR_13 |= VAR_0;

 VAR_15[0].iov_base = (char *)VAR_10;
 VAR_15[0].iov_len = VAR_14;

 FUNC_3(&VAR_9, 0, sizeof(struct smb_rqst));
 VAR_9.rq_iov = VAR_15;
 VAR_9.rq_nvec = 1;

 VAR_11 = FUNC_1(VAR_7, VAR_8, &VAR_9, &VAR_17, VAR_13, &VAR_16);
 FUNC_2(VAR_10);





smb2_session_already_dead:
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct smb2_tree_disconnect_req {int dummy; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {struct cifs_ses* ses; scalar_t__ need_reconnect; } ;
struct cifs_ses {scalar_t__ need_reconnect; int server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (struct smb2_tree_disconnect_req*) ;
 int FUNC_3 (struct cifs_tcon*,int ) ;
 int FUNC_4 (struct smb_rqst*,int ,int) ;
 int FUNC_5 (int ,struct cifs_tcon*,void**,unsigned int*) ;
 scalar_t__ FUNC_6 (struct cifs_tcon*) ;

int
FUNC_7(const unsigned int VAR_6, struct cifs_tcon *VAR_7)
{
 struct smb_rqst VAR_8;
 struct smb2_tree_disconnect_req *VAR_9;
 int VAR_10 = 0;
 struct cifs_ses *VAR_11 = VAR_7->ses;
 int VAR_12 = 0;
 unsigned int VAR_13;
 struct kvec VAR_14[1];
 struct kvec VAR_15;
 int VAR_16;

 FUNC_0(VAR_3, "Tree Disconnect\n");

 if (!VAR_11 || !(VAR_11->server))
  return -VAR_2;

 if ((VAR_7->need_reconnect) || (VAR_7->ses->need_reconnect))
  return 0;

 VAR_10 = FUNC_5(VAR_4, VAR_7, (void **) &VAR_9,
        &VAR_13);
 if (VAR_10)
  return VAR_10;

 if (FUNC_6(VAR_7))
  VAR_12 |= VAR_1;

 VAR_12 |= VAR_0;

 VAR_14[0].iov_base = (char *)VAR_9;
 VAR_14[0].iov_len = VAR_13;

 FUNC_4(&VAR_8, 0, sizeof(struct smb_rqst));
 VAR_8.rq_iov = VAR_14;
 VAR_8.rq_nvec = 1;

 VAR_10 = FUNC_1(VAR_6, VAR_11, &VAR_8, &VAR_16, VAR_12, &VAR_15);
 FUNC_2(VAR_9);
 if (VAR_10)
  FUNC_3(VAR_7, VAR_5);

 return VAR_10;
}

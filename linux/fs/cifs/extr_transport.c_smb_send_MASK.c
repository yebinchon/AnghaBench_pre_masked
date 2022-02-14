
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
typedef char smb_hdr ;
struct kvec {char* iov_base; int iov_len; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*,int,struct smb_rqst*) ;

int
FUNC_1(struct TCP_Server_Info *VAR_0, struct smb_hdr *VAR_1,
  unsigned int VAR_2)
{
 struct kvec VAR_3[2];
 struct smb_rqst VAR_4 = { .rq_iov = VAR_3,
     .rq_nvec = 2 };

 VAR_3[0].iov_base = VAR_1;
 VAR_3[0].iov_len = 4;
 VAR_3[1].iov_base = (char *)VAR_1 + 4;
 VAR_3[1].iov_len = VAR_2;

 return FUNC_0(VAR_0, 1, &VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct mid_q_entry {unsigned int resp_buf_size; scalar_t__ resp_buf; int decrypted; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct TCP_Server_Info {scalar_t__ sign; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int,unsigned int) ;
 int FUNC_4 (struct smb_rqst*,struct TCP_Server_Info*) ;
 int VAR_1 ;

int
FUNC_5(struct mid_q_entry *VAR_2, struct TCP_Server_Info *VAR_3,
     bool VAR_4)
{
 unsigned int VAR_5 = VAR_2->resp_buf_size;
 struct kvec VAR_6[1];
 struct smb_rqst VAR_7 = { .rq_iov = VAR_6,
     .rq_nvec = 1 };

 VAR_6[0].iov_base = (char *)VAR_2->resp_buf;
 VAR_6[0].iov_len = VAR_5;

 FUNC_1(VAR_2->resp_buf, FUNC_3(VAR_1, 80, VAR_5));

 if (VAR_5 > 24 && VAR_3->sign && !VAR_2->decrypted) {
  int VAR_8;

  VAR_8 = FUNC_4(&VAR_7, VAR_3);
  if (VAR_8)
   FUNC_0(VAR_0, "SMB signature verification returned error = %d\n",
     VAR_8);
 }

 return FUNC_2(VAR_2->resp_buf, VAR_4);
}

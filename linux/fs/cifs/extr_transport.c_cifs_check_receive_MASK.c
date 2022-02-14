
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct mid_q_entry {char* resp_buf; int sequence_number; } ;
struct kvec {char* iov_base; int iov_len; } ;
struct TCP_Server_Info {scalar_t__ sign; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct smb_rqst*,struct TCP_Server_Info*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int,unsigned int) ;
 int VAR_1 ;

int
FUNC_6(struct mid_q_entry *VAR_2, struct TCP_Server_Info *VAR_3,
     bool VAR_4)
{
 unsigned int VAR_5 = FUNC_3(VAR_2->resp_buf) + 4;

 FUNC_2(VAR_2->resp_buf, FUNC_5(VAR_1, 92, VAR_5));


 if (VAR_3->sign) {
  struct kvec VAR_6[2];
  int VAR_7 = 0;
  struct smb_rqst VAR_8 = { .rq_iov = VAR_6,
      .rq_nvec = 2 };

  VAR_6[0].iov_base = VAR_2->resp_buf;
  VAR_6[0].iov_len = 4;
  VAR_6[1].iov_base = (char *)VAR_2->resp_buf + 4;
  VAR_6[1].iov_len = VAR_5 - 4;

  VAR_7 = FUNC_1(&VAR_8, VAR_3,
        VAR_2->sequence_number);
  if (VAR_7)
   FUNC_0(VAR_0, "SMB signature verification returned error = %d\n",
     VAR_7);
 }


 return FUNC_4(VAR_2->resp_buf, VAR_4);
}

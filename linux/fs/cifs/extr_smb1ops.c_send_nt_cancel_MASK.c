
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb_hdr {int smb_buf_length; scalar_t__ WordCount; int Command; } ;
struct mid_q_entry {int sequence_number; } ;
struct TCP_Server_Info {int srv_mutex; int sequence_number; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct smb_hdr*,struct TCP_Server_Info*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct smb_hdr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct smb_hdr*) ;
 int FUNC_8 (struct TCP_Server_Info*,struct smb_hdr*,int ) ;

__attribute__((used)) static int
FUNC_9(struct TCP_Server_Info *VAR_2, struct smb_rqst *VAR_3,
        struct mid_q_entry *VAR_4)
{
 int VAR_5 = 0;
 struct smb_hdr *VAR_6 = (struct smb_hdr *)VAR_3->rq_iov[0].iov_base;


 VAR_6->smb_buf_length = FUNC_3(sizeof(struct smb_hdr) - 4 + 2);
 VAR_6->Command = VAR_1;
 VAR_6->WordCount = 0;
 FUNC_7(0, VAR_6);

 FUNC_5(&VAR_2->srv_mutex);
 VAR_5 = FUNC_2(VAR_6, VAR_2, &VAR_4->sequence_number);
 if (VAR_5) {
  FUNC_6(&VAR_2->srv_mutex);
  return VAR_5;
 }






 --VAR_2->sequence_number;
 VAR_5 = FUNC_8(VAR_2, VAR_6, FUNC_0(VAR_6->smb_buf_length));
 if (VAR_5 < 0)
  VAR_2->sequence_number--;

 FUNC_6(&VAR_2->srv_mutex);

 FUNC_1(VAR_0, "issued NT_CANCEL for mid %u, rc = %d\n",
   FUNC_4(VAR_6), VAR_5);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct smb_hdr {int smb_buf_length; } ;
struct mid_q_entry {scalar_t__ mid_state; int resp_buf; int callback; int sequence_number; } ;
struct kvec {unsigned int iov_len; struct smb_hdr* iov_base; } ;
struct cifs_ses {struct TCP_Server_Info* server; } ;
struct cifs_credits {int value; int instance; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int sequence_number; int srv_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;
 int FUNC_1 (struct cifs_ses*,struct smb_hdr*,struct mid_q_entry**) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct mid_q_entry*,struct TCP_Server_Info*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mid_q_entry*) ;
 int FUNC_6 (struct TCP_Server_Info*) ;
 int FUNC_7 (struct TCP_Server_Info*) ;
 int FUNC_8 (struct mid_q_entry*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct smb_hdr*,struct TCP_Server_Info*,int *) ;
 int FUNC_11 (struct mid_q_entry*,struct TCP_Server_Info*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct smb_hdr*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct TCP_Server_Info*,struct smb_rqst*,struct mid_q_entry*) ;
 int FUNC_17 (struct TCP_Server_Info*,struct smb_hdr*,unsigned int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct TCP_Server_Info*,int const,int *) ;
 int FUNC_21 (struct TCP_Server_Info*,struct mid_q_entry*) ;

int
FUNC_22(const unsigned int VAR_10, struct cifs_ses *VAR_11,
     struct smb_hdr *VAR_12, struct smb_hdr *VAR_13,
     int *VAR_14, const int VAR_15)
{
 int VAR_16 = 0;
 struct mid_q_entry *VAR_17;
 unsigned int VAR_18 = FUNC_2(VAR_12->smb_buf_length);
 struct kvec VAR_19 = { .iov_base = VAR_12, .iov_len = VAR_18 };
 struct smb_rqst VAR_20 = { .rq_iov = &VAR_19, .rq_nvec = 1 };
 struct cifs_credits VAR_21 = { .value = 1, .instance = 0 };
 struct TCP_Server_Info *VAR_22;

 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_9, "Null smb session\n");
  return -VAR_3;
 }
 VAR_22 = VAR_11->server;
 if (VAR_22 == ((void*)0)) {
  FUNC_4(VAR_9, "Null tcp session\n");
  return -VAR_3;
 }

 if (VAR_22->tcpStatus == VAR_1)
  return -VAR_4;





 if (VAR_18 > VAR_0 + VAR_6 - 4) {
  FUNC_9(VAR_9, "Illegal length, greater than maximum frame, %d\n",
    VAR_18);
  return -VAR_3;
 }

 VAR_16 = FUNC_20(VAR_22, VAR_15, &VAR_21.instance);
 if (VAR_16)
  return VAR_16;





 FUNC_14(&VAR_22->srv_mutex);

 VAR_16 = FUNC_1(VAR_11, VAR_12, &VAR_17);
 if (VAR_16) {
  FUNC_15(&VAR_11->server->srv_mutex);

  FUNC_0(VAR_22, &VAR_21, 0);
  return VAR_16;
 }

 VAR_16 = FUNC_10(VAR_12, VAR_22, &VAR_17->sequence_number);
 if (VAR_16) {
  FUNC_15(&VAR_22->srv_mutex);
  goto out;
 }

 VAR_17->mid_state = VAR_7;

 FUNC_7(VAR_22);
 VAR_16 = FUNC_17(VAR_22, VAR_12, VAR_18);
 FUNC_6(VAR_22);
 FUNC_8(VAR_17);

 if (VAR_16 < 0)
  VAR_22->sequence_number -= 2;

 FUNC_15(&VAR_22->srv_mutex);

 if (VAR_16 < 0)
  goto out;

 VAR_16 = FUNC_21(VAR_22, VAR_17);
 if (VAR_16 != 0) {
  FUNC_16(VAR_22, &VAR_20, VAR_17);
  FUNC_18(&VAR_5);
  if (VAR_17->mid_state == VAR_7) {

   VAR_17->callback = VAR_2;
   FUNC_19(&VAR_5);
   FUNC_0(VAR_22, &VAR_21, 0);
   return VAR_16;
  }
  FUNC_19(&VAR_5);
 }

 VAR_16 = FUNC_11(VAR_17, VAR_22);
 if (VAR_16 != 0) {
  FUNC_0(VAR_22, &VAR_21, 0);
  return VAR_16;
 }

 if (!VAR_17->resp_buf || !VAR_13 ||
     VAR_17->mid_state != VAR_8) {
  VAR_16 = -VAR_3;
  FUNC_9(VAR_9, "Bad MID state?\n");
  goto out;
 }

 *VAR_14 = FUNC_12(VAR_17->resp_buf);
 FUNC_13(VAR_13, VAR_17->resp_buf, *VAR_14 + 4);
 VAR_16 = FUNC_3(VAR_17, VAR_22, 0);
out:
 FUNC_5(VAR_17);
 FUNC_0(VAR_22, &VAR_21, 0);

 return VAR_16;
}

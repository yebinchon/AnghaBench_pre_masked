
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct smb_hdr {scalar_t__ Command; int smb_buf_length; } ;
struct mid_q_entry {scalar_t__ mid_state; int resp_buf; int callback; int sequence_number; } ;
struct kvec {unsigned int iov_len; struct smb_hdr* iov_base; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int sequence_number; int response_q; int srv_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct cifs_ses*,struct smb_hdr*,struct mid_q_entry**) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct mid_q_entry*,struct TCP_Server_Info*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mid_q_entry*) ;
 int FUNC_5 (struct TCP_Server_Info*) ;
 int FUNC_6 (struct TCP_Server_Info*) ;
 int FUNC_7 (struct mid_q_entry*) ;
 int FUNC_8 (struct smb_hdr*,struct TCP_Server_Info*,int *) ;
 int FUNC_9 (struct mid_q_entry*,struct TCP_Server_Info*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct smb_hdr*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct TCP_Server_Info*,struct smb_rqst*,struct mid_q_entry*) ;
 int FUNC_16 (unsigned int const,struct cifs_tcon*,struct smb_hdr*,struct smb_hdr*) ;
 int FUNC_17 (struct TCP_Server_Info*,struct smb_hdr*,unsigned int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (struct TCP_Server_Info*,int ,unsigned int*) ;
 int FUNC_22 (struct TCP_Server_Info*,struct mid_q_entry*) ;

int
FUNC_23(const unsigned int VAR_17, struct cifs_tcon *VAR_18,
     struct smb_hdr *VAR_19, struct smb_hdr *VAR_20,
     int *VAR_21)
{
 int VAR_22 = 0;
 int VAR_23 = 0;
 struct mid_q_entry *VAR_24;
 struct cifs_ses *VAR_25;
 unsigned int VAR_26 = FUNC_1(VAR_19->smb_buf_length);
 struct kvec VAR_27 = { .iov_base = VAR_19, .iov_len = VAR_26 };
 struct smb_rqst VAR_28 = { .rq_iov = &VAR_27, .rq_nvec = 1 };
 unsigned int VAR_29;
 struct TCP_Server_Info *VAR_30;

 if (VAR_18 == ((void*)0) || VAR_18->ses == ((void*)0)) {
  FUNC_3(VAR_16, "Null smb session\n");
  return -VAR_7;
 }
 VAR_25 = VAR_18->ses;
 VAR_30 = VAR_25->server;

 if (VAR_30 == ((void*)0)) {
  FUNC_3(VAR_16, "Null tcp session\n");
  return -VAR_7;
 }

 if (VAR_30->tcpStatus == VAR_2)
  return -VAR_8;





 if (VAR_26 > VAR_0 + VAR_12 - 4) {
  FUNC_10(VAR_16, "Illegal length, greater than maximum frame, %d\n",
    VAR_26);
  return -VAR_7;
 }

 VAR_22 = FUNC_21(VAR_30, VAR_1, &VAR_29);
 if (VAR_22)
  return VAR_22;





 FUNC_13(&VAR_30->srv_mutex);

 VAR_22 = FUNC_0(VAR_25, VAR_19, &VAR_24);
 if (VAR_22) {
  FUNC_14(&VAR_30->srv_mutex);
  return VAR_22;
 }

 VAR_22 = FUNC_8(VAR_19, VAR_30, &VAR_24->sequence_number);
 if (VAR_22) {
  FUNC_4(VAR_24);
  FUNC_14(&VAR_30->srv_mutex);
  return VAR_22;
 }

 VAR_24->mid_state = VAR_13;
 FUNC_6(VAR_30);
 VAR_22 = FUNC_17(VAR_30, VAR_19, VAR_26);
 FUNC_5(VAR_30);
 FUNC_7(VAR_24);

 if (VAR_22 < 0)
  VAR_30->sequence_number -= 2;

 FUNC_14(&VAR_30->srv_mutex);

 if (VAR_22 < 0) {
  FUNC_4(VAR_24);
  return VAR_22;
 }


 VAR_22 = FUNC_20(VAR_30->response_q,
  (!(VAR_24->mid_state == VAR_13)) ||
  ((VAR_30->tcpStatus != VAR_3) &&
   (VAR_30->tcpStatus != VAR_4)));


 if ((VAR_22 == -VAR_10) &&
  (VAR_24->mid_state == VAR_13) &&
  ((VAR_30->tcpStatus == VAR_3) ||
   (VAR_30->tcpStatus == VAR_4))) {

  if (VAR_19->Command == VAR_15) {


   VAR_22 = FUNC_15(VAR_30, &VAR_28, VAR_24);
   if (VAR_22) {
    FUNC_4(VAR_24);
    return VAR_22;
   }
  } else {



   VAR_22 = FUNC_16(VAR_17, VAR_18, VAR_19, VAR_20);



   if (VAR_22 && VAR_22 != -VAR_9) {
    FUNC_4(VAR_24);
    return VAR_22;
   }
  }

  VAR_22 = FUNC_22(VAR_30, VAR_24);
  if (VAR_22) {
   FUNC_15(VAR_30, &VAR_28, VAR_24);
   FUNC_18(&VAR_11);
   if (VAR_24->mid_state == VAR_13) {

    VAR_24->callback = VAR_5;
    FUNC_19(&VAR_11);
    return VAR_22;
   }
   FUNC_19(&VAR_11);
  }


  VAR_23 = 1;
 }

 VAR_22 = FUNC_9(VAR_24, VAR_30);
 if (VAR_22 != 0)
  return VAR_22;


 if (VAR_20 == ((void*)0) || VAR_24->mid_state != VAR_14) {
  VAR_22 = -VAR_7;
  FUNC_10(VAR_16, "Bad MID state?\n");
  goto out;
 }

 *VAR_21 = FUNC_11(VAR_24->resp_buf);
 FUNC_12(VAR_20, VAR_24->resp_buf, *VAR_21 + 4);
 VAR_22 = FUNC_2(VAR_24, VAR_30, 0);
out:
 FUNC_4(VAR_24);
 if (VAR_23 && VAR_22 == -VAR_6)
  return -VAR_10;
 return VAR_22;
}

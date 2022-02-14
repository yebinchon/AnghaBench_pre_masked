
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_queue {TYPE_1__* zcard; } ;
struct TYPE_4__ {int msg_len; void* msg_type_code; } ;
struct type50_crb3_msg {unsigned char* p; unsigned char* q; unsigned char* dp; unsigned char* dq; unsigned char* u; unsigned char* message; int keyblock_type; TYPE_2__ header; } ;
struct type50_crb2_msg {unsigned char* p; unsigned char* q; unsigned char* dp; unsigned char* dq; unsigned char* u; unsigned char* message; int keyblock_type; TYPE_2__ header; } ;
struct type50_crb1_msg {unsigned char* p; unsigned char* q; unsigned char* dp; unsigned char* dq; unsigned char* u; unsigned char* message; int keyblock_type; TYPE_2__ header; } ;
struct ica_rsa_modexpo_crt {int inputdatalength; scalar_t__ inputdata; scalar_t__ u_mult_inv; scalar_t__ bq_key; scalar_t__ bp_key; scalar_t__ nq_prime; scalar_t__ np_prime; } ;
struct ap_message {int length; struct type50_crb3_msg* message; } ;
struct TYPE_3__ {scalar_t__ max_mod_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (unsigned char*,scalar_t__,int) ;
 int FUNC_1 (struct type50_crb3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct zcrypt_queue *VAR_8,
           struct ap_message *VAR_9,
           struct ica_rsa_modexpo_crt *VAR_10)
{
 int VAR_11, VAR_12;
 unsigned char *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;

 VAR_11 = VAR_10->inputdatalength;
 VAR_12 = (VAR_11 + 1) / 2;







 if (VAR_11 <= 128) {
  struct type50_crb1_msg *VAR_19 = VAR_9->message;

  FUNC_1(VAR_19, 0, sizeof(*VAR_19));
  VAR_9->length = sizeof(*VAR_19);
  VAR_19->header.msg_type_code = VAR_7;
  VAR_19->header.msg_len = sizeof(*VAR_19);
  VAR_19->keyblock_type = VAR_4;
  VAR_13 = VAR_19->p + sizeof(VAR_19->p) - VAR_12;
  VAR_14 = VAR_19->q + sizeof(VAR_19->q) - VAR_12;
  VAR_15 = VAR_19->dp + sizeof(VAR_19->dp) - VAR_12;
  VAR_16 = VAR_19->dq + sizeof(VAR_19->dq) - VAR_12;
  VAR_17 = VAR_19->u + sizeof(VAR_19->u) - VAR_12;
  VAR_18 = VAR_19->message + sizeof(VAR_19->message) - VAR_11;
 } else if (VAR_11 <= 256) {
  struct type50_crb2_msg *VAR_20 = VAR_9->message;

  FUNC_1(VAR_20, 0, sizeof(*VAR_20));
  VAR_9->length = sizeof(*VAR_20);
  VAR_20->header.msg_type_code = VAR_7;
  VAR_20->header.msg_len = sizeof(*VAR_20);
  VAR_20->keyblock_type = VAR_5;
  VAR_13 = VAR_20->p + sizeof(VAR_20->p) - VAR_12;
  VAR_14 = VAR_20->q + sizeof(VAR_20->q) - VAR_12;
  VAR_15 = VAR_20->dp + sizeof(VAR_20->dp) - VAR_12;
  VAR_16 = VAR_20->dq + sizeof(VAR_20->dq) - VAR_12;
  VAR_17 = VAR_20->u + sizeof(VAR_20->u) - VAR_12;
  VAR_18 = VAR_20->message + sizeof(VAR_20->message) - VAR_11;
 } else if ((VAR_11 <= 512) &&
     (VAR_8->zcard->max_mod_size == VAR_0)) {
  struct type50_crb3_msg *VAR_21 = VAR_9->message;

  FUNC_1(VAR_21, 0, sizeof(*VAR_21));
  VAR_9->length = sizeof(*VAR_21);
  VAR_21->header.msg_type_code = VAR_7;
  VAR_21->header.msg_len = sizeof(*VAR_21);
  VAR_21->keyblock_type = VAR_6;
  VAR_13 = VAR_21->p + sizeof(VAR_21->p) - VAR_12;
  VAR_14 = VAR_21->q + sizeof(VAR_21->q) - VAR_12;
  VAR_15 = VAR_21->dp + sizeof(VAR_21->dp) - VAR_12;
  VAR_16 = VAR_21->dq + sizeof(VAR_21->dq) - VAR_12;
  VAR_17 = VAR_21->u + sizeof(VAR_21->u) - VAR_12;
  VAR_18 = VAR_21->message + sizeof(VAR_21->message) - VAR_11;
 } else
  return -VAR_2;





 if (FUNC_0(VAR_13, VAR_10->np_prime + VAR_3, VAR_12) ||
     FUNC_0(VAR_14, VAR_10->nq_prime, VAR_12) ||
     FUNC_0(VAR_15, VAR_10->bp_key + VAR_3, VAR_12) ||
     FUNC_0(VAR_16, VAR_10->bq_key, VAR_12) ||
     FUNC_0(VAR_17, VAR_10->u_mult_inv + VAR_3, VAR_12) ||
     FUNC_0(VAR_18, VAR_10->inputdata, VAR_11))
  return -VAR_1;

 return 0;
}

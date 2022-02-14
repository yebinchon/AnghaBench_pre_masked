
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_queue {int dummy; } ;
struct TYPE_2__ {int msg_len; void* msg_type_code; } ;
struct type50_meb3_msg {unsigned char* modulus; unsigned char* exponent; unsigned char* message; int keyblock_type; TYPE_1__ header; } ;
struct type50_meb2_msg {unsigned char* modulus; unsigned char* exponent; unsigned char* message; int keyblock_type; TYPE_1__ header; } ;
struct type50_meb1_msg {unsigned char* modulus; unsigned char* exponent; unsigned char* message; int keyblock_type; TYPE_1__ header; } ;
struct ica_rsa_modexpo {int inputdatalength; int inputdata; int b_key; int n_modulus; } ;
struct ap_message {int length; struct type50_meb3_msg* message; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct type50_meb3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct zcrypt_queue *VAR_6,
           struct ap_message *VAR_7,
           struct ica_rsa_modexpo *VAR_8)
{
 unsigned char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 VAR_12 = VAR_8->inputdatalength;

 if (VAR_12 <= 128) {
  struct type50_meb1_msg *VAR_13 = VAR_7->message;

  FUNC_1(VAR_13, 0, sizeof(*VAR_13));
  VAR_7->length = sizeof(*VAR_13);
  VAR_13->header.msg_type_code = VAR_5;
  VAR_13->header.msg_len = sizeof(*VAR_13);
  VAR_13->keyblock_type = VAR_2;
  VAR_9 = VAR_13->modulus + sizeof(VAR_13->modulus) - VAR_12;
  VAR_10 = VAR_13->exponent + sizeof(VAR_13->exponent) - VAR_12;
  VAR_11 = VAR_13->message + sizeof(VAR_13->message) - VAR_12;
 } else if (VAR_12 <= 256) {
  struct type50_meb2_msg *VAR_14 = VAR_7->message;

  FUNC_1(VAR_14, 0, sizeof(*VAR_14));
  VAR_7->length = sizeof(*VAR_14);
  VAR_14->header.msg_type_code = VAR_5;
  VAR_14->header.msg_len = sizeof(*VAR_14);
  VAR_14->keyblock_type = VAR_3;
  VAR_9 = VAR_14->modulus + sizeof(VAR_14->modulus) - VAR_12;
  VAR_10 = VAR_14->exponent + sizeof(VAR_14->exponent) - VAR_12;
  VAR_11 = VAR_14->message + sizeof(VAR_14->message) - VAR_12;
 } else if (VAR_12 <= 512) {
  struct type50_meb3_msg *VAR_15 = VAR_7->message;

  FUNC_1(VAR_15, 0, sizeof(*VAR_15));
  VAR_7->length = sizeof(*VAR_15);
  VAR_15->header.msg_type_code = VAR_5;
  VAR_15->header.msg_len = sizeof(*VAR_15);
  VAR_15->keyblock_type = VAR_4;
  VAR_9 = VAR_15->modulus + sizeof(VAR_15->modulus) - VAR_12;
  VAR_10 = VAR_15->exponent + sizeof(VAR_15->exponent) - VAR_12;
  VAR_11 = VAR_15->message + sizeof(VAR_15->message) - VAR_12;
 } else
  return -VAR_1;

 if (FUNC_0(VAR_9, VAR_8->n_modulus, VAR_12) ||
     FUNC_0(VAR_10, VAR_8->b_key, VAR_12) ||
     FUNC_0(VAR_11, VAR_8->inputdata, VAR_12))
  return -VAR_0;
 return 0;
}

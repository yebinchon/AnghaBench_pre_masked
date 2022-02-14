
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {struct crypto_shash* tfm; } ;
struct iscsi_node_auth {unsigned char* userid; unsigned char* password; unsigned char* password_mutual; unsigned char* userid_mutual; int authenticate_target; } ;
struct iscsi_conn {struct iscsi_chap* auth_protocol; } ;
struct iscsi_chap {unsigned char id; unsigned char* challenge; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_1 (struct crypto_shash*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 struct crypto_shash* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 scalar_t__ FUNC_5 (struct crypto_shash*) ;
 int FUNC_6 (struct shash_desc*,unsigned char*,int,unsigned char*) ;
 int FUNC_7 (struct shash_desc*) ;
 int FUNC_8 (struct shash_desc*,...) ;
 scalar_t__ FUNC_9 (char*,char*,int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (unsigned char*) ;
 struct shash_desc* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (unsigned char*,int ,unsigned long*) ;
 unsigned char* FUNC_14 (int,int ) ;
 int FUNC_15 (struct shash_desc*) ;
 scalar_t__ FUNC_16 (unsigned char*,unsigned char*,int) ;
 int FUNC_17 (unsigned char*,int ,int) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*,...) ;
 unsigned int FUNC_20 (char*,char*,unsigned char*) ;
 int FUNC_21 (unsigned char*) ;
 scalar_t__ FUNC_22 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_23(
 struct iscsi_conn *VAR_7,
 struct iscsi_node_auth *VAR_8,
 char *VAR_9,
 char *VAR_10,
 unsigned int *VAR_11)
{
 unsigned long VAR_12;
 unsigned char VAR_13;
 unsigned char VAR_14[VAR_6];
 unsigned char VAR_15, VAR_16[VAR_6 * 2 + 2];
 unsigned char VAR_17[10], *VAR_18 = ((void*)0);
 unsigned char *VAR_19 = ((void*)0);
 unsigned char VAR_20[VAR_6];
 unsigned char VAR_21[VAR_6];
 unsigned char VAR_22[VAR_4], VAR_23[VAR_5];
 size_t VAR_24;
 struct iscsi_chap *VAR_25 = VAR_7->auth_protocol;
 struct crypto_shash *VAR_26 = ((void*)0);
 struct shash_desc *VAR_27 = ((void*)0);
 int VAR_28 = -1, VAR_29, VAR_30;

 FUNC_17(VAR_17, 0, 10);
 FUNC_17(VAR_22, 0, VAR_4);
 FUNC_17(VAR_23, 0, VAR_5);
 FUNC_17(VAR_14, 0, VAR_6);
 FUNC_17(VAR_16, 0, VAR_6 * 2 + 2);
 FUNC_17(VAR_20, 0, VAR_6);
 FUNC_17(VAR_21, 0, VAR_6);

 VAR_18 = FUNC_14(VAR_1, VAR_2);
 if (!VAR_18) {
  FUNC_19("Unable to allocate challenge buffer\n");
  goto out;
 }

 VAR_19 = FUNC_14(VAR_1, VAR_2);
 if (!VAR_19) {
  FUNC_19("Unable to allocate challenge_binhex buffer\n");
  goto out;
 }



 if (FUNC_9(VAR_9, "CHAP_N", VAR_4, VAR_22,
    &VAR_15) < 0) {
  FUNC_19("Could not find CHAP_N.\n");
  goto out;
 }
 if (VAR_15 == VAR_3) {
  FUNC_19("Could not find CHAP_N.\n");
  goto out;
 }


 VAR_24 = FUNC_21(VAR_8->userid) + 1;
 if (FUNC_22(VAR_22, VAR_8->userid, VAR_24) != 0) {
  FUNC_19("CHAP_N values do not match!\n");
  goto out;
 }
 FUNC_18("[server] Got CHAP_N=%s\n", VAR_22);



 if (FUNC_9(VAR_9, "CHAP_R", VAR_5, VAR_23,
    &VAR_15) < 0) {
  FUNC_19("Could not find CHAP_R.\n");
  goto out;
 }
 if (VAR_15 != VAR_3) {
  FUNC_19("Could not find CHAP_R.\n");
  goto out;
 }
 if (FUNC_21(VAR_23) != VAR_6 * 2) {
  FUNC_19("Malformed CHAP_R\n");
  goto out;
 }
 if (FUNC_10(VAR_20, VAR_23, VAR_6) < 0) {
  FUNC_19("Malformed CHAP_R\n");
  goto out;
 }

 FUNC_18("[server] Got CHAP_R=%s\n", VAR_23);

 VAR_26 = FUNC_3("md5", 0, 0);
 if (FUNC_1(VAR_26)) {
  VAR_26 = ((void*)0);
  FUNC_19("Unable to allocate struct crypto_shash\n");
  goto out;
 }

 VAR_27 = FUNC_12(sizeof(*VAR_27) + FUNC_5(VAR_26), VAR_2);
 if (!VAR_27) {
  FUNC_19("Unable to allocate struct shash_desc\n");
  goto out;
 }

 VAR_27->tfm = VAR_26;

 VAR_29 = FUNC_7(VAR_27);
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_init() failed\n");
  goto out;
 }

 VAR_29 = FUNC_8(VAR_27, &VAR_25->id, 1);
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_update() failed for id\n");
  goto out;
 }

 VAR_29 = FUNC_8(VAR_27, (char *)&VAR_8->password,
      FUNC_21(VAR_8->password));
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_update() failed for password\n");
  goto out;
 }

 VAR_29 = FUNC_6(VAR_27, VAR_25->challenge,
     VAR_0, VAR_21);
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_finup() failed for challenge\n");
  goto out;
 }

 FUNC_2(VAR_16, VAR_21, VAR_6);
 FUNC_18("[server] MD5 Server Digest: %s\n", VAR_16);

 if (FUNC_16(VAR_21, VAR_20, VAR_6) != 0) {
  FUNC_18("[server] MD5 Digests do not match!\n\n");
  goto out;
 } else
  FUNC_18("[server] MD5 Digests match, CHAP connection"
    " successful.\n\n");




 if (!VAR_8->authenticate_target) {
  VAR_28 = 0;
  goto out;
 }



 if (FUNC_9(VAR_9, "CHAP_I", 10, VAR_17, &VAR_15) < 0) {
  FUNC_19("Could not find CHAP_I.\n");
  goto out;
 }

 if (VAR_15 == VAR_3)
  VAR_29 = FUNC_13(&VAR_17[2], 0, &VAR_12);
 else
  VAR_29 = FUNC_13(VAR_17, 0, &VAR_12);

 if (VAR_29 < 0) {
  FUNC_19("kstrtoul() failed for CHAP identifier: %d\n", VAR_29);
  goto out;
 }
 if (VAR_12 > 255) {
  FUNC_19("chap identifier: %lu greater than 255\n", VAR_12);
  goto out;
 }



 FUNC_18("[server] Got CHAP_I=%lu\n", VAR_12);



 if (FUNC_9(VAR_9, "CHAP_C", VAR_1,
   VAR_18, &VAR_15) < 0) {
  FUNC_19("Could not find CHAP_C.\n");
  goto out;
 }

 if (VAR_15 != VAR_3) {
  FUNC_19("Could not find CHAP_C.\n");
  goto out;
 }
 VAR_30 = FUNC_0(FUNC_21(VAR_18), 2);
 if (!VAR_30) {
  FUNC_19("Unable to convert incoming challenge\n");
  goto out;
 }
 if (VAR_30 > 1024) {
  FUNC_19("CHAP_C exceeds maximum binary size of 1024 bytes\n");
  goto out;
 }
 if (FUNC_10(VAR_19, VAR_18, VAR_30) < 0) {
  FUNC_19("Malformed CHAP_C\n");
  goto out;
 }
 FUNC_18("[server] Got CHAP_C=%s\n", VAR_18);





 if (!FUNC_16(VAR_19, VAR_25->challenge, VAR_0)) {
  FUNC_19("initiator CHAP_C matches target CHAP_C, failing"
         " login attempt\n");
  goto out;
 }



 VAR_29 = FUNC_7(VAR_27);
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_init() failed\n");
  goto out;
 }


 VAR_13 = VAR_12;
 VAR_29 = FUNC_8(VAR_27, &VAR_13, 1);
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_update() failed for id\n");
  goto out;
 }

 VAR_29 = FUNC_8(VAR_27, VAR_8->password_mutual,
      FUNC_21(VAR_8->password_mutual));
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_update() failed for"
    " password_mutual\n");
  goto out;
 }



 VAR_29 = FUNC_6(VAR_27, VAR_19, VAR_30,
     VAR_14);
 if (VAR_29 < 0) {
  FUNC_19("crypto_shash_finup() failed for ma challenge\n");
  goto out;
 }




 *VAR_11 = FUNC_20(VAR_10, "CHAP_N=%s", VAR_8->userid_mutual);
 *VAR_11 += 1;
 FUNC_18("[server] Sending CHAP_N=%s\n", VAR_8->userid_mutual);



 FUNC_2(VAR_16, VAR_14, VAR_6);
 *VAR_11 += FUNC_20(VAR_10 + *VAR_11, "CHAP_R=0x%s",
   VAR_16);
 *VAR_11 += 1;
 FUNC_18("[server] Sending CHAP_R=0x%s\n", VAR_16);
 VAR_28 = 0;
out:
 FUNC_15(VAR_27);
 if (VAR_26)
  FUNC_4(VAR_26);
 FUNC_11(VAR_18);
 FUNC_11(VAR_19);
 return VAR_28;
}

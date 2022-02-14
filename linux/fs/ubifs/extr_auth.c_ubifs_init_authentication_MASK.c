
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_key_payload {int datalen; int data; } ;
struct ubifs_info {char* auth_hash_name; int authenticated; struct key* hash_tfm; struct key* hmac_tfm; struct key* log_hash; void* hmac_desc_len; void* hash_len; int auth_key_name; scalar_t__ auth_hash_algo; } ;
struct key {int sem; int * type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct key*) ;
 void* FUNC_4 (struct key*) ;
 int FUNC_5 (struct key*,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (struct key*) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int ,int ,char*) ;
 struct key* FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (struct ubifs_info*,char*,...) ;
 struct key* FUNC_12 (struct ubifs_info*) ;
 int FUNC_13 (int *) ;
 struct user_key_payload* FUNC_14 (struct key*) ;

int FUNC_15(struct ubifs_info *VAR_9)
{
 struct key *VAR_10;
 const struct user_key_payload *VAR_11;
 int VAR_12;
 char VAR_13[VAR_0];

 if (!VAR_9->auth_hash_name) {
  FUNC_11(VAR_9, "authentication hash name needed with authentication");
  return -VAR_1;
 }

 VAR_9->auth_hash_algo = FUNC_8(VAR_7, VAR_4,
      VAR_9->auth_hash_name);
 if ((int)VAR_9->auth_hash_algo < 0) {
  FUNC_11(VAR_9, "Unknown hash algo %s specified",
     VAR_9->auth_hash_name);
  return -VAR_1;
 }

 FUNC_10(VAR_13, VAR_0, "hmac(%s)",
   VAR_9->auth_hash_name);

 VAR_10 = FUNC_9(&VAR_8, VAR_9->auth_key_name, ((void*)0));

 if (FUNC_0(VAR_10)) {
  FUNC_11(VAR_9, "Failed to request key: %ld",
     FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 FUNC_6(&VAR_10->sem);

 if (VAR_10->type != &VAR_8) {
  FUNC_11(VAR_9, "key type must be logon");
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_11 = FUNC_14(VAR_10);
 if (!VAR_11) {

  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_9->hash_tfm = FUNC_2(VAR_9->auth_hash_name, 0, 0);
 if (FUNC_0(VAR_9->hash_tfm)) {
  VAR_12 = FUNC_1(VAR_9->hash_tfm);
  FUNC_11(VAR_9, "Can not allocate %s: %d",
     VAR_9->auth_hash_name, VAR_12);
  goto out;
 }

 VAR_9->hash_len = FUNC_4(VAR_9->hash_tfm);
 if (VAR_9->hash_len > VAR_5) {
  FUNC_11(VAR_9, "hash %s is bigger than maximum allowed hash size (%d > %d)",
     VAR_9->auth_hash_name, VAR_9->hash_len, VAR_5);
  VAR_12 = -VAR_1;
  goto out_free_hash;
 }

 VAR_9->hmac_tfm = FUNC_2(VAR_13, 0, 0);
 if (FUNC_0(VAR_9->hmac_tfm)) {
  VAR_12 = FUNC_1(VAR_9->hmac_tfm);
  FUNC_11(VAR_9, "Can not allocate %s: %d", VAR_13, VAR_12);
  goto out_free_hash;
 }

 VAR_9->hmac_desc_len = FUNC_4(VAR_9->hmac_tfm);
 if (VAR_9->hmac_desc_len > VAR_6) {
  FUNC_11(VAR_9, "hmac %s is bigger than maximum allowed hmac size (%d > %d)",
     VAR_13, VAR_9->hmac_desc_len, VAR_6);
  VAR_12 = -VAR_1;
  goto out_free_hash;
 }

 VAR_12 = FUNC_5(VAR_9->hmac_tfm, VAR_11->data, VAR_11->datalen);
 if (VAR_12)
  goto out_free_hmac;

 VAR_9->authenticated = 1;

 VAR_9->log_hash = FUNC_12(VAR_9);
 if (FUNC_0(VAR_9->log_hash))
  goto out_free_hmac;

 VAR_12 = 0;

out_free_hmac:
 if (VAR_12)
  FUNC_3(VAR_9->hmac_tfm);
out_free_hash:
 if (VAR_12)
  FUNC_3(VAR_9->hash_tfm);
out:
 FUNC_13(&VAR_10->sem);
 FUNC_7(VAR_10);

 return VAR_12;
}

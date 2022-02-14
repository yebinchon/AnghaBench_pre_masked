
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int sem; } ;
struct ecryptfs_msg_ctx {int dummy; } ;
typedef char ecryptfs_message ;
struct ecryptfs_key_record {int dummy; } ;
struct ecryptfs_crypt_stat {int key_size; int cipher; } ;
struct TYPE_3__ {int signature; } ;
struct TYPE_4__ {TYPE_1__ private_key; } ;
struct ecryptfs_auth_tok {TYPE_2__ token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,size_t,struct ecryptfs_msg_ctx**) ;
 int FUNC_3 (struct ecryptfs_msg_ctx*,char**) ;
 int FUNC_4 (struct key*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ecryptfs_key_record*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,struct ecryptfs_crypt_stat*,char**,size_t*) ;

__attribute__((used)) static int
FUNC_9(struct key *VAR_2,
   struct ecryptfs_auth_tok *VAR_3,
   struct ecryptfs_crypt_stat *VAR_4,
   struct ecryptfs_key_record *VAR_5)
{
 struct ecryptfs_msg_ctx *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 struct ecryptfs_message *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_8(VAR_3->token.private_key.signature,
     FUNC_0(
      VAR_4->cipher,
      VAR_4->key_size),
     VAR_4, &VAR_7, &VAR_8);
 FUNC_7(&(VAR_2->sem));
 FUNC_4(VAR_2);
 if (VAR_10) {
  FUNC_1(VAR_1, "Error generating tag 66 packet\n");
  goto out;
 }
 VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_1, "Error sending message to "
    "ecryptfsd: %d\n", VAR_10);
  goto out;
 }
 VAR_10 = FUNC_3(VAR_6, &VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_1, "Failed to receive tag 67 packet "
    "from the user space daemon\n");
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_10 = FUNC_6(VAR_5, VAR_9);
 if (VAR_10)
  FUNC_1(VAR_1, "Error parsing tag 67 packet\n");
 FUNC_5(VAR_9);
out:
 FUNC_5(VAR_7);
 return VAR_10;
}

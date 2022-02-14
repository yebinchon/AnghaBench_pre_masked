
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nonce; } ;
struct TYPE_8__ {int nonce; union fscrypt_context* master_key_descriptor; int filenames_encryption_mode; int contents_encryption_mode; } ;
union fscrypt_context {int version; TYPE_4__ v2; TYPE_3__ v1; } ;
struct TYPE_10__ {struct fscrypt_master_key** data; } ;
struct key {TYPE_5__ payload; } ;
struct inode {int i_crypt_info; TYPE_2__* i_sb; } ;
struct fscrypt_mode {scalar_t__ ivsize; } ;
struct fscrypt_master_key {int mk_secret_sem; int mk_decrypted_inodes_lock; int mk_decrypted_inodes; int mk_refcount; } ;
struct fscrypt_info {int ci_master_key_link; int ci_master_key; struct fscrypt_mode* ci_mode; int ci_policy; int ci_nonce; struct inode* ci_inode; } ;
typedef int ctx ;
struct TYPE_7__ {TYPE_1__* s_cop; } ;
struct TYPE_6__ {int (* get_context ) (struct inode*,union fscrypt_context*,int) ;int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct fscrypt_mode*) ;
 int FUNC_2 (struct fscrypt_mode*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int *,struct fscrypt_info*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,union fscrypt_context*,int) ;
 int FUNC_9 (int *,struct inode*) ;
 int FUNC_10 (struct inode*,char*,...) ;
 int FUNC_11 (struct key*) ;
 int FUNC_12 (struct key*) ;
 struct fscrypt_info* FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (union fscrypt_context*,int,int) ;
 int FUNC_17 (struct fscrypt_info*) ;
 int FUNC_18 (int *) ;
 struct fscrypt_mode* FUNC_19 (int *,struct inode*) ;
 int FUNC_20 (struct fscrypt_info*,struct key**) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct inode*,union fscrypt_context*,int) ;
 int FUNC_24 (int *) ;

int FUNC_25(struct inode *VAR_10)
{
 struct fscrypt_info *VAR_11;
 union fscrypt_context VAR_12;
 struct fscrypt_mode *VAR_13;
 struct key *VAR_14 = ((void*)0);
 int VAR_15;

 if (FUNC_6(VAR_10))
  return 0;

 VAR_15 = FUNC_7(VAR_10->i_sb->s_cop->flags);
 if (VAR_15)
  return VAR_15;

 VAR_15 = VAR_10->i_sb->s_cop->get_context(VAR_10, &VAR_12, sizeof(VAR_12));
 if (VAR_15 < 0) {
  if (!FUNC_5(VAR_10) ||
      FUNC_0(VAR_10)) {
   FUNC_10(VAR_10,
         "Error %d getting encryption context",
         VAR_15);
   return VAR_15;
  }

  FUNC_16(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.version = 129;
  VAR_12.v1.contents_encryption_mode = VAR_6;
  VAR_12.v1.filenames_encryption_mode = VAR_5;
  FUNC_16(VAR_12.v1.master_key_descriptor, 0x42,
         VAR_3);
  VAR_15 = sizeof(VAR_12.v1);
 }

 VAR_11 = FUNC_13(VAR_9, VAR_8);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->ci_inode = VAR_10;

 VAR_15 = FUNC_8(&VAR_11->ci_policy, &VAR_12, VAR_15);
 if (VAR_15) {
  FUNC_10(VAR_10,
        "Unrecognized or corrupt encryption context");
  goto out;
 }

 switch (VAR_12.version) {
 case 129:
  FUNC_15(VAR_11->ci_nonce, VAR_12.v1.nonce,
         VAR_7);
  break;
 case 128:
  FUNC_15(VAR_11->ci_nonce, VAR_12.v2.nonce,
         VAR_7);
  break;
 default:
  FUNC_3(1);
  VAR_15 = -VAR_0;
  goto out;
 }

 if (!FUNC_9(&VAR_11->ci_policy, VAR_10)) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_13 = FUNC_19(&VAR_11->ci_policy, VAR_10);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  goto out;
 }
 FUNC_3(VAR_13->ivsize > VAR_4);
 VAR_11->ci_mode = VAR_13;

 VAR_15 = FUNC_20(VAR_11, &VAR_14);
 if (VAR_15)
  goto out;

 if (FUNC_4(&VAR_10->i_crypt_info, ((void*)0), VAR_11) == ((void*)0)) {
  if (VAR_14) {
   struct fscrypt_master_key *VAR_16 =
    VAR_14->payload.data[0];

   FUNC_18(&VAR_16->mk_refcount);
   VAR_11->ci_master_key = FUNC_11(VAR_14);
   FUNC_21(&VAR_16->mk_decrypted_inodes_lock);
   FUNC_14(&VAR_11->ci_master_key_link,
     &VAR_16->mk_decrypted_inodes);
   FUNC_22(&VAR_16->mk_decrypted_inodes_lock);
  }
  VAR_11 = ((void*)0);
 }
 VAR_15 = 0;
out:
 if (VAR_14) {
  struct fscrypt_master_key *VAR_17 = VAR_14->payload.data[0];

  FUNC_24(&VAR_17->mk_secret_sem);
  FUNC_12(VAR_14);
 }
 if (VAR_15 == -VAR_1)
  VAR_15 = 0;
 FUNC_17(VAR_11);
 return VAR_15;
}

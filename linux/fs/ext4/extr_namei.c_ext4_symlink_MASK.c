
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {char* i_link; int i_size; int * i_op; TYPE_1__* i_sb; } ;
struct fscrypt_str {int len; unsigned char* name; } ;
struct dentry {int d_name; } ;
typedef struct inode handle_t ;
struct TYPE_6__ {int i_disksize; int i_data; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct inode*,unsigned char*,int,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct dentry*,struct inode*) ;
 int FUNC_13 (struct inode*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 () ;
 struct inode* FUNC_17 (struct inode*,int ,int) ;
 int FUNC_18 (struct inode*) ;
 struct inode* FUNC_19 (struct inode*,int,int *,int ,int *,int ,int) ;
 int FUNC_20 (struct inode*,struct inode*) ;
 int FUNC_21 (struct inode*,struct inode*) ;
 int FUNC_22 (struct inode*) ;
 int VAR_10 ;
 int FUNC_23 (struct inode*,char const*,int,struct fscrypt_str*) ;
 int FUNC_24 (struct inode*,char const*,int,int ,struct fscrypt_str*) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (unsigned char*) ;
 int FUNC_28 (char*,unsigned char*,int) ;
 int FUNC_29 (struct inode*,int) ;
 int FUNC_30 (char const*) ;
 scalar_t__ FUNC_31 (int ) ;
 int FUNC_32 (struct inode*) ;

__attribute__((used)) static int FUNC_33(struct inode *VAR_11,
   struct dentry *VAR_12, const char *VAR_13)
{
 handle_t *VAR_14;
 struct inode *VAR_15;
 int VAR_16, VAR_17 = FUNC_30(VAR_13);
 int VAR_18;
 struct fscrypt_str VAR_19;

 if (FUNC_31(FUNC_14(FUNC_3(VAR_11->i_sb))))
  return -VAR_0;

 VAR_16 = FUNC_24(VAR_11, VAR_13, VAR_17, VAR_11->i_sb->s_blocksize,
          &VAR_19);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_10(VAR_11);
 if (VAR_16)
  return VAR_16;

 if ((VAR_19.len > VAR_4 * 4)) {






  VAR_18 = 4 + FUNC_2(VAR_11->i_sb) +
     VAR_5;
 } else {






  VAR_18 = FUNC_0(VAR_11->i_sb) +
     VAR_2 + 3;
 }

 VAR_15 = FUNC_19(VAR_11, VAR_6|VAR_7,
         &VAR_12->d_name, 0, ((void*)0),
         VAR_1, VAR_18);
 VAR_14 = FUNC_16();
 if (FUNC_6(VAR_15)) {
  if (VAR_14)
   FUNC_18(VAR_14);
  return FUNC_7(VAR_15);
 }

 if (FUNC_5(VAR_15)) {
  VAR_16 = FUNC_23(VAR_15, VAR_13, VAR_17, &VAR_19);
  if (VAR_16)
   goto err_drop_inode;
  VAR_15->i_op = &VAR_8;
 }

 if ((VAR_19.len > VAR_4 * 4)) {
  if (!FUNC_5(VAR_15))
   VAR_15->i_op = &VAR_10;
  FUNC_25(VAR_15);
  FUNC_22(VAR_15);
  FUNC_11(VAR_15);
  VAR_16 = FUNC_20(VAR_14, VAR_15);
  FUNC_18(VAR_14);
  VAR_14 = ((void*)0);
  if (VAR_16)
   goto err_drop_inode;
  VAR_16 = FUNC_8(VAR_15, VAR_19.name, VAR_19.len, 1);
  if (VAR_16)
   goto err_drop_inode;




  VAR_14 = FUNC_17(VAR_11, VAR_1,
    FUNC_0(VAR_11->i_sb) +
    VAR_2 + 1);
  if (FUNC_6(VAR_14)) {
   VAR_16 = FUNC_7(VAR_14);
   VAR_14 = ((void*)0);
   goto err_drop_inode;
  }
  FUNC_29(VAR_15, 1);
  VAR_16 = FUNC_21(VAR_14, VAR_15);
  if (VAR_16)
   goto err_drop_inode;
 } else {

  FUNC_13(VAR_15, VAR_3);
  if (!FUNC_5(VAR_15)) {
   VAR_15->i_op = &VAR_9;
   VAR_15->i_link = (char *)&FUNC_1(VAR_15)->i_data;
  }
  FUNC_28((char *)&FUNC_1(VAR_15)->i_data, VAR_19.name,
         VAR_19.len);
  VAR_15->i_size = VAR_19.len - 1;
 }
 FUNC_1(VAR_15)->i_disksize = VAR_15->i_size;
 VAR_16 = FUNC_12(VAR_14, VAR_12, VAR_15);
 if (!VAR_16 && FUNC_4(VAR_11))
  FUNC_15(VAR_14);

 if (VAR_14)
  FUNC_18(VAR_14);
 goto out_free_encrypted_link;

err_drop_inode:
 if (VAR_14)
  FUNC_18(VAR_14);
 FUNC_9(VAR_15);
 FUNC_32(VAR_15);
 FUNC_26(VAR_15);
out_free_encrypted_link:
 if (VAR_19.name != (unsigned char *)VAR_13)
  FUNC_27(VAR_19.name);
 return VAR_16;
}

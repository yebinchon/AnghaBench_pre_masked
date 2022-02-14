
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct buffer_head {int b_count; } ;
struct TYPE_4__ {int h_refcount; } ;
struct TYPE_3__ {scalar_t__ i_file_acl; } ;


 int FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct buffer_head*,char*,int ,int ) ;
 int FUNC_10 (struct inode*,char*,...) ;
 struct buffer_head* FUNC_11 (int ,scalar_t__,int ) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 int FUNC_13 (struct inode*,struct buffer_head*) ;
 int FUNC_14 (struct dentry*,int ,char*,size_t) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct inode *VAR_4 = FUNC_8(VAR_1);
 struct buffer_head *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_10(VAR_4, "buffer=%p, buffer_size=%ld",
    VAR_2, (long)VAR_3);

 if (!FUNC_3(VAR_4)->i_file_acl)
  return 0;
 FUNC_10(VAR_4, "reading block %llu",
    (unsigned long long)FUNC_3(VAR_4)->i_file_acl);
 VAR_5 = FUNC_11(VAR_4->i_sb, FUNC_3(VAR_4)->i_file_acl, VAR_0);
 if (FUNC_4(VAR_5))
  return FUNC_5(VAR_5);
 FUNC_9(VAR_5, "b_count=%d, refcount=%d",
  FUNC_6(&(VAR_5->b_count)), FUNC_15(FUNC_1(VAR_5)->h_refcount));
 VAR_6 = FUNC_13(VAR_4, VAR_5);
 if (VAR_6)
  goto cleanup;
 FUNC_12(FUNC_2(VAR_4), VAR_5);
 VAR_6 = FUNC_14(VAR_1, FUNC_0(VAR_5), VAR_2,
     VAR_3);
cleanup:
 FUNC_7(VAR_5);
 return VAR_6;
}

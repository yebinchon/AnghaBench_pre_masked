
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int) ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_5 ;
 char* FUNC_11 (unsigned int,int ) ;
 int FUNC_12 (char*,scalar_t__,unsigned int) ;
 int FUNC_13 (struct delayed_call*,int ,char*) ;

__attribute__((used)) static const char *FUNC_14(struct dentry *VAR_6,
     struct inode *VAR_7,
     struct delayed_call *VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_1(VAR_7);
 struct gfs2_holder VAR_10;
 struct buffer_head *VAR_11;
 unsigned int VAR_12;
 char *VAR_13;
 int VAR_14;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_7(VAR_9->i_gl, VAR_4, 0, &VAR_10);
 VAR_14 = FUNC_6(&VAR_10);
 if (VAR_14) {
  FUNC_8(&VAR_10);
  return FUNC_0(VAR_14);
 }

 VAR_12 = (unsigned int)FUNC_10(&VAR_9->i_inode);
 if (VAR_12 == 0) {
  FUNC_4(VAR_9);
  VAR_13 = FUNC_0(-VAR_1);
  goto out;
 }

 VAR_14 = FUNC_9(VAR_9, &VAR_11);
 if (VAR_14) {
  VAR_13 = FUNC_0(VAR_14);
  goto out;
 }

 VAR_13 = FUNC_11(VAR_12 + 1, VAR_3);
 if (!VAR_13)
  VAR_13 = FUNC_0(-VAR_2);
 else
  FUNC_12(VAR_13, VAR_11->b_data + sizeof(struct gfs2_dinode), VAR_12);
 FUNC_3(VAR_11);
out:
 FUNC_5(&VAR_10);
 if (!FUNC_2(VAR_13))
  FUNC_13(VAR_8, VAR_5, VAR_13);
 return VAR_13;
}

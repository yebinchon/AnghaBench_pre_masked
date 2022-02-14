
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qstr {scalar_t__ len; int name; } ;
struct ocfs2_cluster_connection {int dummy; } ;
struct inode {int dummy; } ;
struct dlmfs_inode_private {struct ocfs2_cluster_connection* ip_conn; } ;
struct dentry {struct qstr d_name; } ;


 struct dlmfs_inode_private* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ocfs2_cluster_connection*) ;
 int VAR_3 ;
 int FUNC_2 (struct ocfs2_cluster_connection*) ;
 int VAR_4 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (struct inode*,struct dentry*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int) ;
 struct ocfs2_cluster_connection* FUNC_10 (struct qstr const*) ;

__attribute__((used)) static int FUNC_11(struct inode * VAR_5,
         struct dentry * VAR_6,
         umode_t VAR_7)
{
 int VAR_8;
 struct inode *VAR_9 = ((void*)0);
 const struct qstr *VAR_10 = &VAR_6->d_name;
 struct dlmfs_inode_private *VAR_11;
 struct ocfs2_cluster_connection *VAR_12;

 FUNC_8(0, "mkdir %.*s\n", VAR_10->len, VAR_10->name);


 if (VAR_10->len >= VAR_2) {
  VAR_8 = -VAR_0;
  FUNC_8(VAR_3, "invalid domain name for directory.\n");
  goto bail;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7 | VAR_4);
 if (!VAR_9) {
  VAR_8 = -VAR_1;
  FUNC_9(VAR_8);
  goto bail;
 }

 VAR_11 = FUNC_0(VAR_9);

 VAR_12 = FUNC_10(VAR_10);
 if (FUNC_1(VAR_12)) {
  VAR_8 = FUNC_2(VAR_12);
  FUNC_8(VAR_3, "Error %d could not register domain \"%.*s\"\n",
       VAR_8, VAR_10->len, VAR_10->name);
  goto bail;
 }
 VAR_11->ip_conn = VAR_12;

 FUNC_6(VAR_5);
 FUNC_3(VAR_6, VAR_9);
 FUNC_4(VAR_6);

 VAR_8 = 0;
bail:
 if (VAR_8 < 0)
  FUNC_7(VAR_9);
 return VAR_8;
}

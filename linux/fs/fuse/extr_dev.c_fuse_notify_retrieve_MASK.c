
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct fuse_notify_retrieve_out {int nodeid; } ;
struct fuse_copy_state {int dummy; } ;
struct fuse_conn {int killsb; scalar_t__ sb; } ;
typedef int outarg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fuse_copy_state*) ;
 int FUNC_2 (struct fuse_copy_state*,struct fuse_notify_retrieve_out*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct fuse_conn*,struct inode*,struct fuse_notify_retrieve_out*) ;
 struct inode* FUNC_4 (scalar_t__,int ,int ,int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct fuse_conn *VAR_3, unsigned int VAR_4,
    struct fuse_copy_state *VAR_5)
{
 struct fuse_notify_retrieve_out VAR_6;
 struct inode *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_0;
 if (VAR_4 != sizeof(VAR_6))
  goto copy_finish;

 VAR_8 = FUNC_2(VAR_5, &VAR_6, sizeof(VAR_6));
 if (VAR_8)
  goto copy_finish;

 FUNC_1(VAR_5);

 FUNC_0(&VAR_3->killsb);
 VAR_8 = -VAR_1;
 if (VAR_3->sb) {
  u64 VAR_9 = VAR_6.nodeid;

  VAR_7 = FUNC_4(VAR_3->sb, VAR_9, VAR_2, &VAR_9);
  if (VAR_7) {
   VAR_8 = FUNC_3(VAR_3, VAR_7, &VAR_6);
   FUNC_5(VAR_7);
  }
 }
 FUNC_6(&VAR_3->killsb);

 return VAR_8;

copy_finish:
 FUNC_1(VAR_5);
 return VAR_8;
}

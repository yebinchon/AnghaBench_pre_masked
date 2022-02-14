
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct v9fs_session_info {int dummy; } ;
struct super_block {struct v9fs_session_info* s_fs_info; } ;
struct p9_wstat {int dummy; } ;
struct p9_qid {int dummy; } ;
struct inode {int i_state; unsigned long i_ino; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct super_block*,unsigned long,int (*) (struct inode*,void*),int ,struct p9_wstat*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct v9fs_session_info*,struct p9_wstat*,int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct v9fs_session_info*,struct inode*,int ,int ) ;
 unsigned long FUNC_7 (struct p9_qid*) ;
 int VAR_2 ;
 int FUNC_8 (struct p9_wstat*,struct inode*,struct super_block*,int ) ;
 int FUNC_9 (struct inode*,void*) ;
 int FUNC_10 (struct inode*,void*) ;

__attribute__((used)) static struct inode *FUNC_11(struct super_block *VAR_3,
       struct p9_qid *VAR_4,
       struct p9_wstat *VAR_5,
       int VAR_6)
{
 dev_t VAR_7;
 int VAR_8;
 umode_t VAR_9;
 unsigned long VAR_10;
 struct inode *VAR_11;
 struct v9fs_session_info *VAR_12 = VAR_3->s_fs_info;
 int (*VAR_13)(struct inode *, void *);

 if (VAR_6)
  VAR_13 = FUNC_10;
 else
  VAR_13 = FUNC_9;

 VAR_10 = FUNC_7(VAR_4);
 VAR_11 = FUNC_1(VAR_3, VAR_10, VAR_13, VAR_2, VAR_5);
 if (!VAR_11)
  return FUNC_0(-VAR_0);
 if (!(VAR_11->i_state & VAR_1))
  return VAR_11;





 VAR_11->i_ino = VAR_10;
 VAR_9 = FUNC_3(VAR_12, VAR_5, &VAR_7);
 VAR_8 = FUNC_6(VAR_12, VAR_11, VAR_9, VAR_7);
 if (VAR_8)
  goto error;

 FUNC_8(VAR_5, VAR_11, VAR_3, 0);
 FUNC_5(VAR_11);
 FUNC_4(VAR_11);
 return VAR_11;
error:
 FUNC_2(VAR_11);
 return FUNC_0(VAR_8);

}

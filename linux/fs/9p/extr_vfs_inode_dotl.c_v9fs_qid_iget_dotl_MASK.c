
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {struct v9fs_session_info* s_fs_info; } ;
struct p9_stat_dotl {int st_rdev; int st_mode; } ;
struct p9_qid {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_state; unsigned long i_ino; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct super_block*,unsigned long,int (*) (struct inode*,void*),int ,struct p9_stat_dotl*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct p9_fid*) ;
 int FUNC_7 (struct v9fs_session_info*,struct inode*,int ,int ) ;
 unsigned long FUNC_8 (struct p9_qid*) ;
 int VAR_2 ;
 int FUNC_9 (struct p9_stat_dotl*,struct inode*,int ) ;
 int FUNC_10 (struct inode*,void*) ;
 int FUNC_11 (struct inode*,void*) ;

__attribute__((used)) static struct inode *FUNC_12(struct super_block *VAR_3,
     struct p9_qid *VAR_4,
     struct p9_fid *VAR_5,
     struct p9_stat_dotl *VAR_6,
     int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 struct inode *VAR_10;
 struct v9fs_session_info *VAR_11 = VAR_3->s_fs_info;
 int (*VAR_12)(struct inode *, void *);

 if (VAR_7)
  VAR_12 = FUNC_11;
 else
  VAR_12 = FUNC_10;

 VAR_9 = FUNC_8(VAR_4);
 VAR_10 = FUNC_1(VAR_3, VAR_9, VAR_12, VAR_2, VAR_6);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 if (!(VAR_10->i_state & VAR_1))
  return VAR_10;





 VAR_10->i_ino = VAR_9;
 VAR_8 = FUNC_7(VAR_11, VAR_10,
     VAR_6->st_mode, FUNC_3(VAR_6->st_rdev));
 if (VAR_8)
  goto error;

 FUNC_9(VAR_6, VAR_10, 0);
 FUNC_5(VAR_10);
 VAR_8 = FUNC_6(VAR_10, VAR_5);
 if (VAR_8)
  goto error;

 FUNC_4(VAR_10);
 return VAR_10;
error:
 FUNC_2(VAR_10);
 return FUNC_0(VAR_8);

}

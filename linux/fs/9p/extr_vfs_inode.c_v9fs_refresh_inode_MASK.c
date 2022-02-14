
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {scalar_t__ cache; } ;
struct p9_wstat {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_wstat*) ;
 int FUNC_1 (struct p9_wstat*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct v9fs_session_info*,struct p9_wstat*,int *) ;
 int FUNC_5 (struct p9_wstat*) ;
 struct v9fs_session_info* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct p9_wstat*,struct inode*,int ,unsigned int) ;

int FUNC_8(struct p9_fid *VAR_4, struct inode *VAR_5)
{
 int VAR_6;
 dev_t VAR_7;
 struct p9_wstat *VAR_8;
 struct v9fs_session_info *VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_6(VAR_5);
 VAR_8 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);



 VAR_6 = FUNC_4(VAR_9, VAR_8, &VAR_7);
 if ((VAR_5->i_mode & VAR_2) != (VAR_6 & VAR_2))
  goto out;





 VAR_10 = (VAR_9->cache == VAR_1 || VAR_9->cache == VAR_0) ?
  VAR_3 : 0;
 FUNC_7(VAR_8, VAR_5, VAR_5->i_sb, VAR_10);
out:
 FUNC_5(VAR_8);
 FUNC_2(VAR_8);
 return 0;
}

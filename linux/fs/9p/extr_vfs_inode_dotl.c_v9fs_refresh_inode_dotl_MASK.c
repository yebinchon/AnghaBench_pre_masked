
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {scalar_t__ cache; } ;
struct p9_stat_dotl {int st_mode; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_stat_dotl*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_stat_dotl*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (struct p9_stat_dotl*) ;
 struct p9_stat_dotl* FUNC_3 (struct p9_fid*,int ) ;
 struct v9fs_session_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct p9_stat_dotl*,struct inode*,unsigned int) ;

int FUNC_6(struct p9_fid *VAR_5, struct inode *VAR_6)
{
 struct p9_stat_dotl *VAR_7;
 struct v9fs_session_info *VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_4(VAR_6);
 VAR_7 = FUNC_3(VAR_5, VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);



 if ((VAR_6->i_mode & VAR_3) != (VAR_7->st_mode & VAR_3))
  goto out;





 VAR_9 = (VAR_8->cache == VAR_1 || VAR_8->cache == VAR_0) ?
  VAR_4 : 0;
 FUNC_5(VAR_7, VAR_6, VAR_9);
out:
 FUNC_2(VAR_7);
 return 0;
}

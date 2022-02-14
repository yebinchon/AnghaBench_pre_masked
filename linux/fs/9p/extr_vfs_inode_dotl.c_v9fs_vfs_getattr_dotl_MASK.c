
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct path {struct dentry* dentry; } ;
struct p9_stat_dotl {int st_blksize; } ;
struct p9_fid {int st_blksize; } ;
struct kstat {int blksize; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_stat_dotl*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct p9_stat_dotl*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,struct kstat*) ;
 int FUNC_4 (struct p9_stat_dotl*) ;
 struct p9_stat_dotl* FUNC_5 (struct p9_stat_dotl*,int ) ;
 int FUNC_6 (int ,char*,struct dentry*) ;
 struct v9fs_session_info* FUNC_7 (struct dentry*) ;
 struct p9_stat_dotl* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct p9_stat_dotl*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(const struct path *VAR_4, struct kstat *VAR_5,
   u32 VAR_6, unsigned int VAR_7)
{
 struct dentry *VAR_8 = VAR_4->dentry;
 struct v9fs_session_info *VAR_9;
 struct p9_fid *VAR_10;
 struct p9_stat_dotl *VAR_11;

 FUNC_6(VAR_2, "dentry: %p\n", VAR_8);
 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9->cache == VAR_1 || VAR_9->cache == VAR_0) {
  FUNC_3(FUNC_2(VAR_8), VAR_5);
  return 0;
 }
 VAR_10 = FUNC_8(VAR_8);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);





 VAR_11 = FUNC_5(VAR_10, VAR_3);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_9(VAR_11, FUNC_2(VAR_8), 0);
 FUNC_3(FUNC_2(VAR_8), VAR_5);

 VAR_5->blksize = VAR_11->st_blksize;

 FUNC_4(VAR_11);
 return 0;
}

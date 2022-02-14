
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct path {struct dentry* dentry; } ;
struct p9_wstat {int dummy; } ;
typedef struct p9_wstat p9_fid ;
struct kstat {int dummy; } ;
struct dentry {int d_sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_wstat*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_wstat*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,struct kstat*) ;
 int FUNC_4 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_5 (struct p9_wstat*) ;
 int FUNC_6 (int ,char*,struct dentry*) ;
 int FUNC_7 (struct p9_wstat*) ;
 struct v9fs_session_info* FUNC_8 (struct dentry*) ;
 struct p9_wstat* FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct p9_wstat*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(const struct path *VAR_3, struct kstat *VAR_4,
   u32 VAR_5, unsigned int VAR_6)
{
 struct dentry *VAR_7 = VAR_3->dentry;
 struct v9fs_session_info *VAR_8;
 struct p9_fid *VAR_9;
 struct p9_wstat *VAR_10;

 FUNC_6(VAR_2, "dentry: %p\n", VAR_7);
 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8->cache == VAR_1 || VAR_8->cache == VAR_0) {
  FUNC_3(FUNC_2(VAR_7), VAR_4);
  return 0;
 }
 VAR_9 = FUNC_9(VAR_7);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_5(VAR_9);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_10(VAR_10, FUNC_2(VAR_7), VAR_7->d_sb, 0);
 FUNC_3(FUNC_2(VAR_7), VAR_4);

 FUNC_7(VAR_10);
 FUNC_4(VAR_10);
 return 0;
}

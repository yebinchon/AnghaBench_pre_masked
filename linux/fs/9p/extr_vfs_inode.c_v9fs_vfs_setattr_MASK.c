
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct p9_wstat {scalar_t__ length; int n_gid; int n_uid; int atime; int mtime; int mode; } ;
struct p9_fid {int dummy; } ;
struct TYPE_10__ {int tv_sec; } ;
struct TYPE_9__ {int tv_sec; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_gid; int ia_uid; TYPE_2__ ia_atime; TYPE_1__ ia_mtime; int ia_mode; } ;
struct dentry {int dummy; } ;
struct TYPE_11__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_7 ;
 int FUNC_1 (struct p9_fid*) ;
 TYPE_3__* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct p9_fid*,struct p9_wstat*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_3__*,struct iattr*) ;
 int FUNC_10 (struct dentry*,struct iattr*) ;
 int FUNC_11 (TYPE_3__*,scalar_t__) ;
 int FUNC_12 (struct v9fs_session_info*,int ) ;
 int FUNC_13 (struct p9_wstat*) ;
 struct v9fs_session_info* FUNC_14 (struct dentry*) ;
 struct p9_fid* FUNC_15 (struct dentry*) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_18(struct dentry *VAR_8, struct iattr *VAR_9)
{
 int VAR_10;
 struct v9fs_session_info *VAR_11;
 struct p9_fid *VAR_12;
 struct p9_wstat VAR_13;

 FUNC_8(VAR_7, "\n");
 VAR_10 = FUNC_10(VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = -VAR_6;
 VAR_11 = FUNC_14(VAR_8);
 VAR_12 = FUNC_15(VAR_8);
 if(FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 FUNC_13(&VAR_13);
 if (VAR_9->ia_valid & VAR_2)
  VAR_13.mode = FUNC_12(VAR_11, VAR_9->ia_mode);

 if (VAR_9->ia_valid & VAR_3)
  VAR_13.mtime = VAR_9->ia_mtime.tv_sec;

 if (VAR_9->ia_valid & VAR_0)
  VAR_13.atime = VAR_9->ia_atime.tv_sec;

 if (VAR_9->ia_valid & VAR_4)
  VAR_13.length = VAR_9->ia_size;

 if (FUNC_17(VAR_11)) {
  if (VAR_9->ia_valid & VAR_5)
   VAR_13.n_uid = VAR_9->ia_uid;

  if (VAR_9->ia_valid & VAR_1)
   VAR_13.n_gid = VAR_9->ia_gid;
 }


 if (FUNC_3(VAR_8))
  FUNC_4(FUNC_2(VAR_8)->i_mapping);

 VAR_10 = FUNC_7(VAR_12, &VAR_13);
 if (VAR_10 < 0)
  return VAR_10;

 if ((VAR_9->ia_valid & VAR_4) &&
     VAR_9->ia_size != FUNC_5(FUNC_2(VAR_8)))
  FUNC_11(FUNC_2(VAR_8), VAR_9->ia_size);

 FUNC_16(FUNC_2(VAR_8));

 FUNC_9(FUNC_2(VAR_8), VAR_9);
 FUNC_6(FUNC_2(VAR_8));
 return 0;
}

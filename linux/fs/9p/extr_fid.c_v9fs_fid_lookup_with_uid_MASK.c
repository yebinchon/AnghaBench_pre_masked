
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9fs_session_info {int flags; unsigned char* uname; int rename_sem; int aname; int clnt; } ;
struct p9_fid {int dummy; } ;
struct TYPE_3__ {unsigned char const* name; } ;
struct dentry {int d_lock; TYPE_2__* d_sb; TYPE_1__ d_name; struct dentry* d_parent; } ;
typedef int kuid_t ;
struct TYPE_4__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_fid*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dentry*,struct p9_fid*) ;
 int FUNC_3 (struct v9fs_session_info*,struct dentry*,unsigned char const***) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned char const**) ;
 int FUNC_7 (int,int ) ;
 struct p9_fid* FUNC_8 (int ,int *,unsigned char const*,int ,int ) ;
 int FUNC_9 (struct p9_fid*) ;
 struct p9_fid* FUNC_10 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct v9fs_session_info* FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*,struct p9_fid*) ;
 struct p9_fid* FUNC_16 (struct dentry*,int ,int) ;
 scalar_t__ FUNC_17 (struct v9fs_session_info*) ;
 scalar_t__ FUNC_18 (struct v9fs_session_info*) ;

__attribute__((used)) static struct p9_fid *FUNC_19(struct dentry *VAR_5,
            kuid_t VAR_6, int VAR_7)
{
 struct dentry *VAR_8;
 const unsigned char **VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct v9fs_session_info *VAR_16;
 struct p9_fid *VAR_17, *VAR_18 = ((void*)0);

 VAR_16 = FUNC_14(VAR_5);
 VAR_15 = VAR_16->flags & VAR_3;
 VAR_17 = FUNC_16(VAR_5, VAR_6, VAR_7);
 if (VAR_17)
  return VAR_17;





 FUNC_5(&VAR_16->rename_sem);
 VAR_8 = VAR_5->d_parent;
 VAR_17 = FUNC_16(VAR_8, VAR_6, VAR_7);
 if (VAR_17) {

  VAR_17 = FUNC_10(VAR_17, 1, &VAR_5->d_name.name, 1);
  goto fid_out;
 }
 FUNC_13(&VAR_16->rename_sem);


 VAR_17 = FUNC_16(VAR_5->d_sb->s_root, VAR_6, VAR_7);
 if (!VAR_17) {

  if (VAR_15 == VAR_4)
   return FUNC_0(-VAR_1);

  if (FUNC_18(VAR_16) || FUNC_17(VAR_16))
    VAR_10 = ((void*)0);
  else
   VAR_10 = VAR_16->uname;

  VAR_17 = FUNC_8(VAR_16->clnt, ((void*)0), VAR_10, VAR_6,
           VAR_16->aname);
  if (FUNC_1(VAR_17))
   return VAR_17;

  FUNC_15(VAR_5->d_sb->s_root, VAR_17);
 }

 if (VAR_5->d_sb->s_root == VAR_5)
  return VAR_17;





 FUNC_5(&VAR_16->rename_sem);
 VAR_12 = FUNC_3(VAR_16, VAR_5, &VAR_9);
 if (VAR_12 < 0) {
  VAR_17 = FUNC_0(VAR_12);
  goto err_out;
 }
 VAR_14 = 1;
 VAR_11 = 0;
 while (VAR_11 < VAR_12) {
  VAR_13 = FUNC_7(VAR_12 - VAR_11, VAR_2);




  VAR_17 = FUNC_10(VAR_17, VAR_13, &VAR_9[VAR_11], VAR_14);
  if (FUNC_1(VAR_17)) {
   if (VAR_18) {





    FUNC_9(VAR_18);
   }
   FUNC_6(VAR_9);
   goto err_out;
  }
  VAR_18 = VAR_17;
  VAR_11 += VAR_13;
  VAR_14 = 0;
 }
 FUNC_6(VAR_9);
fid_out:
 if (!FUNC_1(VAR_17)) {
  FUNC_11(&VAR_5->d_lock);
  if (FUNC_4(VAR_5)) {
   FUNC_12(&VAR_5->d_lock);
   FUNC_9(VAR_17);
   VAR_17 = FUNC_0(-VAR_0);
  } else {
   FUNC_2(VAR_5, VAR_17);
   FUNC_12(&VAR_5->d_lock);
  }
 }
err_out:
 FUNC_13(&VAR_16->rename_sem);
 return VAR_17;
}

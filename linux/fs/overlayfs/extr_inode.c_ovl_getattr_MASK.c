
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {scalar_t__ dentry; } ;
struct ovl_layer {int dummy; } ;
struct kstat {int nlink; int blocks; int ino; } ;
struct dentry {TYPE_1__* d_inode; int d_sb; } ;
struct cred {int dummy; } ;
typedef enum ovl_path_type { ____Placeholder_ovl_path_type } ovl_path_type ;
struct TYPE_2__ {int i_nlink; int i_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct ovl_layer* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*,struct kstat*,struct ovl_layer*) ;
 struct cred* FUNC_9 (int ) ;
 int FUNC_10 (struct dentry*,struct path*) ;
 int FUNC_11 (struct dentry*,struct path*) ;
 int FUNC_12 (struct dentry*,struct path*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct cred const*) ;
 int FUNC_18 (struct path*,struct kstat*,int,unsigned int) ;

int FUNC_19(const struct path *VAR_4, struct kstat *VAR_5,
  u32 VAR_6, unsigned int VAR_7)
{
 struct dentry *VAR_8 = VAR_4->dentry;
 enum ovl_path_type VAR_9;
 struct path VAR_10;
 const struct cred *VAR_11;
 bool VAR_12 = FUNC_3(VAR_8->d_inode->i_mode);
 bool VAR_13 = FUNC_13(VAR_8->d_sb);
 struct ovl_layer *VAR_14 = ((void*)0);
 int VAR_15;
 bool VAR_16 = 0;

 VAR_16 = FUNC_6(VAR_8);

 VAR_9 = FUNC_12(VAR_8, &VAR_10);
 VAR_11 = FUNC_9(VAR_8->d_sb);
 VAR_15 = FUNC_18(&VAR_10, VAR_5, VAR_6, VAR_7);
 if (VAR_15)
  goto out;
 if (!VAR_12 || VAR_13 || FUNC_16(VAR_8->d_sb)) {
  if (!FUNC_2(VAR_9)) {
   VAR_14 = FUNC_7(VAR_8);
  } else if (FUNC_1(VAR_9)) {
   struct kstat VAR_17;
   u32 VAR_18 = VAR_2 | VAR_1 |
     (!VAR_12 ? VAR_3 : 0);

   FUNC_10(VAR_8, &VAR_10);
   VAR_15 = FUNC_18(&VAR_10, &VAR_17,
       VAR_18, VAR_7);
   if (VAR_15)
    goto out;
   if (FUNC_14(VAR_0, FUNC_4(VAR_8)) ||
       (!FUNC_15(VAR_8->d_sb) &&
        (VAR_12 || VAR_17.nlink == 1))) {
    VAR_5->ino = VAR_17.ino;
    VAR_14 = FUNC_7(VAR_8);
   }
   if (VAR_16 &&
       VAR_10.dentry == FUNC_5(VAR_8)) {
    VAR_5->blocks = VAR_17.blocks;
    VAR_16 = 0;
   }
  }

  if (VAR_16) {




   struct kstat VAR_19;
   u32 VAR_20 = VAR_1;

   FUNC_11(VAR_8, &VAR_10);
   VAR_15 = FUNC_18(&VAR_10, &VAR_19,
       VAR_20, VAR_7);
   if (VAR_15)
    goto out;
   VAR_5->blocks = VAR_19.blocks;
  }
 }

 VAR_15 = FUNC_8(VAR_8, VAR_5, VAR_14);
 if (VAR_15)
  goto out;






 if (VAR_12 && FUNC_0(VAR_9))
  VAR_5->nlink = 1;







 if (!VAR_12 && FUNC_14(VAR_0, FUNC_4(VAR_8)))
  VAR_5->nlink = VAR_8->d_inode->i_nlink;

out:
 FUNC_17(VAR_11);

 return VAR_15;
}

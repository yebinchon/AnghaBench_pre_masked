
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int mnt; } ;
struct svc_export {int ex_flags; TYPE_1__ ex_path; } ;
struct inode {int i_mode; int i_uid; int i_gid; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_8 (struct svc_rqst*,struct svc_export*) ;
 int FUNC_9 (struct inode*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__be32
FUNC_12(struct svc_rqst *VAR_18, struct svc_export *VAR_19,
     struct dentry *VAR_20, int VAR_21)
{
 struct inode *VAR_22 = FUNC_6(VAR_20);
 int VAR_23;

 if ((VAR_21 & VAR_7) == VAR_8)
  return 0;
 if (!(VAR_21 & VAR_5))
  if (VAR_21 & (VAR_14 | VAR_12 | VAR_13)) {
   if (FUNC_8(VAR_18, VAR_19) ||
       FUNC_3(VAR_19->ex_path.mnt))
    return VAR_17;
   if ( FUNC_1(VAR_22))
    return VAR_16;
  }
 if ((VAR_21 & VAR_13) && FUNC_0(VAR_22))
  return VAR_16;

 if (VAR_21 & VAR_6) {




  if (VAR_19->ex_flags & VAR_15)
   return 0;
  else
   VAR_21 = VAR_10 | VAR_9;
 }
 if ((VAR_21 & VAR_9) &&
     FUNC_11(VAR_22->i_uid, FUNC_5()))
  return 0;


 VAR_23 = FUNC_9(VAR_22, VAR_21 & (VAR_2|VAR_3|VAR_1));


 if (VAR_23 == -VAR_0 && FUNC_2(VAR_22->i_mode) &&
      (VAR_21 == (VAR_10 | VAR_9) ||
       VAR_21 == (VAR_10 | VAR_11)))
  VAR_23 = FUNC_9(VAR_22, VAR_1);

 return VAR_23? FUNC_10(VAR_23) : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_level; int l_requested; int l_lock; int l_namelen; int l_name; int l_lksb; } ;
struct ocfs2_cluster_connection {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
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
 struct ocfs2_cluster_connection* FUNC_1 (struct user_lock_res*) ;
 int VAR_14 ;
 int FUNC_2 (int ,char*,int ,int ,...) ;
 int FUNC_3 (struct ocfs2_cluster_connection*,int,int *,int,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct user_lock_res*,int) ;
 int FUNC_8 (char*,int,struct user_lock_res*) ;
 int FUNC_9 (struct user_lock_res*,int) ;
 int FUNC_10 (struct user_lock_res*) ;
 int FUNC_11 (struct user_lock_res*) ;
 int FUNC_12 (struct user_lock_res*) ;

int FUNC_13(struct user_lock_res *VAR_15,
     int VAR_16,
     int VAR_17)
{
 int VAR_18, VAR_19;
 struct ocfs2_cluster_connection *VAR_20 =
  FUNC_1(VAR_15);

 if (VAR_16 != VAR_3 &&
     VAR_16 != VAR_6) {
  FUNC_2(VAR_11, "lockres %.*s: invalid request!\n",
       VAR_15->l_namelen, VAR_15->l_name);
  VAR_18 = -VAR_8;
  goto bail;
 }

 FUNC_2(VAR_10, "lockres %.*s, level %d, flags = 0x%x\n",
      VAR_15->l_namelen, VAR_15->l_name, VAR_16, VAR_17);

again:
 if (FUNC_4(VAR_14)) {
  VAR_18 = -VAR_9;
  goto bail;
 }

 FUNC_5(&VAR_15->l_lock);




 if ((VAR_15->l_flags & VAR_13) &&
     (VAR_16 > VAR_15->l_level)) {


  FUNC_6(&VAR_15->l_lock);

  FUNC_12(VAR_15);
  goto again;
 }

 if ((VAR_15->l_flags & VAR_12) &&
     (!FUNC_9(VAR_15, VAR_16))) {


  FUNC_6(&VAR_15->l_lock);

  FUNC_11(VAR_15);
  goto again;
 }

 if (VAR_16 > VAR_15->l_level) {
  VAR_19 = VAR_17 | VAR_2;
  if (VAR_15->l_level != VAR_4)
   VAR_19 |= VAR_0;

  VAR_15->l_requested = VAR_16;
  VAR_15->l_flags |= VAR_13;
  FUNC_6(&VAR_15->l_lock);

  FUNC_0(VAR_16 == VAR_4);
  FUNC_0(VAR_16 == VAR_5);


  VAR_18 = FUNC_3(VAR_20, VAR_16, &VAR_15->l_lksb,
     VAR_19, VAR_15->l_name,
     VAR_15->l_namelen);
  if (VAR_18) {
   if ((VAR_17 & VAR_1) &&
       (VAR_18 != -VAR_7))
    FUNC_8("ocfs2_dlm_lock",
         VAR_18, VAR_15);
   FUNC_10(VAR_15);
   goto bail;
  }

  FUNC_12(VAR_15);
  goto again;
 }

 FUNC_7(VAR_15, VAR_16);
 FUNC_6(&VAR_15->l_lock);

 VAR_18 = 0;
bail:
 return VAR_18;
}

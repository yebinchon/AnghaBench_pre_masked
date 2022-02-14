
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_gid; int i_uid; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_inode; } ;
struct gfs2_alloc_parms {scalar_t__ target; } ;
typedef scalar_t__ s64 ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct gfs2_inode*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct gfs2_inode*,int ,int ,struct gfs2_alloc_parms*) ;
 int FUNC_5 (struct gfs2_inode*,int ,int ) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_6, struct iattr *VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_6);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_6);
 kuid_t VAR_10, VAR_11;
 kgid_t VAR_12, VAR_13;
 int VAR_14;
 struct gfs2_alloc_parms VAR_15;

 VAR_10 = VAR_6->i_uid;
 VAR_12 = VAR_6->i_gid;
 VAR_11 = VAR_7->ia_uid;
 VAR_13 = VAR_7->ia_gid;

 if (!(VAR_7->ia_valid & VAR_1) || FUNC_13(VAR_10, VAR_11))
  VAR_10 = VAR_11 = VAR_3;
 if (!(VAR_7->ia_valid & VAR_0) || FUNC_12(VAR_12, VAR_13))
  VAR_12 = VAR_13 = VAR_2;

 VAR_14 = FUNC_8(VAR_8);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_7(VAR_9);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_5(VAR_8, VAR_11, VAR_13);
 if (VAR_14)
  goto out;

 VAR_15.target = FUNC_2(&VAR_8->i_inode);

 if (!FUNC_13(VAR_10, VAR_3) ||
     !FUNC_12(VAR_12, VAR_2)) {
  VAR_14 = FUNC_4(VAR_8, VAR_11, VAR_13, &VAR_15);
  if (VAR_14)
   goto out_gunlock_q;
 }

 VAR_14 = FUNC_10(VAR_9, VAR_4 + 2 * VAR_5, 0);
 if (VAR_14)
  goto out_gunlock_q;

 VAR_14 = FUNC_9(VAR_6, VAR_7);
 if (VAR_14)
  goto out_end_trans;

 if (!FUNC_13(VAR_10, VAR_3) ||
     !FUNC_12(VAR_12, VAR_2)) {
  FUNC_3(VAR_8, -(s64)VAR_15.target, VAR_10, VAR_12);
  FUNC_3(VAR_8, VAR_15.target, VAR_11, VAR_13);
 }

out_end_trans:
 FUNC_11(VAR_9);
out_gunlock_q:
 FUNC_6(VAR_8);
out:
 return VAR_14;
}

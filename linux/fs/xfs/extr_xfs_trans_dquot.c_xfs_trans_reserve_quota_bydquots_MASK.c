
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_trans {int * t_dqinfo; } ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_trans*) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_mount*,struct xfs_dquot*,int ,long,int) ;

int
FUNC_5(
 struct xfs_trans *VAR_3,
 struct xfs_mount *VAR_4,
 struct xfs_dquot *VAR_5,
 struct xfs_dquot *VAR_6,
 struct xfs_dquot *VAR_7,
 int64_t VAR_8,
 long VAR_9,
 uint VAR_10)
{
 int VAR_11;

 if (!FUNC_2(VAR_4) || !FUNC_1(VAR_4))
  return 0;

 if (VAR_3 && VAR_3->t_dqinfo == ((void*)0))
  FUNC_3(VAR_3);

 FUNC_0(VAR_10 & VAR_2);

 if (VAR_5) {
  VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9,
     (VAR_10 & ~VAR_0));
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_6) {
  VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_8, VAR_9, VAR_10);
  if (VAR_11)
   goto unwind_usr;
 }

 if (VAR_7) {
  VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
  if (VAR_11)
   goto unwind_grp;
 }




 return 0;

unwind_grp:
 VAR_10 |= VAR_1;
 if (VAR_6)
  FUNC_4(VAR_3, VAR_4, VAR_6, -VAR_8, -VAR_9, VAR_10);
unwind_usr:
 VAR_10 |= VAR_1;
 if (VAR_5)
  FUNC_4(VAR_3, VAR_4, VAR_5, -VAR_8, -VAR_9, VAR_10);
 return VAR_11;
}

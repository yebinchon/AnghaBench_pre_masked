
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
struct xfs_trans {int t_flags; int t_pflags; int * t_ticket; int t_dfops; struct xfs_mount* t_mountp; } ;
struct xfs_mount {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfs_trans*,int ) ;
 int FUNC_7 (struct xfs_trans**) ;
 int FUNC_8 (struct xfs_mount*,struct xfs_trans*,int*,int) ;
 int FUNC_9 (struct xfs_mount*,int *,int *,int) ;
 int FUNC_10 (struct xfs_mount*,int,int ,int *) ;
 int FUNC_11 (struct xfs_trans*) ;
 int FUNC_12 (struct xfs_trans*) ;
 int FUNC_13 (struct xfs_trans*) ;
 int FUNC_14 (struct xfs_trans*,int) ;
 int FUNC_15 (struct xfs_trans*) ;
 int FUNC_16 (struct xfs_trans*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_17(
 struct xfs_trans *VAR_11,
 bool VAR_12)
{
 struct xfs_mount *VAR_13 = VAR_11->t_mountp;
 xfs_lsn_t VAR_14 = -1;
 int VAR_15 = 0;
 int VAR_16 = VAR_11->t_flags & VAR_6;

 FUNC_6(VAR_11, VAR_7);





 FUNC_1(!FUNC_5(&VAR_11->t_dfops) &&
       !(VAR_11->t_flags & VAR_4));
 if (!VAR_12 && (VAR_11->t_flags & VAR_4)) {
  VAR_15 = FUNC_7(&VAR_11);
  if (VAR_15)
   goto out_unreserve;
 }
 if (!(VAR_11->t_flags & VAR_3))
  goto out_unreserve;

 if (FUNC_2(VAR_13)) {
  VAR_15 = -VAR_0;
  goto out_unreserve;
 }

 FUNC_0(VAR_11->t_ticket != ((void*)0));




 if (VAR_11->t_flags & VAR_5)
  FUNC_12(VAR_11);
 FUNC_11(VAR_11);

 FUNC_8(VAR_13, VAR_11, &VAR_14, VAR_12);

 FUNC_4(&VAR_11->t_pflags, VAR_1);
 FUNC_13(VAR_11);





 if (VAR_16) {
  VAR_15 = FUNC_10(VAR_13, VAR_14, VAR_2, ((void*)0));
  FUNC_3(VAR_13, VAR_10);
 } else {
  FUNC_3(VAR_13, VAR_8);
 }

 return VAR_15;

out_unreserve:
 FUNC_16(VAR_11);






 FUNC_15(VAR_11);
 if (VAR_11->t_ticket) {
  VAR_14 = FUNC_9(VAR_13, VAR_11->t_ticket, ((void*)0), VAR_12);
  if (VAR_14 == -1 && !VAR_15)
   VAR_15 = -VAR_0;
  VAR_11->t_ticket = ((void*)0);
 }
 FUNC_4(&VAR_11->t_pflags, VAR_1);
 FUNC_14(VAR_11, !!VAR_15);
 FUNC_13(VAR_11);

 FUNC_3(VAR_13, VAR_9);
 return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
struct xfs_scrub {int ilock_flags; int flags; TYPE_2__* ip; int tp; struct xfs_mount* mp; } ;
struct TYPE_6__ {scalar_t__ sb_rootino; } ;
struct xfs_mount {TYPE_1__ m_sb; TYPE_2__* m_rootip; } ;
struct TYPE_8__ {int i_mode; } ;
struct TYPE_7__ {scalar_t__ i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xfs_scrub*,int ,int ,int*) ;
 int FUNC_3 (struct xfs_scrub*,int ,int ) ;
 int FUNC_4 (struct xfs_scrub*,scalar_t__,int*) ;
 int FUNC_5 (struct xfs_scrub*) ;
 int FUNC_6 (int ,TYPE_2__*,int *,scalar_t__*,int *) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int VAR_6 ;
 int FUNC_8 (struct xfs_mount*,scalar_t__) ;

int
FUNC_9(
 struct xfs_scrub *VAR_7)
{
 struct xfs_mount *VAR_8 = VAR_7->mp;
 xfs_ino_t VAR_9;
 bool VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;





 if (!FUNC_0(FUNC_1(VAR_7->ip)->i_mode))
  return -VAR_1;


 if (!FUNC_8(VAR_8, VAR_7->ip->i_ino)) {
  FUNC_3(VAR_7, VAR_3, 0);
  goto out;
 }
 VAR_7->ilock_flags &= ~(VAR_4 | VAR_5);
 FUNC_7(VAR_7->ip, VAR_4 | VAR_5);


 VAR_12 = FUNC_6(VAR_7->tp, VAR_7->ip, &VAR_6, &VAR_9, ((void*)0));
 if (!FUNC_2(VAR_7, VAR_3, 0, &VAR_12))
  goto out;
 if (!FUNC_8(VAR_8, VAR_9)) {
  FUNC_3(VAR_7, VAR_3, 0);
  goto out;
 }


 if (VAR_7->ip == VAR_8->m_rootip) {
  if (VAR_7->ip->i_ino != VAR_8->m_sb.sb_rootino ||
      VAR_7->ip->i_ino != VAR_9)
   FUNC_3(VAR_7, VAR_3, 0);
  goto out;
 }

 do {
  VAR_12 = FUNC_4(VAR_7, VAR_9, &VAR_10);
  if (VAR_12)
   goto out;
 } while (VAR_10 && ++VAR_11 < 20);





 if (VAR_10 && VAR_11 == 20)
  FUNC_5(VAR_7);
out:




 if ((VAR_7->flags & VAR_2) && VAR_12 == -VAR_0) {
  VAR_12 = 0;
  FUNC_5(VAR_7);
 }
 return VAR_12;
}

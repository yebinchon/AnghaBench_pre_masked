
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_dblocks; int sb_imax_pct; int sb_agblocks; } ;
typedef TYPE_1__ xfs_sb_t ;
typedef scalar_t__ xfs_ino_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef int xfs_agino_t ;
typedef int uint64_t ;
struct xfs_perag {int pagi_inodeok; int pagf_metadata; } ;
struct xfs_mount {int m_flags; TYPE_1__ m_sb; } ;
struct TYPE_4__ {scalar_t__ maxicount; } ;


 TYPE_2__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*,int) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 struct xfs_perag* FUNC_4 (struct xfs_mount*,scalar_t__) ;
 int FUNC_5 (struct xfs_perag*) ;

xfs_agnumber_t
FUNC_6(
 struct xfs_mount *VAR_3,
 xfs_agnumber_t VAR_4)
{
 xfs_agnumber_t VAR_5;
 xfs_agnumber_t VAR_6 = 0;
 xfs_sb_t *VAR_7 = &VAR_3->m_sb;
 xfs_agnumber_t VAR_8;
 xfs_agino_t VAR_9;
 xfs_ino_t VAR_10;





 if (FUNC_0(VAR_3)->maxicount) {
  uint64_t VAR_11;

  VAR_11 = VAR_7->sb_dblocks * VAR_7->sb_imax_pct;
  FUNC_3(VAR_11, 100);
  VAR_11 += VAR_7->sb_agblocks - 1;
  FUNC_3(VAR_11, VAR_7->sb_agblocks);
  VAR_8 = VAR_11;
 } else {
  VAR_8 = VAR_4;
 }


 VAR_9 = FUNC_1(VAR_3, VAR_7->sb_agblocks - 1);
 VAR_10 = FUNC_2(VAR_3, VAR_4 - 1, VAR_9);






 if ((VAR_3->m_flags & VAR_2) && VAR_10 > VAR_0)
  VAR_3->m_flags |= VAR_1;
 else
  VAR_3->m_flags &= ~VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct xfs_perag *VAR_12;

  VAR_10 = FUNC_2(VAR_3, VAR_5, VAR_9);

  VAR_12 = FUNC_4(VAR_3, VAR_5);

  if (VAR_3->m_flags & VAR_1) {
   if (VAR_10 > VAR_0) {
    VAR_12->pagi_inodeok = 0;
    VAR_12->pagf_metadata = 0;
   } else {
    VAR_12->pagi_inodeok = 1;
    VAR_6++;
    if (VAR_5 < VAR_8)
     VAR_12->pagf_metadata = 1;
    else
     VAR_12->pagf_metadata = 0;
   }
  } else {
   VAR_12->pagi_inodeok = 1;
   VAR_12->pagf_metadata = 0;
  }

  FUNC_5(VAR_12);
 }

 return (VAR_3->m_flags & VAR_1) ? VAR_6 : VAR_4;
}

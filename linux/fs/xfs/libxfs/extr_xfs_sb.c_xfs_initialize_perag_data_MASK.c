
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sb_dblocks; scalar_t__ sb_fdblocks; scalar_t__ sb_icount; scalar_t__ sb_ifree; } ;
typedef TYPE_1__ xfs_sb_t ;
struct TYPE_6__ {scalar_t__ pagi_freecount; scalar_t__ pagi_count; scalar_t__ pagf_freeblks; scalar_t__ pagf_flcount; scalar_t__ pagf_btreeblks; } ;
typedef TYPE_2__ xfs_perag_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef scalar_t__ uint64_t ;
struct xfs_mount {int m_sb_lock; TYPE_1__ m_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_mount*,char*) ;
 int FUNC_3 (struct xfs_mount*,int *,scalar_t__,int ) ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 int FUNC_5 (struct xfs_mount*,int *,scalar_t__) ;
 TYPE_2__* FUNC_6 (struct xfs_mount*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct xfs_mount*) ;

int
FUNC_9(
 struct xfs_mount *VAR_2,
 xfs_agnumber_t VAR_3)
{
 xfs_agnumber_t VAR_4;
 xfs_perag_t *VAR_5;
 xfs_sb_t *VAR_6 = &VAR_2->m_sb;
 uint64_t VAR_7 = 0;
 uint64_t VAR_8 = 0;
 uint64_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 uint64_t VAR_11 = 0;
 uint64_t VAR_12;
 int VAR_13 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {





  VAR_13 = FUNC_3(VAR_2, ((void*)0), VAR_4, 0);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_5(VAR_2, ((void*)0), VAR_4);
  if (VAR_13)
   return VAR_13;
  VAR_5 = FUNC_6(VAR_2, VAR_4);
  VAR_7 += VAR_5->pagi_freecount;
  VAR_8 += VAR_5->pagi_count;
  VAR_9 += VAR_5->pagf_freeblks;
  VAR_10 += VAR_5->pagf_flcount;
  VAR_11 += VAR_5->pagf_btreeblks;
  FUNC_7(VAR_5);
 }
 VAR_12 = VAR_9 + VAR_10 + VAR_11;







 if (VAR_12 > VAR_6->sb_dblocks || VAR_7 > VAR_8) {
  FUNC_2(VAR_2, "AGF corruption. Please run xfs_repair.");
  VAR_13 = -VAR_0;
  goto out;
 }


 FUNC_0(&VAR_2->m_sb_lock);
 VAR_6->sb_ifree = VAR_7;
 VAR_6->sb_icount = VAR_8;
 VAR_6->sb_fdblocks = VAR_12;
 FUNC_1(&VAR_2->m_sb_lock);

 FUNC_8(VAR_2);
out:
 FUNC_4(VAR_2, VAR_1);
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ m_resblks; scalar_t__ m_resblks_avail; scalar_t__ m_alloc_set_aside; int m_sb_lock; int m_fdblocks; } ;
typedef TYPE_1__ xfs_mount_t ;
struct TYPE_7__ {scalar_t__ resblks; scalar_t__ resblks_avail; } ;
typedef TYPE_2__ xfs_fsop_resblks_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;

int
FUNC_4(
 xfs_mount_t *VAR_2,
 uint64_t *VAR_3,
 xfs_fsop_resblks_t *VAR_4)
{
 int64_t VAR_5, VAR_6;
 int64_t VAR_7 = 0;
 uint64_t VAR_8;
 int64_t VAR_9;
 int VAR_10 = 0;


 if (VAR_3 == (uint64_t *)((void*)0)) {
  if (!VAR_4)
   return -VAR_0;
  VAR_4->resblks = VAR_2->m_resblks;
  VAR_4->resblks_avail = VAR_2->m_resblks_avail;
  return 0;
 }

 VAR_8 = *VAR_3;
 FUNC_1(&VAR_2->m_sb_lock);







 if (VAR_2->m_resblks > VAR_8) {
  VAR_5 = VAR_2->m_resblks_avail - VAR_8;
  if (VAR_5 > 0) {
   VAR_7 = VAR_5;
   VAR_2->m_resblks_avail -= VAR_5;
  }
  VAR_2->m_resblks = VAR_8;
  if (VAR_7) {
   FUNC_2(&VAR_2->m_sb_lock);
   VAR_10 = FUNC_3(VAR_2, VAR_7, 0);
   FUNC_1(&VAR_2->m_sb_lock);
  }

  goto out;
 }






 VAR_10 = -VAR_1;
 do {
  VAR_9 = FUNC_0(&VAR_2->m_fdblocks) -
      VAR_2->m_alloc_set_aside;
  if (VAR_9 <= 0)
   break;

  VAR_6 = VAR_8 - VAR_2->m_resblks;
  VAR_5 = VAR_9 - VAR_6;
  if (VAR_5 < 0)

   VAR_7 = VAR_9;
  else
   VAR_7 = VAR_6;
  FUNC_2(&VAR_2->m_sb_lock);
  VAR_10 = FUNC_3(VAR_2, -VAR_7, 0);
  FUNC_1(&VAR_2->m_sb_lock);
 } while (VAR_10 == -VAR_1);





 if (!VAR_10 && VAR_7) {
  VAR_2->m_resblks += VAR_7;
  VAR_2->m_resblks_avail += VAR_7;
 }

out:
 if (VAR_4) {
  VAR_4->resblks = VAR_2->m_resblks;
  VAR_4->resblks_avail = VAR_2->m_resblks_avail;
 }

 FUNC_2(&VAR_2->m_sb_lock);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
struct xfs_perag {scalar_t__ pagf_flcount; scalar_t__ pagf_freeblks; scalar_t__ pagf_longest; } ;



xfs_extlen_t
FUNC_0(
 struct xfs_perag *VAR_0,
 xfs_extlen_t VAR_1,
 xfs_extlen_t VAR_2)
{
 xfs_extlen_t VAR_3 = 0;





 if (VAR_1 > VAR_0->pagf_flcount)
  VAR_3 = VAR_1 - VAR_0->pagf_flcount;






 if (VAR_0->pagf_freeblks - VAR_0->pagf_longest < VAR_2)
  VAR_3 += VAR_2 - (VAR_0->pagf_freeblks - VAR_0->pagf_longest);





 if (VAR_0->pagf_longest > VAR_3)
  return VAR_0->pagf_longest - VAR_3;


 return VAR_0->pagf_flcount > 0 || VAR_0->pagf_longest > 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; scalar_t__ br_startblock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_1(
 struct xfs_bmbt_irec *VAR_1,
 xfs_fileoff_t VAR_2)
{
 xfs_fileoff_t VAR_3 = VAR_1->br_startoff + VAR_1->br_blockcount;

 if (VAR_3 == VAR_2)
  return 0;

 VAR_1->br_startoff += VAR_1->br_blockcount;
 if (!FUNC_0(VAR_1->br_startblock) &&
     VAR_1->br_startblock != VAR_0)
  VAR_1->br_startblock += VAR_1->br_blockcount;
 VAR_1->br_blockcount = VAR_2 - VAR_3;
 return 1;
}

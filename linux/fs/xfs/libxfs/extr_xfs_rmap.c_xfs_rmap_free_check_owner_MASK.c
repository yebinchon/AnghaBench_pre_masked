
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_filblks_t ;
typedef scalar_t__ uint64_t ;
struct xfs_rmap_irec {unsigned int rm_flags; scalar_t__ rm_owner; scalar_t__ rm_offset; scalar_t__ rm_blockcount; } ;
struct xfs_mount {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct xfs_mount*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_mount *VAR_4,
 uint64_t VAR_5,
 struct xfs_rmap_irec *VAR_6,
 xfs_filblks_t VAR_7,
 uint64_t VAR_8,
 uint64_t VAR_9,
 unsigned int VAR_10)
{
 int VAR_11 = 0;

 if (VAR_8 == VAR_1)
  return 0;


 FUNC_1(VAR_4, (VAR_10 & VAR_2) ==
   (VAR_6->rm_flags & VAR_2), VAR_3);


 FUNC_1(VAR_4, VAR_8 == VAR_6->rm_owner, VAR_3);


 if (FUNC_0(VAR_8))
  goto out;

 if (VAR_10 & VAR_0) {
  FUNC_1(VAR_4, VAR_6->rm_flags & VAR_0,
    VAR_3);
 } else {
  FUNC_1(VAR_4, VAR_6->rm_offset <= VAR_9, VAR_3);
  FUNC_1(VAR_4,
    VAR_5 + VAR_6->rm_blockcount >= VAR_9 + VAR_7,
    VAR_3);
 }

out:
 return VAR_11;
}

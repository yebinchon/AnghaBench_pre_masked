
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {int rm_flags; int rm_offset; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline int
FUNC_1(
 __u64 VAR_9,
 struct xfs_rmap_irec *VAR_10)
{
 if (VAR_9 & ~(VAR_6 | VAR_5))
  return -VAR_0;
 VAR_10->rm_offset = FUNC_0(VAR_9);
 VAR_10->rm_flags = 0;
 if (VAR_9 & VAR_3)
  VAR_10->rm_flags |= VAR_1;
 if (VAR_9 & VAR_4)
  VAR_10->rm_flags |= VAR_2;
 if (VAR_9 & VAR_7)
  VAR_10->rm_flags |= VAR_8;
 return 0;
}

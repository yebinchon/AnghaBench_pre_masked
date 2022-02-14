
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {int rm_flags; int rm_offset; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline __u64
FUNC_1(
 const struct xfs_rmap_irec *VAR_6)
{
 __u64 VAR_7;

 VAR_7 = FUNC_0(VAR_6->rm_offset);
 if (VAR_6->rm_flags & VAR_0)
  VAR_7 |= VAR_2;
 if (VAR_6->rm_flags & VAR_1)
  VAR_7 |= VAR_3;
 if (VAR_6->rm_flags & VAR_5)
  VAR_7 |= VAR_4;
 return VAR_7;
}

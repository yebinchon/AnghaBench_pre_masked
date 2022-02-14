
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_exntst_t ;
struct xfs_map_extent {int me_flags; } ;
typedef enum xfs_bmap_intent_type { ____Placeholder_xfs_bmap_intent_type } xfs_bmap_intent_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_map_extent *VAR_4,
 enum xfs_bmap_intent_type VAR_5,
 int VAR_6,
 xfs_exntst_t VAR_7)
{
 VAR_4->me_flags = 0;
 switch (VAR_5) {
 case 129:
 case 128:
  VAR_4->me_flags = VAR_5;
  break;
 default:
  FUNC_0(0);
 }
 if (VAR_7 == VAR_3)
  VAR_4->me_flags |= VAR_2;
 if (VAR_6 == VAR_0)
  VAR_4->me_flags |= VAR_1;
}

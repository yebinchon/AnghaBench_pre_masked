
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_exntst_t ;
struct xfs_map_extent {int me_flags; } ;
typedef enum xfs_rmap_intent_type { ____Placeholder_xfs_rmap_intent_type } xfs_rmap_intent_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






__attribute__((used)) static void
FUNC_1(
 struct xfs_map_extent *VAR_12,
 enum xfs_rmap_intent_type VAR_13,
 int VAR_14,
 xfs_exntst_t VAR_15)
{
 VAR_12->me_flags = 0;
 if (VAR_15 == VAR_1)
  VAR_12->me_flags |= VAR_11;
 if (VAR_14 == VAR_0)
  VAR_12->me_flags |= VAR_3;
 switch (VAR_13) {
 case 131:
  VAR_12->me_flags |= VAR_7;
  break;
 case 130:
  VAR_12->me_flags |= VAR_8;
  break;
 case 129:
  VAR_12->me_flags |= VAR_9;
  break;
 case 128:
  VAR_12->me_flags |= VAR_10;
  break;
 case 134:
  VAR_12->me_flags |= VAR_4;
  break;
 case 133:
  VAR_12->me_flags |= VAR_5;
  break;
 case 135:
  VAR_12->me_flags |= VAR_2;
  break;
 case 132:
  VAR_12->me_flags |= VAR_6;
  break;
 default:
  FUNC_0(0);
 }
}

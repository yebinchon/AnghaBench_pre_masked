
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_phys_extent {int pe_flags; } ;
typedef enum xfs_refcount_intent_type { ____Placeholder_xfs_refcount_intent_type } xfs_refcount_intent_type ;


 int FUNC_0 (int ) ;





__attribute__((used)) static void
FUNC_1(
 struct xfs_phys_extent *VAR_0,
 enum xfs_refcount_intent_type VAR_1)
{
 VAR_0->pe_flags = 0;
 switch (VAR_1) {
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_0->pe_flags |= VAR_1;
  break;
 default:
  FUNC_0(0);
 }
}

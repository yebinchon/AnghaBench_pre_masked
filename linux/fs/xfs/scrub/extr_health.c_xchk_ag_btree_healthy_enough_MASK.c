
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_btnum_t ;
struct xfs_scrub {TYPE_1__* sm; } ;
struct xfs_perag {int dummy; } ;
struct TYPE_2__ {int sm_flags; int sm_type; } ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ FUNC_1 (struct xfs_perag*,unsigned int) ;

bool
FUNC_2(
 struct xfs_scrub *VAR_13,
 struct xfs_perag *VAR_14,
 xfs_btnum_t VAR_15)
{
 unsigned int VAR_16 = 0;
 switch (VAR_15) {
 case 133:
  if (VAR_13->sm->sm_type == VAR_1)
   return 1;
  VAR_16 = VAR_7;
  break;
 case 132:
  if (VAR_13->sm->sm_type == VAR_2)
   return 1;
  VAR_16 = VAR_8;
  break;
 case 130:
  if (VAR_13->sm->sm_type == VAR_4)
   return 1;
  VAR_16 = VAR_10;
  break;
 case 131:
  if (VAR_13->sm->sm_type == VAR_3)
   return 1;
  VAR_16 = VAR_9;
  break;
 case 128:
  if (VAR_13->sm->sm_type == VAR_6)
   return 1;
  VAR_16 = VAR_12;
  break;
 case 129:
  if (VAR_13->sm->sm_type == VAR_5)
   return 1;
  VAR_16 = VAR_11;
  break;
 default:
  FUNC_0(0);
  return 1;
 }

 if (FUNC_1(VAR_14, VAR_16)) {
  VAR_13->sm->sm_flags |= VAR_0;
  return 0;
 }

 return 1;
}

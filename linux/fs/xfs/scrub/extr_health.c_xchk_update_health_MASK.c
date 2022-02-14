
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_scrub {int sick_mask; int mp; int ip; TYPE_1__* sm; } ;
struct xfs_perag {int dummy; } ;
struct TYPE_4__ {int group; } ;
struct TYPE_3__ {int sm_flags; size_t sm_type; int sm_agno; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct xfs_perag*,int ) ;
 int FUNC_2 (struct xfs_perag*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct xfs_perag* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct xfs_perag*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(
 struct xfs_scrub *VAR_2)
{
 struct xfs_perag *VAR_3;
 bool VAR_4;

 if (!VAR_2->sick_mask)
  return;

 VAR_4 = (VAR_2->sm->sm_flags & VAR_0);
 switch (VAR_1[VAR_2->sm->sm_type].group) {
 case 131:
  VAR_3 = FUNC_7(VAR_2->mp, VAR_2->sm->sm_agno);
  if (VAR_4)
   FUNC_2(VAR_3, VAR_2->sick_mask);
  else
   FUNC_1(VAR_3, VAR_2->sick_mask);
  FUNC_8(VAR_3);
  break;
 case 129:
  if (!VAR_2->ip)
   return;
  if (VAR_4)
   FUNC_6(VAR_2->ip, VAR_2->sick_mask);
  else
   FUNC_5(VAR_2->ip, VAR_2->sick_mask);
  break;
 case 130:
  if (VAR_4)
   FUNC_4(VAR_2->mp, VAR_2->sick_mask);
  else
   FUNC_3(VAR_2->mp, VAR_2->sick_mask);
  break;
 case 128:
  if (VAR_4)
   FUNC_10(VAR_2->mp, VAR_2->sick_mask);
  else
   FUNC_9(VAR_2->mp, VAR_2->sick_mask);
  break;
 default:
  FUNC_0(0);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vringh_kiov {int dummy; } ;
struct TYPE_2__ {int num; } ;
struct vringh {TYPE_1__ vring; int last_avail_idx; } ;
typedef int gfp_t ;


 int FUNC_0 (struct vringh*,int ,int *) ;
 int FUNC_1 (struct vringh*,int,struct vringh_kiov*,struct vringh_kiov*,int ,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct vringh *VAR_3,
   struct vringh_kiov *VAR_4,
   struct vringh_kiov *VAR_5,
   u16 *VAR_6,
   gfp_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_1, &VAR_3->last_avail_idx);
 if (VAR_8 < 0)
  return VAR_8;


 if (VAR_8 == VAR_3->vring.num)
  return 0;

 *VAR_6 = VAR_8;
 VAR_8 = FUNC_1(VAR_3, *VAR_6, VAR_4, VAR_5, VAR_2, ((void*)0),
      VAR_7, VAR_0);
 if (VAR_8)
  return VAR_8;

 return 1;
}

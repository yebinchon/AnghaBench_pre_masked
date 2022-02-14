
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct typec_altmode {TYPE_2__* ops; } ;
struct altmode {TYPE_1__* partner; } ;
struct TYPE_4__ {int (* vdm ) (struct typec_altmode*,int const,int const*,int) ;} ;
struct TYPE_3__ {struct typec_altmode adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct typec_altmode*,int const,int const*,int) ;
 struct altmode* FUNC_1 (struct typec_altmode*) ;

int FUNC_2(struct typec_altmode *VAR_2,
        const u32 VAR_3, const u32 *VAR_4, int VAR_5)
{
 struct typec_altmode *VAR_6;
 struct altmode *VAR_7;

 if (!VAR_2)
  return 0;

 VAR_7 = FUNC_1(VAR_2);

 if (!VAR_7->partner)
  return -VAR_0;

 VAR_6 = &VAR_7->partner->adev;

 if (!VAR_6->ops || !VAR_6->ops->vdm)
  return -VAR_1;

 return VAR_6->ops->vdm(VAR_6, VAR_3, VAR_4, VAR_5);
}

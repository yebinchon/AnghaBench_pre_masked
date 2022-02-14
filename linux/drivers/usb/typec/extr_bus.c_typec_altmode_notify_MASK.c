
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int parent; } ;
struct typec_altmode {TYPE_1__ dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct altmode {TYPE_3__ adev; int nh; struct altmode* partner; } ;
struct TYPE_5__ {int (* notify ) (TYPE_3__*,unsigned long,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,unsigned long,void*) ;
 struct altmode* FUNC_3 (struct typec_altmode*) ;
 int FUNC_4 (struct altmode*,int ) ;

int FUNC_5(struct typec_altmode *VAR_1,
    unsigned long VAR_2, void *VAR_3)
{
 bool VAR_4;
 struct altmode *VAR_5;
 struct altmode *VAR_6;
 int VAR_7;

 if (!VAR_1)
  return 0;

 VAR_5 = FUNC_3(VAR_1);

 if (!VAR_5->partner)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1->dev.parent);
 VAR_6 = VAR_5->partner;

 VAR_7 = FUNC_4(VAR_4 ? VAR_5 : VAR_6, (u8)VAR_2);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4 ? &VAR_5->nh : &VAR_6->nh,
         VAR_2, VAR_3);

 if (VAR_6->adev.ops && VAR_6->adev.ops->notify)
  return VAR_6->adev.ops->notify(&VAR_6->adev, VAR_2, VAR_3);

 return 0;
}

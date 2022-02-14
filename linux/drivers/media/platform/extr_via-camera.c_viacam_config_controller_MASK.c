
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_camera {int flags; TYPE_1__* viadev; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct via_camera*) ;
 int FUNC_4 (struct via_camera*) ;

__attribute__((used)) static int FUNC_5(struct via_camera *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->viadev->reg_lock, VAR_3);
 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  FUNC_4(VAR_1);
 FUNC_2(&VAR_1->viadev->reg_lock, VAR_3);
 FUNC_0(VAR_0, &VAR_1->flags);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct vimc_cap_device {TYPE_1__ vdev; int ved; int stream; } ;
struct vb2_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vimc_cap_device* FUNC_1 (struct vb2_queue*) ;
 int FUNC_2 (struct vimc_cap_device*,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_1)
{
 struct vimc_cap_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->stream, &VAR_2->ved, 0);


 FUNC_0(&VAR_2->vdev.entity);


 FUNC_2(VAR_2, VAR_0);
}

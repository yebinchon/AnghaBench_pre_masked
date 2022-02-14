
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {TYPE_2__* vdev; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int (* reset ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct virtnet_info*) ;
 int FUNC_1 (struct virtnet_info*) ;
 int FUNC_2 (struct virtnet_info*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct virtnet_info*) ;

__attribute__((used)) static void FUNC_5(struct virtnet_info *VAR_0)
{
 VAR_0->vdev->config->reset(VAR_0->vdev);


 FUNC_2(VAR_0);

 FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 FUNC_4(VAR_0);
}

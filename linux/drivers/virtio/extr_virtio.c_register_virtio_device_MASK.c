
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * bus; } ;
struct virtio_device {int index; int config_enabled; int config_change_pending; TYPE_2__ dev; int vqs; TYPE_1__* config; int config_lock; } ;
struct TYPE_5__ {int (* reset ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct virtio_device*) ;
 int FUNC_8 (struct virtio_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_9(struct virtio_device *VAR_5)
{
 int VAR_6;

 VAR_5->dev.bus = &VAR_3;
 FUNC_3(&VAR_5->dev);


 VAR_6 = FUNC_4(&VAR_4, 0, 0, VAR_0);
 if (VAR_6 < 0)
  goto out;

 VAR_5->index = VAR_6;
 FUNC_1(&VAR_5->dev, "virtio%u", VAR_5->index);

 FUNC_6(&VAR_5->config_lock);
 VAR_5->config_enabled = 0;
 VAR_5->config_change_pending = 0;



 VAR_5->config->reset(VAR_5);


 FUNC_8(VAR_5, VAR_1);

 FUNC_0(&VAR_5->vqs);





 VAR_6 = FUNC_2(&VAR_5->dev);
 if (VAR_6)
  FUNC_5(&VAR_4, VAR_5->index);
out:
 if (VAR_6)
  FUNC_8(VAR_5, VAR_2);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {int dev; TYPE_1__* config; } ;
struct TYPE_2__ {int (* finalize_features ) (struct virtio_device*) ;unsigned int (* get_status ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct virtio_device*) ;
 unsigned int FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (struct virtio_device*,unsigned int) ;
 int FUNC_5 (struct virtio_device*,int ) ;

int FUNC_6(struct virtio_device *VAR_3)
{
 int VAR_4 = VAR_3->config->finalize_features(VAR_3);
 unsigned VAR_5;

 FUNC_1();
 if (VAR_4)
  return VAR_4;

 if (!FUNC_5(VAR_3, VAR_2))
  return 0;

 FUNC_4(VAR_3, VAR_1);
 VAR_5 = VAR_3->config->get_status(VAR_3);
 if (!(VAR_5 & VAR_1)) {
  FUNC_0(&VAR_3->dev, "virtio: device refuses features: %x\n",
   VAR_5);
  return -VAR_0;
 }
 return 0;
}

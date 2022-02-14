
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_fs {int refcount; } ;
struct virtio_device {struct virtio_fs* priv; TYPE_1__* config; } ;
struct TYPE_2__ {int (* reset ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct virtio_fs*) ;
 int FUNC_1 (int *) ;
 struct virtio_fs* FUNC_2 (int,int ) ;
 int FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (struct virtio_device*) ;
 int FUNC_5 (struct virtio_fs*) ;
 int FUNC_6 (struct virtio_device*,struct virtio_fs*) ;
 int FUNC_7 (struct virtio_device*,struct virtio_fs*) ;
 int FUNC_8 (struct virtio_device*,struct virtio_fs*) ;

__attribute__((used)) static int FUNC_9(struct virtio_device *VAR_2)
{
 struct virtio_fs *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(&VAR_3->refcount);
 VAR_2->priv = VAR_3;

 VAR_4 = FUNC_7(VAR_2, VAR_3);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_8(VAR_2, VAR_3);
 if (VAR_4 < 0)
  goto out;






 FUNC_4(VAR_2);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0)
  goto out_vqs;

 return 0;

out_vqs:
 VAR_2->config->reset(VAR_2);
 FUNC_6(VAR_2, VAR_3);

out:
 VAR_2->priv = ((void*)0);
 FUNC_0(VAR_3);
 return VAR_4;
}

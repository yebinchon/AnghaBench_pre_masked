
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_fs {int list; } ;
struct virtio_device {struct virtio_fs* priv; TYPE_1__* config; } ;
struct TYPE_2__ {int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (struct virtio_device*,struct virtio_fs*) ;
 int FUNC_5 (struct virtio_fs*) ;
 int VAR_0 ;
 int FUNC_6 (struct virtio_fs*) ;
 int FUNC_7 (struct virtio_fs*) ;

__attribute__((used)) static void FUNC_8(struct virtio_device *VAR_1)
{
 struct virtio_fs *VAR_2 = VAR_1->priv;

 FUNC_1(&VAR_0);

 FUNC_0(&VAR_2->list);
 FUNC_7(VAR_2);
 FUNC_5(VAR_2);
 VAR_1->config->reset(VAR_1);
 FUNC_4(VAR_1, VAR_2);

 VAR_1->priv = ((void*)0);

 FUNC_6(VAR_2);
 FUNC_2(&VAR_0);
}

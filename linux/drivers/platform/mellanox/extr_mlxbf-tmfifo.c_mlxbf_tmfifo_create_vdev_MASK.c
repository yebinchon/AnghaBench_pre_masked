
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int release; struct device* parent; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_7__ {TYPE_4__ dev; int * config; TYPE_1__ id; } ;
struct TYPE_6__ {int buf; } ;
struct mlxbf_tmfifo_vdev {TYPE_3__ vdev; TYPE_2__ tx_buf; int config; int features; } ;
struct mlxbf_tmfifo {int lock; struct mlxbf_tmfifo_vdev** vdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int ,int ) ;
 int FUNC_2 (struct mlxbf_tmfifo_vdev*) ;
 struct mlxbf_tmfifo_vdev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,void*,int ) ;
 scalar_t__ FUNC_5 (struct mlxbf_tmfifo*,struct mlxbf_tmfifo_vdev*) ;
 int FUNC_6 (struct mlxbf_tmfifo*,struct mlxbf_tmfifo_vdev*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct device *VAR_7,
        struct mlxbf_tmfifo *VAR_8,
        int VAR_9, u64 VAR_10,
        void *VAR_11, u32 VAR_12)
{
 struct mlxbf_tmfifo_vdev *VAR_13, *VAR_14 = ((void*)0);
 int VAR_15;

 FUNC_7(&VAR_8->lock);

 VAR_13 = VAR_8->vdev[VAR_9];
 if (VAR_13) {
  FUNC_0(VAR_7, "vdev %d already exists\n", VAR_9);
  VAR_15 = -VAR_0;
  goto fail;
 }

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto fail;
 }

 VAR_13->vdev.id.device = VAR_9;
 VAR_13->vdev.config = &VAR_5;
 VAR_13->vdev.dev.parent = VAR_7;
 VAR_13->vdev.dev.release = VAR_6;
 VAR_13->features = VAR_10;
 if (VAR_11)
  FUNC_4(&VAR_13->config, VAR_11, VAR_12);

 if (FUNC_5(VAR_8, VAR_13)) {
  FUNC_0(VAR_7, "unable to allocate vring\n");
  VAR_15 = -VAR_1;
  goto vdev_fail;
 }


 if (VAR_9 == VAR_4)
  VAR_13->tx_buf.buf = FUNC_1(VAR_7,
         VAR_3,
         VAR_2);
 VAR_8->vdev[VAR_9] = VAR_13;


 VAR_15 = FUNC_10(&VAR_13->vdev);
 VAR_14 = VAR_13;
 if (VAR_15) {
  FUNC_0(VAR_7, "register_virtio_device failed\n");
  goto vdev_fail;
 }

 FUNC_8(&VAR_8->lock);
 return 0;

vdev_fail:
 FUNC_6(VAR_8, VAR_13);
 VAR_8->vdev[VAR_9] = ((void*)0);
 if (VAR_14)
  FUNC_9(&VAR_13->vdev.dev);
 else
  FUNC_2(VAR_13);
fail:
 FUNC_8(&VAR_8->lock);
 return VAR_15;
}

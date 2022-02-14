
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virtproc_info {int endpoints_lock; int endpoints; TYPE_1__* vdev; } ;
struct rpmsg_endpoint {int addr; int refcount; int * ops; void* priv; int cb; struct rpmsg_device* rpdev; int cb_lock; } ;
struct device {int dummy; } ;
struct rpmsg_device {struct device dev; } ;
typedef int rpmsg_rx_cb_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *,struct rpmsg_endpoint*,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct rpmsg_endpoint* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;

__attribute__((used)) static struct rpmsg_endpoint *FUNC_8(struct virtproc_info *VAR_5,
       struct rpmsg_device *VAR_6,
       rpmsg_rx_cb_t VAR_7,
       void *VAR_8, u32 VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct rpmsg_endpoint *VAR_13;
 struct device *VAR_14 = VAR_6 ? &VAR_6->dev : &VAR_5->vdev->dev;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_0);
 if (!VAR_13)
  return ((void*)0);

 FUNC_2(&VAR_13->refcount);
 FUNC_5(&VAR_13->cb_lock);

 VAR_13->rpdev = VAR_6;
 VAR_13->cb = VAR_7;
 VAR_13->priv = VAR_8;
 VAR_13->ops = &VAR_4;


 if (VAR_9 == VAR_1) {
  VAR_10 = VAR_2;
  VAR_11 = 0;
 } else {
  VAR_10 = VAR_9;
  VAR_11 = VAR_9 + 1;
 }

 FUNC_6(&VAR_5->endpoints_lock);


 VAR_12 = FUNC_1(&VAR_5->endpoints, VAR_13, VAR_10, VAR_11, VAR_0);
 if (VAR_12 < 0) {
  FUNC_0(VAR_14, "idr_alloc failed: %d\n", VAR_12);
  goto free_ept;
 }
 VAR_13->addr = VAR_12;

 FUNC_7(&VAR_5->endpoints_lock);

 return VAR_13;

free_ept:
 FUNC_7(&VAR_5->endpoints_lock);
 FUNC_3(&VAR_13->refcount, VAR_3);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfio_unbound_dev {int unbound_next; struct device* dev; } ;
struct vfio_group {int container; int container_q; int device_list; int unbound_lock; int unbound_list; } ;
struct vfio_device {TYPE_1__* ops; void* device_data; struct vfio_group* group; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int comm; } ;
struct TYPE_7__ {int release_q; } ;
struct TYPE_6__ {int (* request ) (void*,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 TYPE_3__* VAR_4 ;
 struct vfio_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int ,int ) ;
 struct vfio_unbound_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_14 (struct vfio_device*) ;
 int FUNC_15 (struct vfio_group*) ;
 struct vfio_device* FUNC_16 (struct vfio_group*,struct device*) ;
 int FUNC_17 (struct vfio_group*) ;
 int VAR_6 ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int *,int ,int) ;
 int VAR_7 ;

void *FUNC_20(struct device *VAR_8)
{
 FUNC_0(VAR_6, VAR_7);
 struct vfio_device *VAR_9 = FUNC_3(VAR_8);
 struct vfio_group *VAR_10 = VAR_9->group;
 void *VAR_11 = VAR_9->device_data;
 struct vfio_unbound_dev *VAR_12;
 unsigned int VAR_13 = 0;
 bool VAR_14 = 0;





 FUNC_15(VAR_10);
 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_0);
 if (VAR_12) {
  VAR_12->dev = VAR_8;
  FUNC_8(&VAR_10->unbound_lock);
  FUNC_6(&VAR_12->unbound_next, &VAR_10->unbound_list);
  FUNC_9(&VAR_10->unbound_lock);
 }
 FUNC_1(!VAR_12);

 FUNC_14(VAR_9);
 FUNC_2(&VAR_5.release_q, &VAR_6);

 do {
  VAR_9 = FUNC_16(VAR_10, VAR_8);
  if (!VAR_9)
   break;

  if (VAR_9->ops->request)
   VAR_9->ops->request(VAR_11, VAR_13++);

  FUNC_14(VAR_9);

  if (VAR_14) {
   FUNC_19(&VAR_6, VAR_3, VAR_1 * 10);
  } else {
   FUNC_19(&VAR_6, VAR_2, VAR_1 * 10);
   if (FUNC_11(VAR_4)) {
    VAR_14 = 1;
    FUNC_4(VAR_8,
      "Device is currently in use, task"
      " \"%s\" (%d) "
      "blocked until device is released",
      VAR_4->comm, FUNC_13(VAR_4));
   }
  }

 } while (1);

 FUNC_10(&VAR_5.release_q, &VAR_6);
 if (FUNC_7(&VAR_10->device_list))
  FUNC_18(VAR_10->container_q, !VAR_10->container);

 FUNC_17(VAR_10);

 return VAR_11;
}

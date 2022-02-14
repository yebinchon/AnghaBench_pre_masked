
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_balloon {TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct virtio_balloon*) ;
 int FUNC_2 (struct virtio_balloon*) ;
 int FUNC_3 (struct virtio_balloon*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct virtio_balloon *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->vdev->dev;


 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_4(VAR_1))
  FUNC_0(VAR_2, "Failed to send a start id, err = %d\n", VAR_1);

 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_4(VAR_1))
  FUNC_0(VAR_2, "Failed to send a free page, err = %d\n", VAR_1);


 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_4(VAR_1))
  FUNC_0(VAR_2, "Failed to send a stop id, err = %d\n", VAR_1);
}

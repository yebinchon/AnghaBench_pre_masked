
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct virtio_balloon {int cmd_id_active; int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_balloon*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct virtio_balloon*) ;

__attribute__((used)) static int FUNC_4(struct virtio_balloon *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 while (1) {




  VAR_3 = FUNC_2(VAR_1->vdev, VAR_1->cmd_id_active);
  if (FUNC_1(VAR_3 !=
        FUNC_3(VAR_1)))
   break;





  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 == -VAR_0)
   break;
  else if (FUNC_1(VAR_2))
   return VAR_2;
 }

 return 0;
}

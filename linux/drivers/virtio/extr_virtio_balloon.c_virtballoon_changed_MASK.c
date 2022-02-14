
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {struct virtio_balloon* priv; } ;
struct virtio_balloon {int stop_update_lock; int update_balloon_size_work; int stop_update; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_3 (struct virtio_balloon*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_1)
{
 struct virtio_balloon *VAR_2 = VAR_1->priv;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->stop_update_lock, VAR_3);
 if (!VAR_2->stop_update) {
  FUNC_0(VAR_0,
      &VAR_2->update_balloon_size_work);
  FUNC_3(VAR_2);
 }
 FUNC_2(&VAR_2->stop_update_lock, VAR_3);
}

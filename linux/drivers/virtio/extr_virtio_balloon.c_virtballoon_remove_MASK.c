
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {struct virtio_balloon* priv; } ;
struct TYPE_2__ {scalar_t__ inode; } ;
struct virtio_balloon {int stop_update; TYPE_1__ vb_dev_info; int balloon_wq; int report_free_page_work; int update_balloon_stats_work; int update_balloon_size_work; int stop_update_lock; struct virtio_device* vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct virtio_balloon*) ;
 int FUNC_5 (struct virtio_balloon*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct virtio_balloon*) ;
 scalar_t__ FUNC_9 (struct virtio_device*,int ) ;

__attribute__((used)) static void FUNC_10(struct virtio_device *VAR_3)
{
 struct virtio_balloon *VAR_4 = VAR_3->priv;

 if (FUNC_9(VAR_4->vdev, VAR_0))
  FUNC_8(VAR_4);
 FUNC_6(&VAR_4->stop_update_lock);
 VAR_4->stop_update = 1;
 FUNC_7(&VAR_4->stop_update_lock);
 FUNC_0(&VAR_4->update_balloon_size_work);
 FUNC_0(&VAR_4->update_balloon_stats_work);

 if (FUNC_9(VAR_3, VAR_1)) {
  FUNC_0(&VAR_4->report_free_page_work);
  FUNC_1(VAR_4->balloon_wq);
 }

 FUNC_5(VAR_4);






 FUNC_4(VAR_4);
}

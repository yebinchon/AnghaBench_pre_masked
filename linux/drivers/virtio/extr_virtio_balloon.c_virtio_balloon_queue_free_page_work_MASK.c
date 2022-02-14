
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {int report_free_page_work; int balloon_wq; int config_read_bitmap; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct virtio_balloon *VAR_2)
{
 if (!FUNC_2(VAR_2->vdev, VAR_1))
  return;


 if (FUNC_1(VAR_0,
        &VAR_2->config_read_bitmap))
  return;

 FUNC_0(VAR_2->balloon_wq, &VAR_2->report_free_page_work);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {int vdev; } ;
struct page {int dummy; } ;
typedef int __virtio32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct virtio_balloon *VAR_1,
     __virtio32 VAR_2[], struct page *VAR_3)
{
 unsigned int VAR_4;





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2[VAR_4] = FUNC_0(VAR_1->vdev,
       FUNC_1(VAR_3) + VAR_4);
}

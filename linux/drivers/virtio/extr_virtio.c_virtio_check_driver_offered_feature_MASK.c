
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_driver {unsigned int feature_table_size; unsigned int* feature_table; unsigned int* feature_table_legacy; unsigned int feature_table_size_legacy; } ;
struct TYPE_2__ {int driver; } ;
struct virtio_device {TYPE_1__ dev; } ;


 int FUNC_0 () ;
 struct virtio_driver* FUNC_1 (int ) ;

void FUNC_2(const struct virtio_device *VAR_0,
      unsigned int VAR_1)
{
 unsigned int VAR_2;
 struct virtio_driver *VAR_3 = FUNC_1(VAR_0->dev.driver);

 for (VAR_2 = 0; VAR_2 < VAR_3->feature_table_size; VAR_2++)
  if (VAR_3->feature_table[VAR_2] == VAR_1)
   return;

 if (VAR_3->feature_table_legacy) {
  for (VAR_2 = 0; VAR_2 < VAR_3->feature_table_size_legacy; VAR_2++)
   if (VAR_3->feature_table_legacy[VAR_2] == VAR_1)
    return;
 }

 FUNC_0();
}

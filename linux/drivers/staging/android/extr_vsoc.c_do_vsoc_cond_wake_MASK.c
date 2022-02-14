
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct vsoc_region_data {int futex_wait_queue; } ;
struct vsoc_device_region {scalar_t__ region_begin_offset; scalar_t__ region_end_offset; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vsoc_region_data* regions_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 struct vsoc_device_region* FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, uint32_t VAR_4)
{
 struct vsoc_device_region *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6 = FUNC_1(FUNC_0(VAR_3));
 struct vsoc_region_data *VAR_7 = VAR_2.regions_data + VAR_6;

 if (VAR_4 & (sizeof(uint32_t) - 1))
  return -VAR_1;

 if (((uint64_t)VAR_4) + VAR_5->region_begin_offset +
     sizeof(uint32_t) > VAR_5->region_end_offset)
  return -VAR_0;






 FUNC_3(&VAR_7->futex_wait_queue);
 return 0;
}

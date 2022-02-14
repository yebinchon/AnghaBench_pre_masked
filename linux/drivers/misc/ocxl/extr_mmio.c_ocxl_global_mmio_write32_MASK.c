
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int global_mmio_size; } ;
struct ocxl_afu {scalar_t__ global_mmio_ptr; TYPE_1__ config; } ;
typedef enum ocxl_endian { ____Placeholder_ocxl_endian } ocxl_endian ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct ocxl_afu *VAR_2, size_t VAR_3,
    enum ocxl_endian VAR_4, u32 VAR_5)
{
 if (VAR_3 > VAR_2->config.global_mmio_size - 4)
  return -VAR_0;






 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_5, (char *)VAR_2->global_mmio_ptr + VAR_3);
  break;

 default:
  FUNC_0(VAR_5, (char *)VAR_2->global_mmio_ptr + VAR_3);
  break;
 }


 return 0;
}

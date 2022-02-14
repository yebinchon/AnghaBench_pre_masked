
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {int indexed; int address; int scan_index; TYPE_1__ scan_type; void* info_mask_shared_by_type; void* info_mask_separate; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct iio_chan_spec *VAR_2, int VAR_3,
          int VAR_4)
{
 VAR_2->indexed = 1;
 VAR_2->info_mask_separate = FUNC_0(VAR_0);
 VAR_2->info_mask_shared_by_type = FUNC_0(VAR_1);
 VAR_2->address = VAR_3;
 VAR_2->scan_index = VAR_4;
 VAR_2->scan_type.sign = 'u';
 VAR_2->scan_type.realbits = 12;
 VAR_2->scan_type.storagebits = 32;
}

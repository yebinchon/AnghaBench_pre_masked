
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {int differential; int channel2; int indexed; int scan_index; TYPE_1__ scan_type; void* info_mask_shared_by_type; void* info_mask_separate; int address; scalar_t__ channel; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct iio_chan_spec *VAR_5,
           int VAR_6, int VAR_7)
{
 VAR_5->type = VAR_4;
 VAR_5->differential = 1;
 VAR_5->channel = 0;
 VAR_5->channel2 = VAR_7 * VAR_1;
 VAR_5->address = VAR_0;
 VAR_5->indexed = 1;
 VAR_5->info_mask_separate = FUNC_0(VAR_2);
 VAR_5->info_mask_shared_by_type = FUNC_0(VAR_3);
 VAR_5->scan_index = VAR_6;
 VAR_5->scan_type.sign = 'u';
 VAR_5->scan_type.realbits = 32;
 VAR_5->scan_type.storagebits = 32;
}

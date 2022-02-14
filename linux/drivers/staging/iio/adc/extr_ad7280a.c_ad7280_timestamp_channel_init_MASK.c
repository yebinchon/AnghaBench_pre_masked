
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {int channel; int scan_index; TYPE_1__ scan_type; int type; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct iio_chan_spec *VAR_1, int VAR_2)
{
 VAR_1->type = VAR_0;
 VAR_1->channel = -1;
 VAR_1->scan_index = VAR_2;
 VAR_1->scan_type.sign = 's';
 VAR_1->scan_type.realbits = 64;
 VAR_1->scan_type.storagebits = 64;
}

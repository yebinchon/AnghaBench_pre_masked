
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fman_mac {TYPE_1__* dtsec_drv_param; } ;
struct TYPE_2__ {int tx_pad_crc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct fman_mac *VAR_1, bool VAR_2)
{
 if (FUNC_0(VAR_1->dtsec_drv_param))
  return -VAR_0;

 VAR_1->dtsec_drv_param->tx_pad_crc = VAR_2;

 return 0;
}

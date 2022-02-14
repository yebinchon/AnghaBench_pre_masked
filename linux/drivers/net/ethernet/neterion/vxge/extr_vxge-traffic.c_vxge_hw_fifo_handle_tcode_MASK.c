
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __vxge_hw_fifo {TYPE_1__* stats; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
typedef enum vxge_hw_fifo_tcode { ____Placeholder_vxge_hw_fifo_tcode } vxge_hw_fifo_tcode ;
struct TYPE_2__ {int * txd_t_code_err_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;

enum vxge_hw_status FUNC_0(struct __vxge_hw_fifo *VAR_2,
           void *VAR_3,
           enum vxge_hw_fifo_tcode VAR_4)
{
 enum vxge_hw_status VAR_5 = VAR_1;

 if (((VAR_4 & 0x7) < 0) || ((VAR_4 & 0x7) > 0x4)) {
  VAR_5 = VAR_0;
  goto exit;
 }

 VAR_2->stats->txd_t_code_err_cnt[VAR_4]++;
exit:
 return VAR_5;
}

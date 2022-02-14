
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct __vxge_hw_ring {TYPE_1__* stats; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int * rxd_t_code_err_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

enum vxge_hw_status FUNC_0(
 struct __vxge_hw_ring *VAR_5, void *VAR_6, u8 VAR_7)
{
 enum vxge_hw_status VAR_8 = VAR_1;






 if (VAR_7 == VAR_4 ||
  VAR_7 == VAR_2) {
  VAR_8 = VAR_1;
  goto exit;
 }

 if (VAR_7 > VAR_3) {
  VAR_8 = VAR_0;
  goto exit;
 }

 VAR_5->stats->rxd_t_code_err_cnt[VAR_7]++;
exit:
 return VAR_8;
}

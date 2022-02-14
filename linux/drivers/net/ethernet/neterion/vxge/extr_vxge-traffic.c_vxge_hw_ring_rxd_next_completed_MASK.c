
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct vxge_hw_ring_rxd_1 {int control_0; scalar_t__ host_control; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_ring {TYPE_2__* stats; int cmpl_cnt; struct __vxge_hw_channel channel; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_3__ {scalar_t__ usage_cnt; scalar_t__ usage_max; } ;
struct TYPE_4__ {TYPE_1__ common_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct __vxge_hw_channel*) ;
 int FUNC_3 (struct __vxge_hw_channel*,void**) ;

enum vxge_hw_status FUNC_4(
 struct __vxge_hw_ring *VAR_5, void **VAR_6, u8 *VAR_7)
{
 struct __vxge_hw_channel *VAR_8;
 struct vxge_hw_ring_rxd_1 *VAR_9;
 enum vxge_hw_status VAR_10 = VAR_1;
 u64 VAR_11, VAR_12;

 VAR_8 = &VAR_5->channel;

 FUNC_3(VAR_8, VAR_6);

 VAR_9 = *VAR_6;
 if (VAR_9 == ((void*)0)) {
  VAR_10 = VAR_0;
  goto exit;
 }

 VAR_11 = VAR_9->control_0;
 VAR_12 = VAR_11 & VAR_2;
 *VAR_7 = (u8)FUNC_0(VAR_11);


 if (!VAR_12 || *VAR_7 == VAR_4) {

  FUNC_1((VAR_9)->host_control !=
    0);

  ++VAR_5->cmpl_cnt;
  FUNC_2(VAR_8);

  FUNC_1(*VAR_7 != VAR_3);

  VAR_5->stats->common_stats.usage_cnt++;
  if (VAR_5->stats->common_stats.usage_max <
    VAR_5->stats->common_stats.usage_cnt)
   VAR_5->stats->common_stats.usage_max =
    VAR_5->stats->common_stats.usage_cnt;

  VAR_10 = VAR_1;
  goto exit;
 }



 *VAR_6 = ((void*)0);
 VAR_10 = VAR_0;
exit:
 return VAR_10;
}

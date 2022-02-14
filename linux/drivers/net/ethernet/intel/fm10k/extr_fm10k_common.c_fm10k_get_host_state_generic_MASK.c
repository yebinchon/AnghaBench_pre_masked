
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* process ) (struct fm10k_hw*,struct fm10k_mbx_info*) ;} ;
struct fm10k_mbx_info {scalar_t__ state; int timeout; TYPE_1__ ops; } ;
struct TYPE_4__ {int (* request_lport_map ) (struct fm10k_hw*) ;} ;
struct fm10k_mac_info {int get_host_state; scalar_t__ dglort_map; TYPE_2__ ops; scalar_t__ tx_ready; } ;
struct fm10k_hw {struct fm10k_mac_info mac; struct fm10k_mbx_info mbx; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct fm10k_hw*,int ) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_3 (struct fm10k_hw*) ;

s32 FUNC_4(struct fm10k_hw *VAR_4, bool *VAR_5)
{
 struct fm10k_mbx_info *VAR_6 = &VAR_4->mbx;
 struct fm10k_mac_info *VAR_7 = &VAR_4->mac;
 s32 VAR_8 = 0;
 u32 VAR_9 = FUNC_1(VAR_4, FUNC_0(0));


 VAR_6->ops.process(VAR_4, VAR_6);


 if (!(~VAR_9) || !(VAR_9 & VAR_3))
  VAR_7->get_host_state = 1;


 if (!VAR_7->get_host_state || !(~VAR_9))
  goto out;


 if (VAR_7->tx_ready && !(VAR_9 & VAR_3)) {
  VAR_8 = VAR_1;
  goto out;
 }


 if (!VAR_6->timeout) {
  VAR_8 = VAR_1;
  goto out;
 }


 if (VAR_6->state != VAR_2)
  goto out;


 if (VAR_7->dglort_map == VAR_0) {
  if (VAR_7->ops.request_lport_map)
   VAR_8 = VAR_7->ops.request_lport_map(VAR_4);

  goto out;
 }




 VAR_7->get_host_state = 0;

out:
 *VAR_5 = !VAR_7->get_host_state;
 return VAR_8;
}

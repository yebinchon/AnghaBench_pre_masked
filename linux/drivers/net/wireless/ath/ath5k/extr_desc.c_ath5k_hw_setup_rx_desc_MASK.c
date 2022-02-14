
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_hw_rx_ctl {int rx_control_1; } ;
struct ath5k_hw_all_rx_desc {int dummy; } ;
struct ath5k_hw {int dummy; } ;
struct TYPE_4__ {struct ath5k_hw_rx_ctl rx_ctl; } ;
struct TYPE_3__ {TYPE_2__ ds_rx; } ;
struct ath5k_desc {TYPE_1__ ud; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(struct ath5k_hw *VAR_4,
   struct ath5k_desc *VAR_5,
   u32 VAR_6, unsigned int VAR_7)
{
 struct ath5k_hw_rx_ctl *VAR_8;

 VAR_8 = &VAR_5->ud.ds_rx.rx_ctl;
 FUNC_0(&VAR_5->ud.ds_rx, 0, sizeof(struct ath5k_hw_all_rx_desc));

 if (FUNC_1(VAR_6 & ~VAR_0))
  return -VAR_3;


 VAR_8->rx_control_1 = VAR_6 & VAR_0;

 if (VAR_7 & VAR_2)
  VAR_8->rx_control_1 |= VAR_1;

 return 0;
}

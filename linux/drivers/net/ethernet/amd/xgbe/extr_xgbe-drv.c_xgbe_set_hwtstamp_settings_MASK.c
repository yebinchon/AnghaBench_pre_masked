
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* config_tstamp ) (struct xgbe_prv_data*,unsigned int) ;} ;
struct xgbe_prv_data {int tstamp_config; TYPE_1__ hw_if; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (unsigned int,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct hwtstamp_config*,int ,int) ;
 int FUNC_2 (int *,struct hwtstamp_config*,int) ;
 int FUNC_3 (struct xgbe_prv_data*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_14,
          struct ifreq *VAR_15)
{
 struct hwtstamp_config VAR_16;
 unsigned int VAR_17;

 if (FUNC_1(&VAR_16, VAR_15->ifr_data, sizeof(VAR_16)))
  return -VAR_1;

 if (VAR_16.flags)
  return -VAR_2;

 VAR_17 = 0;

 switch (VAR_16.tx_type) {
 case 129:
  break;

 case 128:
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;

 default:
  return -VAR_3;
 }

 switch (VAR_16.rx_filter) {
 case 143:
  break;

 case 142:
 case 144:
  FUNC_0(VAR_17, VAR_4, VAR_7, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 132:
  FUNC_0(VAR_17, VAR_4, VAR_13, 1);

 case 140:
  FUNC_0(VAR_17, VAR_4, VAR_10, 1);
  FUNC_0(VAR_17, VAR_4, VAR_11, 1);
  FUNC_0(VAR_17, VAR_4, VAR_5, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 131:
  FUNC_0(VAR_17, VAR_4, VAR_13, 1);

 case 139:
  FUNC_0(VAR_17, VAR_4, VAR_10, 1);
  FUNC_0(VAR_17, VAR_4, VAR_11, 1);
  FUNC_0(VAR_17, VAR_4, VAR_8, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 133:
  FUNC_0(VAR_17, VAR_4, VAR_13, 1);

 case 141:
  FUNC_0(VAR_17, VAR_4, VAR_10, 1);
  FUNC_0(VAR_17, VAR_4, VAR_11, 1);
  FUNC_0(VAR_17, VAR_4, VAR_8, 1);
  FUNC_0(VAR_17, VAR_4, VAR_12, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 135:
  FUNC_0(VAR_17, VAR_4, VAR_0, 1);
  FUNC_0(VAR_17, VAR_4, VAR_5, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 134:
  FUNC_0(VAR_17, VAR_4, VAR_0, 1);
  FUNC_0(VAR_17, VAR_4, VAR_8, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 136:
  FUNC_0(VAR_17, VAR_4, VAR_0, 1);
  FUNC_0(VAR_17, VAR_4, VAR_12, 1);
  FUNC_0(VAR_17, VAR_4, VAR_8, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 137:
  FUNC_0(VAR_17, VAR_4, VAR_13, 1);
  FUNC_0(VAR_17, VAR_4, VAR_9, 1);
  FUNC_0(VAR_17, VAR_4, VAR_10, 1);
  FUNC_0(VAR_17, VAR_4, VAR_11, 1);
  FUNC_0(VAR_17, VAR_4, VAR_5, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 130:
  FUNC_0(VAR_17, VAR_4, VAR_13, 1);
  FUNC_0(VAR_17, VAR_4, VAR_9, 1);
  FUNC_0(VAR_17, VAR_4, VAR_10, 1);
  FUNC_0(VAR_17, VAR_4, VAR_11, 1);
  FUNC_0(VAR_17, VAR_4, VAR_8, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;


 case 138:
  FUNC_0(VAR_17, VAR_4, VAR_13, 1);
  FUNC_0(VAR_17, VAR_4, VAR_9, 1);
  FUNC_0(VAR_17, VAR_4, VAR_10, 1);
  FUNC_0(VAR_17, VAR_4, VAR_11, 1);
  FUNC_0(VAR_17, VAR_4, VAR_12, 1);
  FUNC_0(VAR_17, VAR_4, VAR_8, 1);
  FUNC_0(VAR_17, VAR_4, VAR_6, 1);
  break;

 default:
  return -VAR_3;
 }

 VAR_14->hw_if.config_tstamp(VAR_14, VAR_17);

 FUNC_2(&VAR_14->tstamp_config, &VAR_16, sizeof(VAR_16));

 return 0;
}

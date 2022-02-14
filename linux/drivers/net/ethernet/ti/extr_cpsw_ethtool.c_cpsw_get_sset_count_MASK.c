
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cpsw_common {int rx_ch_num; int tx_ch_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct cpsw_common* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_3, int VAR_4)
{
 struct cpsw_common *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 128:
  return (VAR_1 +
         (VAR_5->rx_ch_num + VAR_5->tx_ch_num) *
         VAR_0);
 default:
  return -VAR_2;
 }
}

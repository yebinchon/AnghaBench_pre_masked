
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_knic_private_info {unsigned int rss_size; unsigned int num_tc; TYPE_1__* tc_info; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct TYPE_2__ {int tqp_offset; int tqp_count; int tc; int enable; } ;


 int VAR_0 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,unsigned int) ;
 int FUNC_6 (struct net_device*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct hnae3_handle *VAR_2 = FUNC_0(VAR_1);
 struct hnae3_knic_private_info *VAR_3 = &VAR_2->kinfo;
 unsigned int VAR_4 = VAR_3->rss_size * VAR_3->num_tc;
 int VAR_5, VAR_6;

 if (VAR_3->num_tc <= 1) {
  FUNC_2(VAR_1);
 } else {
  VAR_6 = FUNC_3(VAR_1, VAR_3->num_tc);
  if (VAR_6) {
   FUNC_1(VAR_1,
       "netdev_set_num_tc fail, ret=%d!\n", VAR_6);
   return VAR_6;
  }

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!VAR_3->tc_info[VAR_5].enable)
    continue;

   FUNC_4(VAR_1,
         VAR_3->tc_info[VAR_5].tc,
         VAR_3->tc_info[VAR_5].tqp_count,
         VAR_3->tc_info[VAR_5].tqp_offset);
  }
 }

 VAR_6 = FUNC_6(VAR_1, VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_1,
      "netif_set_real_num_tx_queues fail, ret=%d!\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_1, VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_1,
      "netif_set_real_num_rx_queues fail, ret=%d!\n", VAR_6);
  return VAR_6;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int stats; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_stats ) (struct hnae3_handle*,int *) ;int (* update_stats ) (struct hnae3_handle*,int *) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int * FUNC_1 (struct hnae3_handle*,int *) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct hnae3_handle*,int *) ;
 int FUNC_5 (struct hnae3_handle*,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
      struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_0);
 u64 *VAR_4 = VAR_2;

 if (FUNC_2(VAR_0)) {
  FUNC_3(VAR_0, "dev resetting, could not get stats\n");
  return;
 }

 if (!VAR_3->ae_algo->ops->get_stats || !VAR_3->ae_algo->ops->update_stats) {
  FUNC_3(VAR_0, "could not get any statistics\n");
  return;
 }

 VAR_3->ae_algo->ops->update_stats(VAR_3, &VAR_0->stats);


 VAR_4 = FUNC_1(VAR_3, VAR_4);


 VAR_3->ae_algo->ops->get_stats(VAR_3, VAR_4);
}

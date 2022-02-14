
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ksz_port {int first_port; int mib_port_cnt; } ;
struct ksz_hw {int mib_cnt; TYPE_1__* port_mib; } ;
struct ethtool_stats {int n_stats; } ;
struct dev_priv {struct ksz_port port; struct dev_info* adapter; } ;
struct dev_info {TYPE_2__* counter; int mib_read; int lock; struct ksz_hw hw; } ;
struct TYPE_4__ {int read; int counter; } ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ cnt_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*,int,int,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4,
 struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct dev_priv *VAR_7 = FUNC_3(VAR_4);
 struct dev_info *VAR_8 = VAR_7->adapter;
 struct ksz_hw *VAR_9 = &VAR_8->hw;
 struct ksz_port *VAR_10 = &VAR_7->port;
 int VAR_11 = VAR_5->n_stats;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 u64 VAR_16[VAR_2];

 FUNC_1(&VAR_8->lock);
 VAR_13 = VAR_1;
 for (VAR_12 = 0, VAR_14 = VAR_10->first_port; VAR_12 < VAR_10->mib_port_cnt; VAR_12++, VAR_14++) {
  if (VAR_3 == VAR_9->port_mib[VAR_14].state) {
   VAR_8->counter[VAR_14].read = 1;


   if (VAR_13 == VAR_1)
    VAR_13 = VAR_14;
  }
 }
 FUNC_2(&VAR_8->lock);

 if (VAR_13 < VAR_1)
  FUNC_4(&VAR_8->mib_read);

 if (1 == VAR_10->mib_port_cnt && VAR_13 < VAR_1) {
  VAR_14 = VAR_13;
  VAR_15 = FUNC_5(
   VAR_8->counter[VAR_14].counter,
   2 == VAR_8->counter[VAR_14].read,
   VAR_0 * 1);
 } else
  for (VAR_12 = 0, VAR_14 = VAR_13; VAR_12 < VAR_10->mib_port_cnt - VAR_13; VAR_12++, VAR_14++) {
   if (0 == VAR_12) {
    VAR_15 = FUNC_5(
     VAR_8->counter[VAR_14].counter,
     2 == VAR_8->counter[VAR_14].read,
     VAR_0 * 2);
   } else if (VAR_9->port_mib[VAR_14].cnt_ptr) {
    VAR_15 = FUNC_5(
     VAR_8->counter[VAR_14].counter,
     2 == VAR_8->counter[VAR_14].read,
     VAR_0 * 1);
   }
  }

 FUNC_0(VAR_9, VAR_10->first_port, VAR_10->mib_port_cnt, VAR_16);
 VAR_13 = VAR_9->mib_cnt;
 if (VAR_13 > VAR_11)
  VAR_13 = VAR_11;
 VAR_11 -= VAR_13;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  *VAR_6++ = VAR_16[VAR_12];
}

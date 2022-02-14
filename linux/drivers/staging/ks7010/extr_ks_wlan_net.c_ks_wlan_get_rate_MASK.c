
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int fixed; } ;
union iwreq_data {TYPE_2__ bitrate; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ tx_rate; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int current_rate; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (struct net_device*,char*,int ,int ) ;
 struct ks_wlan_private* FUNC_4 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_4(VAR_5);

 FUNC_3(VAR_5, "in_interrupt = %ld update_phyinfo = %d\n",
     FUNC_1(), FUNC_0(&VAR_4));

 if (VAR_9->sleep_mode == VAR_2)
  return -VAR_0;


 if (!FUNC_0(&VAR_4))
  FUNC_2(VAR_9);

 VAR_7->bitrate.value = ((VAR_9->current_rate) & VAR_1) * 500000;
 VAR_7->bitrate.fixed = (VAR_9->reg.tx_rate == VAR_3) ? 1 : 0;

 return 0;
}

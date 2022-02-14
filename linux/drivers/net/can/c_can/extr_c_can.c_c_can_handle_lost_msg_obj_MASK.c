
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_over_errors; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int * data; int can_id; } ;
struct c_can_priv {int (* write_reg ) (struct c_can_priv*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (struct net_device*,struct can_frame**) ;
 int FUNC_2 (struct net_device*,int,int,int ) ;
 struct c_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct c_can_priv*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7,
         int VAR_8, int VAR_9, u32 VAR_10)
{
 struct net_device_stats *VAR_11 = &VAR_7->stats;
 struct c_can_priv *VAR_12 = FUNC_3(VAR_7);
 struct can_frame *VAR_13;
 struct sk_buff *VAR_14;

 VAR_10 &= ~(VAR_4 | VAR_3 | VAR_5);
 VAR_12->write_reg(VAR_12, FUNC_0(VAR_6, VAR_8), VAR_10);
 FUNC_2(VAR_7, VAR_8, VAR_9, VAR_2);

 VAR_11->rx_errors++;
 VAR_11->rx_over_errors++;


 VAR_14 = FUNC_1(VAR_7, &VAR_13);
 if (FUNC_6(!VAR_14))
  return 0;

 VAR_13->can_id |= VAR_0;
 VAR_13->data[1] = VAR_1;

 FUNC_4(VAR_14);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ehea_swqe {int tx_control; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,struct ehea_swqe*,int ) ;
 int FUNC_1 (struct sk_buff*,struct ehea_swqe*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2,
         struct ehea_swqe *VAR_3, u32 VAR_4)
{
 VAR_3->tx_control |= VAR_0;

 FUNC_1(VAR_1, VAR_3);

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}

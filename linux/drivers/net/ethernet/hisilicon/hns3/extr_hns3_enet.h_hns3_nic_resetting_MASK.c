
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hns3_nic_priv {int state; } ;


 int VAR_0 ;
 struct hns3_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct net_device *VAR_1)
{
 struct hns3_nic_priv *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, &VAR_2->state);
}

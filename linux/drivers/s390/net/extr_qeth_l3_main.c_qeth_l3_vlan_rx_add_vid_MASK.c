
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qeth_card {int active_vlans; } ;
struct net_device {struct qeth_card* ml_priv; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
       __be16 VAR_1, u16 VAR_2)
{
 struct qeth_card *VAR_3 = VAR_0->ml_priv;

 FUNC_0(VAR_2, VAR_3->active_vlans);
 return 0;
}

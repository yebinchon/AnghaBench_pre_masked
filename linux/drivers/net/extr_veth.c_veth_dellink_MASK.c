
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {int peer; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 struct veth_priv* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct list_head*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct veth_priv *VAR_2;
 struct net_device *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_2->peer);





 FUNC_0(VAR_2->peer, ((void*)0));
 FUNC_3(VAR_0, VAR_1);

 if (VAR_3) {
  VAR_2 = FUNC_1(VAR_3);
  FUNC_0(VAR_2->peer, ((void*)0));
  FUNC_3(VAR_3, VAR_1);
 }
}

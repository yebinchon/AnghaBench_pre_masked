
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int vf_netdev; int vf_takeover; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 struct net_device_context* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct net_device *VAR_3;
 struct net_device_context *VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return VAR_0;

 VAR_4 = FUNC_5(VAR_3);
 FUNC_1(&VAR_4->vf_takeover);

 FUNC_4(VAR_3, "VF unregistering: %s\n", VAR_2->name);

 FUNC_6(VAR_2);
 FUNC_7(VAR_2, VAR_3);
 FUNC_0(VAR_4->vf_netdev, ((void*)0));
 FUNC_2(VAR_2);

 return VAR_1;
}

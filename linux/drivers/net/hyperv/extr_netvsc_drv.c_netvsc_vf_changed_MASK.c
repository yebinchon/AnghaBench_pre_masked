
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int dummy; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,char*,int ) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 struct netvsc_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct net_device_context *VAR_3;
 struct netvsc_device *VAR_4;
 struct net_device *VAR_5;
 bool VAR_6 = FUNC_3(VAR_2);

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5)
  return VAR_0;

 VAR_3 = FUNC_2(VAR_5);
 VAR_4 = FUNC_5(VAR_3->nvdev);
 if (!VAR_4)
  return VAR_0;

 FUNC_4(VAR_5, VAR_6);
 FUNC_1(VAR_5, "Data path switched %s VF: %s\n",
      VAR_6 ? "to" : "from", VAR_2->name);

 return VAR_1;
}

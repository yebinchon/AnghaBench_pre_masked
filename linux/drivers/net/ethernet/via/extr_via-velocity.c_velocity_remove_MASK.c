
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int mac_regs; int napi; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct velocity_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_1);
 struct velocity_info *VAR_3 = FUNC_3(VAR_2);

 FUNC_5(VAR_2);
 FUNC_4(&VAR_3->napi);
 FUNC_2(VAR_3->mac_regs);
 FUNC_1(VAR_2);
 VAR_0--;

 return 0;
}

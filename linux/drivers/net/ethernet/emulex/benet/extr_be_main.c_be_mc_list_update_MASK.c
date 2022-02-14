
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {int update_mc_list; } ;


 struct be_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
        const unsigned char *VAR_1)
{
 struct be_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_2->update_mc_list = 1;
 return 0;
}

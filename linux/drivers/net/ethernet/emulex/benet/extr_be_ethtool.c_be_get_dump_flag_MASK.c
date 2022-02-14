
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_dump {int version; int flag; int len; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int ) ;
 struct be_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2, struct ethtool_dump *VAR_3)
{
 struct be_adapter *VAR_4 = FUNC_2(VAR_2);

 if (!FUNC_1(VAR_4, VAR_1))
  return -VAR_0;

 VAR_3->len = FUNC_0(VAR_4);
 VAR_3->version = 1;
 VAR_3->flag = 0x1;
 return 0;
}

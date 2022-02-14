
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_dump {int len; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct be_adapter*,int ,void*) ;
 int FUNC_2 (struct be_adapter*,int ) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, struct ethtool_dump *VAR_3,
   void *VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (!FUNC_2(VAR_5, VAR_1))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_3->len, VAR_4);
 return FUNC_0(VAR_6);
}

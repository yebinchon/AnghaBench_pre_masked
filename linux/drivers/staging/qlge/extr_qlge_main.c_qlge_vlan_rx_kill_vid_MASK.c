
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ql_adapter {int active_vlans; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct ql_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct ql_adapter *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_3, VAR_4->active_vlans);

 FUNC_4(VAR_4, VAR_0);

 return VAR_6;
}

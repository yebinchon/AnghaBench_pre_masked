
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int ) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*,int ) ;
 struct be_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_4(VAR_4);

 if (!FUNC_1(VAR_5, VAR_3))
  return 0;

 if (FUNC_2(VAR_5)) {
  if (FUNC_0(VAR_5))
   return FUNC_3(VAR_5,
             VAR_1);
  else
   return FUNC_3(VAR_5,
             VAR_2);
 } else {
  return VAR_0;
 }
}

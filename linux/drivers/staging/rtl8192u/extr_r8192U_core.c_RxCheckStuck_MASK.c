
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int IrpPendingCount; } ;
struct net_device {int dummy; } ;
typedef int RESET_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static RESET_TYPE FUNC_3(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_2(VAR_3);
 bool VAR_5 = 0;

 if (VAR_4->IrpPendingCount > 1)
  VAR_5 = 1;

 if (VAR_5) {
  if (FUNC_0(VAR_3)) {
   FUNC_1(VAR_0, "RxStuck Condition\n");
   return VAR_2;
  }
 }
 return VAR_1;
}

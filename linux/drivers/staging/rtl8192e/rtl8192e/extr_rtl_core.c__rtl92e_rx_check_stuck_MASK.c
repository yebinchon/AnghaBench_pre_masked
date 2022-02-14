
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_2__ {scalar_t__ (* RxCheckStuckHandler ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static enum reset_type FUNC_3(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->ops->RxCheckStuckHandler(VAR_3)) {
  FUNC_0(VAR_0, "RxStuck Condition\n");
  return VAR_2;
 }

 return VAR_1;
}

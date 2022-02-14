
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct olpc_ec_priv {int suspended; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* resume ) (struct platform_device*) ;} ;


 TYPE_1__* VAR_0 ;
 struct olpc_ec_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_1);
 struct olpc_ec_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->suspended = 0;
 return VAR_0->resume ? VAR_0->resume(VAR_2) : 0;
}

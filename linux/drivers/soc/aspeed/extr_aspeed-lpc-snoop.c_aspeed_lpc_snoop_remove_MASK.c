
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct aspeed_lpc_snoop {int dummy; } ;


 int FUNC_0 (struct aspeed_lpc_snoop*,int) ;
 struct aspeed_lpc_snoop* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct aspeed_lpc_snoop *VAR_1 = FUNC_1(&VAR_0->dev);


 FUNC_0(VAR_1, 0);
 FUNC_0(VAR_1, 1);

 return 0;
}

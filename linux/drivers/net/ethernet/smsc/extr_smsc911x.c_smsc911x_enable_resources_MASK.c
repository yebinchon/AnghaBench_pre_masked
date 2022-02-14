
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int clk; int supplies; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct smsc911x_data* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct smsc911x_data *VAR_2 = FUNC_4(VAR_1);
 int VAR_3 = 0;

 VAR_3 = FUNC_6(FUNC_0(VAR_2->supplies),
   VAR_2->supplies);
 if (VAR_3)
  FUNC_3(VAR_1, "failed to enable regulators %d\n",
    VAR_3);

 if (!FUNC_1(VAR_2->clk)) {
  VAR_3 = FUNC_2(VAR_2->clk);
  if (VAR_3 < 0)
   FUNC_3(VAR_1, "failed to enable clock %d\n", VAR_3);
 }

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct clk {int dummy; } ;


 long FUNC_0 (long,long) ;



 long FUNC_1 (long) ;
 long FUNC_2 (struct clk*,long) ;
 scalar_t__ FUNC_3 (struct clk*,long) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*,char*,long) ;

__attribute__((used)) static void FUNC_6(struct clk *VAR_0, int VAR_1, struct net_device *VAR_2)
{
 long VAR_3, VAR_4, VAR_5;

 if (!VAR_0)
  return;

 switch (VAR_1) {
 case 130:
  VAR_4 = 2500000;
  break;
 case 129:
  VAR_4 = 25000000;
  break;
 case 128:
  VAR_4 = 125000000;
  break;
 default:
  return;
 }

 VAR_5 = FUNC_2(VAR_0, VAR_4);
 if (VAR_5 < 0)
  return;




 VAR_3 = FUNC_1(VAR_5 - VAR_4);
 VAR_3 = FUNC_0(VAR_3, VAR_4 / 100000);
 if (VAR_3 > 5)
  FUNC_5(VAR_2, "unable to generate target frequency: %ld Hz\n",
       VAR_4);

 if (FUNC_3(VAR_0, VAR_5))
  FUNC_4(VAR_2, "adjusting tx_clk failed.\n");
}

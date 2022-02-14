
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nb8800_priv {int clk; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nb8800_priv*,int ,int) ;
 int FUNC_3 (struct nb8800_priv*,int ,int) ;
 struct nb8800_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct nb8800_priv *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 FUNC_2(VAR_4, VAR_2, 0);
 FUNC_5(1000, 10000);
 FUNC_2(VAR_4, VAR_2, 1);

 FUNC_6();

 VAR_5 = FUNC_0(FUNC_1(VAR_4->clk), 2 * VAR_0);
 FUNC_3(VAR_4, VAR_1, VAR_5);

 return 0;
}

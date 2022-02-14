
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nb8800_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct nb8800_priv*,int ,int ,int) ;
 int FUNC_2 (struct nb8800_priv*,int ) ;
 struct nb8800_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4, bool VAR_5)
{
 struct nb8800_priv *VAR_6 = FUNC_3(VAR_4);

 while (FUNC_2(VAR_6, VAR_0) & VAR_2)
  FUNC_0();

 FUNC_1(VAR_6, VAR_1, VAR_3, VAR_5);
}

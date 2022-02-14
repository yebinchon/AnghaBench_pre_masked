
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_hw {int duplex; int link_speed; } ;
struct alx_priv {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*,int,int) ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (struct alx_priv*) ;
 int FUNC_3 (struct alx_priv*) ;
 int FUNC_4 (struct alx_hw*) ;

__attribute__((used)) static void FUNC_5(struct alx_priv *VAR_2)
{
 struct alx_hw *VAR_3 = &VAR_2->hw;

 FUNC_3(VAR_2);
 VAR_3->link_speed = VAR_1;
 VAR_3->duplex = VAR_0;

 FUNC_4(VAR_3);


 FUNC_0(VAR_3, 0, 0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}

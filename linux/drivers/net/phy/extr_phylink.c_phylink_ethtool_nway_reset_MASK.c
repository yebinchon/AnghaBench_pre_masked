
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {scalar_t__ phydev; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct phylink*) ;

int FUNC_3(struct phylink *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0();

 if (VAR_0->phydev)
  VAR_1 = FUNC_1(VAR_0->phydev);
 FUNC_2(VAR_0);

 return VAR_1;
}

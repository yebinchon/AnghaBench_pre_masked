
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbus_priv {scalar_t__ core; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hwbus_priv*) ;
 int FUNC_2 (struct hwbus_priv*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct hwbus_priv *VAR_4 = VAR_3;

 if (VAR_4->core) {
  FUNC_1(VAR_4);
  FUNC_0(VAR_4->core);
  FUNC_2(VAR_4);
  return VAR_0;
 } else {
  return VAR_1;
 }
}

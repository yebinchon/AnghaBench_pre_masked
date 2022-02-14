
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,struct regulator*) ;

void FUNC_2(struct regulator *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev, VAR_1,
       VAR_0, VAR_2);
 if (VAR_3 != 0)
  FUNC_0(VAR_3);
}

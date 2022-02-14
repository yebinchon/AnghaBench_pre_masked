
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {scalar_t__ i2c; scalar_t__ i2c_mii; int timeout; int poll; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sfp*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct sfp *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->poll);
 FUNC_0(&VAR_1->timeout);
 if (VAR_1->i2c_mii) {
  FUNC_4(VAR_1->i2c_mii);
  FUNC_3(VAR_1->i2c_mii);
 }
 if (VAR_1->i2c)
  FUNC_1(VAR_1->i2c);
 FUNC_2(VAR_1);
}

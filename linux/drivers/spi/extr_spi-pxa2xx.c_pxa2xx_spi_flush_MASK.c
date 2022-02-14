
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct driver_data*,int ) ;
 int FUNC_1 (struct driver_data*,int ) ;

int FUNC_2(struct driver_data *VAR_6)
{
 unsigned long VAR_7 = VAR_5 << 1;

 do {
  while (FUNC_0(VAR_6, VAR_1) & VAR_3)
   FUNC_0(VAR_6, VAR_0);
 } while ((FUNC_0(VAR_6, VAR_1) & VAR_2) && --VAR_7);
 FUNC_1(VAR_6, VAR_4);

 return VAR_7;
}

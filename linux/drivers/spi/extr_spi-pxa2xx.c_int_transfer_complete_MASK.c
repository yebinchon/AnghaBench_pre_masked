
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {int controller; int clear_sr; } ;


 int VAR_0 ;
 int FUNC_0 (struct driver_data*) ;
 int FUNC_1 (struct driver_data*,int ,int ) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct driver_data *VAR_1)
{

 FUNC_4(VAR_1, VAR_1->clear_sr);
 FUNC_2(VAR_1);
 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_1, VAR_0, 0);

 FUNC_3(VAR_1->controller);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {scalar_t__ automode; int model; int charger; int work; scalar_t__ autotimer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bq2415x_device *VAR_0)
{
 VAR_0->autotimer = 0;
 if (VAR_0->automode > 0)
  VAR_0->automode = 0;
 FUNC_0(&VAR_0->work);
 FUNC_2(VAR_0->charger);
 FUNC_1(VAR_0->model);
}

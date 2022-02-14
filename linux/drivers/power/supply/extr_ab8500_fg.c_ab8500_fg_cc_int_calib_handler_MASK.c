
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {int fg_periodic_work; int fg_wq; int calib_state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct ab8500_fg *VAR_4 = VAR_3;
 VAR_4->calib_state = VAR_0;
 FUNC_0(VAR_4->fg_wq, &VAR_4->fg_periodic_work, 0);
 return VAR_1;
}

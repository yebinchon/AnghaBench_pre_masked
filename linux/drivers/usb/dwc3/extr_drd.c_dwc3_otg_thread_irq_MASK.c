
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int lock; scalar_t__ otg_restart_host; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (struct dwc3*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct dwc3 *VAR_4 = VAR_3;

 FUNC_2(&VAR_4->lock);
 if (VAR_4->otg_restart_host) {
  FUNC_0(VAR_4);
  VAR_4->otg_restart_host = 0;
 }

 FUNC_3(&VAR_4->lock);

 FUNC_1(VAR_4, VAR_0);

 return VAR_1;
}

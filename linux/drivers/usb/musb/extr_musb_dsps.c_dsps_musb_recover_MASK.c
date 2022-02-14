
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {struct device* controller; } ;
struct dsps_glue {scalar_t__ sw_babble_enabled; } ;
struct device {int parent; } ;


 int VAR_0 ;
 struct dsps_glue* FUNC_0 (int ) ;
 int FUNC_1 (struct musb*) ;

__attribute__((used)) static int FUNC_2(struct musb *VAR_1)
{
 struct device *VAR_2 = VAR_1->controller;
 struct dsps_glue *VAR_3 = FUNC_0(VAR_2->parent);
 int VAR_4 = 0;

 if (VAR_3->sw_babble_enabled)
  VAR_4 = FUNC_1(VAR_1);
 else
  VAR_4 = 1;

 return VAR_4 ? 0 : -VAR_0;
}

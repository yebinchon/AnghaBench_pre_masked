
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap2430_glue {scalar_t__ status; int control_otghs; } ;
struct musb {struct device* controller; } ;
struct device {int parent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct omap2430_glue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct musb *VAR_2)
{
 struct device *VAR_3 = VAR_2->controller;
 struct omap2430_glue *VAR_4 = FUNC_0(VAR_3->parent);

 if (VAR_4->status != VAR_0)
  FUNC_1(VAR_4->control_otghs,
   VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap2430_glue {int omap_musb_mailbox_work; } ;
struct musb {int * phy; struct device* controller; } ;
struct device {int parent; } ;


 int FUNC_0 (int *) ;
 struct omap2430_glue* FUNC_1 (int ) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct musb *VAR_0)
{
 struct device *VAR_1 = VAR_0->controller;
 struct omap2430_glue *VAR_2 = FUNC_1(VAR_1->parent);

 FUNC_2(VAR_0);
 FUNC_4(VAR_0->phy);
 FUNC_3(VAR_0->phy);
 VAR_0->phy = ((void*)0);
 FUNC_0(&VAR_2->omap_musb_mailbox_work);

 return 0;
}

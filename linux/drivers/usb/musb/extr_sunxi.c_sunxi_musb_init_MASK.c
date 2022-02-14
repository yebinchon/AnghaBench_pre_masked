
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_glue {int flags; int clk; int rst; int phy; int host_nb; int extcon; int dev; int xceiv; } ;
struct musb {TYPE_1__* controller; int isr; scalar_t__ mregs; int xceiv; int phy; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sunxi_glue* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct musb* VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct musb *VAR_7)
{
 struct sunxi_glue *VAR_8 = FUNC_2(VAR_7->controller->parent);
 int VAR_9;

 VAR_5 = VAR_7;
 VAR_7->phy = VAR_8->phy;
 VAR_7->xceiv = VAR_8->xceiv;

 if (FUNC_10(VAR_2, &VAR_8->flags)) {
  VAR_9 = FUNC_8(VAR_7->controller->parent);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_8->clk);
 if (VAR_9)
  goto error_sram_release;

 if (FUNC_10(VAR_1, &VAR_8->flags)) {
  VAR_9 = FUNC_7(VAR_8->rst);
  if (VAR_9)
   goto error_clk_disable;
 }

 FUNC_11(VAR_4, VAR_7->mregs + VAR_3);


 VAR_9 = FUNC_3(VAR_8->dev, VAR_8->extcon,
     VAR_0, &VAR_8->host_nb);
 if (VAR_9)
  goto error_reset_assert;

 VAR_9 = FUNC_4(VAR_8->phy);
 if (VAR_9)
  goto error_reset_assert;

 VAR_7->isr = VAR_6;


 FUNC_5(VAR_7->controller);

 return 0;

error_reset_assert:
 if (FUNC_10(VAR_1, &VAR_8->flags))
  FUNC_6(VAR_8->rst);
error_clk_disable:
 FUNC_0(VAR_8->clk);
error_sram_release:
 if (FUNC_10(VAR_2, &VAR_8->flags))
  FUNC_9(VAR_7->controller->parent);
 return VAR_9;
}

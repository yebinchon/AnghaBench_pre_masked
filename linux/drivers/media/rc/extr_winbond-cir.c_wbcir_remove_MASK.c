
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {scalar_t__ sbase; scalar_t__ ebase; scalar_t__ wbase; int led; int dev; int irq; } ;
struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct pnp_dev*) ;
 int FUNC_1 (struct wbcir_data*) ;
 int FUNC_2 (int *) ;
 struct wbcir_data* FUNC_3 (struct pnp_dev*) ;
 int FUNC_4 (struct pnp_dev*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (struct wbcir_data*,int ) ;

__attribute__((used)) static void
FUNC_10(struct pnp_dev *VAR_8)
{
 struct wbcir_data *VAR_9 = FUNC_3(VAR_8);


 FUNC_9(VAR_9, VAR_4);
 FUNC_0(VAR_9->irq, VAR_8);


 FUNC_8(VAR_9->wbase + VAR_7, 0x17, 0x17);


 FUNC_8(VAR_9->wbase + VAR_5, 0x00, 0x01);


 FUNC_8(VAR_9->wbase + VAR_6, 0x00, 0x07);

 FUNC_5(VAR_9->dev);

 FUNC_2(&VAR_9->led);


 FUNC_7(&VAR_9->led, VAR_1);

 FUNC_6(VAR_9->wbase, VAR_3);
 FUNC_6(VAR_9->ebase, VAR_0);
 FUNC_6(VAR_9->sbase, VAR_2);

 FUNC_1(VAR_9);

 FUNC_4(VAR_8, ((void*)0));
}

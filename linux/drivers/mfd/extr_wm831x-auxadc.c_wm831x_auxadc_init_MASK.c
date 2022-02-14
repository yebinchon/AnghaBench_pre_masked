
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int * auxadc_read; int dev; scalar_t__ irq; int auxadc_pending; int auxadc_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ,int ,char*,struct wm831x*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (struct wm831x*,int ) ;

void FUNC_5(struct wm831x *VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_5->auxadc_lock);
 FUNC_0(&VAR_5->auxadc_pending);

 if (VAR_5->irq) {
  VAR_5->auxadc_read = VAR_3;

  VAR_6 = FUNC_3(FUNC_4(VAR_5,
            VAR_1),
        ((void*)0), VAR_2,
        VAR_0,
        "auxadc", VAR_5);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "AUXADC IRQ request failed: %d\n",
    VAR_6);
   VAR_5->auxadc_read = ((void*)0);
  }
 }

 if (!VAR_5->auxadc_read)
  VAR_5->auxadc_read = VAR_4;
}

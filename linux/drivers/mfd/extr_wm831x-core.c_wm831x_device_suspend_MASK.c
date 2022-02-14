
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dev; scalar_t__ charger_irq_wake; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wm831x*,int ) ;
 int FUNC_2 (struct wm831x*,int ,int) ;

int FUNC_3(struct wm831x *VAR_10)
{
 int VAR_11, VAR_12;






 if (VAR_10->charger_irq_wake) {
  VAR_11 = FUNC_1(VAR_10, VAR_9);

  VAR_12 = VAR_2 |
   VAR_0 |
   VAR_1 |
   VAR_5 | VAR_3 |
   VAR_7 | VAR_4 |
   VAR_6;


  if (VAR_11 & VAR_12)
   VAR_11 = FUNC_1(VAR_10,
           VAR_8);

  if (VAR_11 & VAR_12) {
   FUNC_0(VAR_10->dev,
     "Acknowledging masked charger IRQs: %x\n",
     VAR_11 & VAR_12);
   FUNC_2(VAR_10, VAR_8,
      VAR_11 & VAR_12);
  }
 }

 return 0;
}

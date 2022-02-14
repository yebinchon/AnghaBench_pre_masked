
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int auxadc_lock; int dev; } ;
typedef enum wm831x_auxadc { ____Placeholder_wm831x_auxadc } wm831x_auxadc ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm831x*,int ) ;
 int FUNC_5 (struct wm831x*,int ,int) ;
 int FUNC_6 (struct wm831x*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct wm831x *VAR_13,
         enum wm831x_auxadc VAR_14)
{
 int VAR_15, VAR_16, VAR_17;

 FUNC_2(&VAR_13->auxadc_lock);

 VAR_15 = FUNC_6(VAR_13, VAR_2,
         VAR_11, VAR_11);
 if (VAR_15 < 0) {
  FUNC_0(VAR_13->dev, "Failed to enable AUXADC: %d\n", VAR_15);
  goto out;
 }


 VAR_16 = VAR_14;
 VAR_15 = FUNC_5(VAR_13, VAR_5,
          1 << VAR_16);
 if (VAR_15 < 0) {
  FUNC_0(VAR_13->dev, "Failed to set AUXADC source: %d\n", VAR_15);
  goto out;
 }

 VAR_15 = FUNC_6(VAR_13, VAR_2,
         VAR_7, VAR_7);
 if (VAR_15 < 0) {
  FUNC_0(VAR_13->dev, "Failed to start AUXADC: %d\n", VAR_15);
  goto disable;
 }



 VAR_17 = 5;
 while (VAR_17) {
  FUNC_1(1);

  VAR_15 = FUNC_4(VAR_13,
          VAR_12);
  if (VAR_15 < 0) {
   FUNC_0(VAR_13->dev,
    "ISR 1 read failed: %d\n", VAR_15);
   goto disable;
  }


  if (VAR_15 & VAR_4) {
   FUNC_5(VAR_13,
      VAR_12,
      VAR_4);
   break;
  } else {
   FUNC_0(VAR_13->dev,
    "AUXADC conversion timeout\n");
   VAR_15 = -VAR_0;
   goto disable;
  }
 }

 VAR_15 = FUNC_4(VAR_13, VAR_3);
 if (VAR_15 < 0) {
  FUNC_0(VAR_13->dev,
   "Failed to read AUXADC data: %d\n", VAR_15);
  goto disable;
 }

 VAR_16 = ((VAR_15 & VAR_9)
        >> VAR_10) - 1;

 if (VAR_16 == 14)
  VAR_16 = VAR_6;

 if (VAR_16 != VAR_14) {
  FUNC_0(VAR_13->dev, "Data from source %d not %d\n",
   VAR_16, VAR_14);
  VAR_15 = -VAR_1;
 } else {
  VAR_15 &= VAR_8;
 }

disable:
 FUNC_6(VAR_13, VAR_2, VAR_11, 0);
out:
 FUNC_3(&VAR_13->auxadc_lock);
 return VAR_15;
}

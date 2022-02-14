
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int (* auxadc_read ) (struct wm831x*,int) ;} ;
typedef enum wm831x_auxadc { ____Placeholder_wm831x_auxadc } wm831x_auxadc ;


 int FUNC_0 (struct wm831x*,int) ;

int FUNC_1(struct wm831x *VAR_0, enum wm831x_auxadc VAR_1)
{
 return VAR_0->auxadc_read(VAR_0, VAR_1);
}

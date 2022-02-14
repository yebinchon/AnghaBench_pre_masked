
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wm831x*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1 / 2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_0 + VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_3[VAR_4 * 2] = (VAR_5 >> 8) & 0xff;
  VAR_3[(VAR_4 * 2) + 1] = VAR_5 & 0xff;
 }

 return 0;
}

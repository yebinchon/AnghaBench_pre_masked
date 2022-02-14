
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x {int dev; } ;
typedef int reg ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wm831x*,int ) ;

__attribute__((used)) static void FUNC_3(struct wm831x *VAR_1)
{
 int VAR_2;
 u16 VAR_3;






 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 >= 0) {
  VAR_3 = VAR_2;
  FUNC_0(&VAR_3, sizeof(VAR_3));
 } else {
  FUNC_1(VAR_1->dev, "Failed to read RTC write counter: %d\n",
    VAR_2);
 }
}

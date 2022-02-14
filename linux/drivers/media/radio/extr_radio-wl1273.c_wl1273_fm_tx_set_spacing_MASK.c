
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1273_device {int spacing; struct wl1273_core* core; } ;
struct wl1273_core {int (* write ) (struct wl1273_core*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1273_core*,int ,int ) ;
 int FUNC_1 (struct wl1273_core*,int ,int ) ;
 int FUNC_2 (struct wl1273_core*,int ,int ) ;
 int FUNC_3 (struct wl1273_core*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wl1273_device *VAR_4,
        unsigned int VAR_5)
{
 struct wl1273_core *VAR_6 = VAR_4->core;
 int VAR_7;

 if (VAR_5 == 0) {
  VAR_7 = VAR_6->write(VAR_6, VAR_0,
    VAR_1);
  VAR_4->spacing = 100;
 } else if (VAR_5 - 50000 < 25000) {
  VAR_7 = VAR_6->write(VAR_6, VAR_0,
    VAR_3);
  VAR_4->spacing = 50;
 } else if (VAR_5 - 100000 < 50000) {
  VAR_7 = VAR_6->write(VAR_6, VAR_0,
    VAR_1);
  VAR_4->spacing = 100;
 } else {
  VAR_7 = VAR_6->write(VAR_6, VAR_0,
    VAR_2);
  VAR_4->spacing = 200;
 }

 return VAR_7;
}

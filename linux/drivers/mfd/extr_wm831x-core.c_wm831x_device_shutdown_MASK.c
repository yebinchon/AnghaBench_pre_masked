
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dev; scalar_t__ soft_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wm831x*,int ,int ,int ) ;

void FUNC_2(struct wm831x *VAR_2)
{
 if (VAR_2->soft_shutdown) {
  FUNC_0(VAR_2->dev, "Initiating shutdown...\n");
  FUNC_1(VAR_2, VAR_1, VAR_0, 0);
 }
}

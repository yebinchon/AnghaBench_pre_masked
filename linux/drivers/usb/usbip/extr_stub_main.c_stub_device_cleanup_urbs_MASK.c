
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stub_priv {int num_urbs; int * urbs; } ;
struct stub_device {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct stub_priv*) ;
 struct stub_priv* FUNC_2 (struct stub_device*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct stub_device *VAR_0)
{
 struct stub_priv *VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0->udev->dev, "Stub device cleaning up urbs\n");

 while ((VAR_1 = FUNC_2(VAR_0))) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_urbs; VAR_2++)
   FUNC_3(VAR_1->urbs[VAR_2]);

  FUNC_1(VAR_1);
 }
}

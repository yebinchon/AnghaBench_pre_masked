
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {int dummy; } ;
struct stub_priv {int num_urbs; int * urbs; } ;


 int FUNC_0 (struct usbip_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct usbip_device *VAR_0, struct stub_priv *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_urbs; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->urbs[VAR_3]);
  if (VAR_2 < 0)
   break;
 }

 return VAR_2;
}

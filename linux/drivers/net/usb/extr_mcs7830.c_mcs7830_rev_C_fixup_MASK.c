
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*,int ,int,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_2)
{
 u8 VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  if (FUNC_1(VAR_2) == 2) {
   FUNC_0(&VAR_2->udev->dev, "applying rev.C fixup\n");
   FUNC_2(VAR_2, VAR_0,
     1, &VAR_3);
  }
  FUNC_3(1);
 }
}

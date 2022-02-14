
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stk_camera {int udev; TYPE_1__* isobufs; } ;
struct TYPE_2__ {scalar_t__ urb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct stk_camera*,int,int*) ;
 int FUNC_3 (struct stk_camera*,int,int) ;
 scalar_t__ FUNC_4 (struct stk_camera*) ;
 int FUNC_5 (struct stk_camera*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct stk_camera *VAR_1)
{
 u8 VAR_2;
 int VAR_3;
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1, 0x0100, &VAR_2);
  FUNC_3(VAR_1, 0x0100, VAR_2 & ~0x80);
  if (VAR_1->isobufs != ((void*)0)) {
   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_1->isobufs[VAR_3].urb)
     FUNC_6(VAR_1->isobufs[VAR_3].urb);
   }
  }
  FUNC_5(VAR_1);

  if (FUNC_7(VAR_1->udev, 0, 0))
   FUNC_1("usb_set_interface failed !\n");
  if (FUNC_4(VAR_1))
   FUNC_1("error suspending the sensor\n");
 }
 return 0;
}

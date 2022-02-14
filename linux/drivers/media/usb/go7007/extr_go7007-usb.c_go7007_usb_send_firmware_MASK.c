
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct go7007_usb {int usbdev; TYPE_1__* board; } ;
struct go7007 {struct go7007_usb* hpi_context; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int,int *,int,int*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct go7007 *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct go7007_usb *VAR_4 = VAR_1->hpi_context;
 int VAR_5, VAR_6;
 int VAR_7 = 500;

 FUNC_0("DownloadBuffer sending %d bytes\n", VAR_3);

 if (VAR_4->board->flags & VAR_0)
  VAR_6 = FUNC_2(VAR_4->usbdev, 2);
 else
  VAR_6 = FUNC_2(VAR_4->usbdev, 3);

 return FUNC_1(VAR_4->usbdev, VAR_6, VAR_2, VAR_3,
     &VAR_5, VAR_7);
}

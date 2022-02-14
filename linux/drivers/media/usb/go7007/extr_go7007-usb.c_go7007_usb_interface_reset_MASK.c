
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007_usb {TYPE_1__* board; } ;
struct go7007 {scalar_t__ status; int dev; struct go7007_usb* hpi_context; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct go7007*,int*,int*) ;
 scalar_t__ FUNC_2 (struct go7007*,int,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct go7007*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct go7007 *VAR_2)
{
 struct go7007_usb *VAR_3 = VAR_2->hpi_context;
 u16 VAR_4, VAR_5;

 if (VAR_2->status == VAR_1)
  return -1;

 if (FUNC_3(VAR_2, 0x0001, 0x0001) < 0)
  return -1;
 FUNC_4(100);

 if (VAR_3->board->flags & VAR_0) {

  FUNC_5("resetting EZ-USB buffers\n");
  if (FUNC_2(VAR_2, 0x10, 0, 0, ((void*)0), 0, 0) < 0 ||
      FUNC_2(VAR_2, 0x10, 0, 0, ((void*)0), 0, 0) < 0)
   return -1;


  if (FUNC_3(VAR_2, 0x0001, 0x0001) < 0)
   return -1;
  FUNC_4(100);
 }


 if (FUNC_1(VAR_2, &VAR_4, &VAR_5) < 0 ||
   (VAR_4 & ~0x1) != 0x55aa) {
  FUNC_0(VAR_2->dev, "unable to reset the USB interface\n");
  return -1;
 }
 return 0;
}

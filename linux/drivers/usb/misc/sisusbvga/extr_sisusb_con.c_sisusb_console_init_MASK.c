
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sisusb_usb_data {int haveconsole; int con_first; int con_last; int sisusb_cursor_loc; int sisusb_cursor_size_from; int sisusb_cursor_size_to; int sisusb_num_columns; int scrbuf_size; unsigned long scrbuf; int lock; TYPE_1__* sisusb_dev; int gfxinit; int SiS_Pr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sisusb_usb_data** VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct sisusb_usb_data*) ;
 scalar_t__ FUNC_7 (struct sisusb_usb_data*,int) ;
 scalar_t__ FUNC_8 (int) ;

int
FUNC_9(struct sisusb_usb_data *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_4(&VAR_3->lock);


 if (VAR_3->haveconsole || !VAR_3->SiS_Pr) {
  FUNC_5(&VAR_3->lock);
  return 1;
 }

 VAR_3->con_first = VAR_4;
 VAR_3->con_last = VAR_5;

 if (VAR_4 > VAR_5 ||
     VAR_4 > VAR_0 ||
     VAR_5 > VAR_0) {
  FUNC_5(&VAR_3->lock);
  return 1;
 }


 if (!VAR_3->gfxinit || VAR_4 < 1 || VAR_5 < 1) {
  FUNC_5(&VAR_3->lock);
  return 0;
 }

 VAR_3->sisusb_cursor_loc = -1;
 VAR_3->sisusb_cursor_size_from = -1;
 VAR_3->sisusb_cursor_size_to = -1;


 if (FUNC_7(VAR_3, 1)) {
  FUNC_5(&VAR_3->lock);
  FUNC_2(&VAR_3->sisusb_dev->dev, "Failed to set up text mode\n");
  return 1;
 }


 FUNC_6(VAR_3);

 for (VAR_6 = VAR_4 - 1; VAR_6 <= VAR_5 - 1; VAR_6++) {

  VAR_1[VAR_6] = VAR_3;
 }


 VAR_3->sisusb_num_columns = 80;


 VAR_3->scrbuf_size = 32 * 1024;


 if (!(VAR_3->scrbuf = (unsigned long)FUNC_8(VAR_3->scrbuf_size))) {
  FUNC_5(&VAR_3->lock);
  FUNC_2(&VAR_3->sisusb_dev->dev, "Failed to allocate screen buffer\n");
  return 1;
 }

 FUNC_5(&VAR_3->lock);


 FUNC_0();
 VAR_7 = FUNC_3(&VAR_2, VAR_4 - 1, VAR_5 - 1, 0);
 FUNC_1();
 if (!VAR_7)
  VAR_3->haveconsole = 1;
 else {
  for (VAR_6 = VAR_4 - 1; VAR_6 <= VAR_5 - 1; VAR_6++)
   VAR_1[VAR_6] = ((void*)0);
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int transfer_buffer_length; int transfer_buffer; } ;
struct ufx_data {int usb_active; TYPE_2__* info; } ;
struct TYPE_3__ {int xres; int yres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*) ;
 struct urb* FUNC_7 (struct ufx_data*) ;
 int FUNC_8 (struct ufx_data*,int ,int,int,int,int) ;
 int FUNC_9 (struct ufx_data*,struct urb*,int) ;

__attribute__((used)) static int FUNC_10(struct ufx_data *VAR_1, int VAR_2, int VAR_3,
 int VAR_4, int VAR_5)
{
 size_t VAR_6 = FUNC_0((VAR_4 * 2), 4);
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;

 if ((VAR_4 <= 0) || (VAR_5 <= 0) ||
     (VAR_2 + VAR_4 > VAR_1->info->var.xres) ||
     (VAR_3 + VAR_5 > VAR_1->info->var.yres))
  return -VAR_0;

 if (!FUNC_2(&VAR_1->usb_active))
  return 0;

 while (VAR_10 < VAR_5) {
  struct urb *VAR_11 = FUNC_7(VAR_1);
  if (!VAR_11) {
   FUNC_6("ufx_handle_damage unable to get urb");
   return 0;
  }


  FUNC_1(VAR_11->transfer_buffer_length < (24 + (VAR_4 * 2)));


  VAR_9 = (VAR_11->transfer_buffer_length - 24) / VAR_6;


  VAR_9 = FUNC_5(VAR_9, (VAR_5 - VAR_10));

  FUNC_4(VAR_11->transfer_buffer, 0, VAR_11->transfer_buffer_length);

  FUNC_8(VAR_1, VAR_11->transfer_buffer, VAR_2, (VAR_3 + VAR_10), VAR_4, VAR_9);
  VAR_7 = 24 + (VAR_6 * VAR_9);

  VAR_8 = FUNC_9(VAR_1, VAR_11, VAR_7);
  FUNC_3(VAR_8, "Error submitting URB");

  VAR_10 += VAR_9;
 }

 return 0;
}

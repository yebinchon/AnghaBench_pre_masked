
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_cardstate {int* bchars; int * read_urb; int * bulk_out_urb; int * bulk_out_buffer; } ;
struct TYPE_2__ {struct usb_cardstate* usb; } ;
struct cardstate {int write_tasklet; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_cardstate* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct cardstate *VAR_3)
{
 struct usb_cardstate *VAR_4;

 VAR_3->hw.usb = VAR_4 =
  FUNC_0(sizeof(struct usb_cardstate), VAR_1);
 if (!VAR_4) {
  FUNC_1("out of memory\n");
  return -VAR_0;
 }

 VAR_4->bchars[0] = 0;
 VAR_4->bchars[1] = 0;
 VAR_4->bchars[2] = 0;
 VAR_4->bchars[3] = 0;
 VAR_4->bchars[4] = 0x11;
 VAR_4->bchars[5] = 0x13;
 VAR_4->bulk_out_buffer = ((void*)0);
 VAR_4->bulk_out_urb = ((void*)0);
 VAR_4->read_urb = ((void*)0);
 FUNC_2(&VAR_3->write_tasklet,
       VAR_2, (unsigned long) VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_data_stream {int urbs_submitted; int * urb_list; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_data_stream *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->urbs_submitted; VAR_1++) {
  FUNC_0(3, "killing URB no. %d.", VAR_1);

  FUNC_1(VAR_0->urb_list[VAR_1]);
 }
 VAR_0->urbs_submitted = 0;

 return 0;
}

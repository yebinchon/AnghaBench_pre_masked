
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_data_stream {int state; int buf_num; int * buf_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_data_stream *VAR_1)
{
 if (VAR_1->state & VAR_0) {
  while (VAR_1->buf_num) {
   VAR_1->buf_num--;
   FUNC_0(VAR_1->buf_list[VAR_1->buf_num]);
  }
 }

 VAR_1->state &= ~VAR_0;

 return 0;
}

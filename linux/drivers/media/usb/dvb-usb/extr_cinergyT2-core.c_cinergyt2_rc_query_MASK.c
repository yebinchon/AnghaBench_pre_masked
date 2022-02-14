
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dvb_usb_device {scalar_t__ last_event; int data_mutex; struct cinergyt2_state* priv; } ;
struct cinergyt2_state {int* data; scalar_t__ rc_counter; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_3 (struct dvb_usb_device*,int*,scalar_t__*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_5, u32 *VAR_6, int *VAR_7)
{
 struct cinergyt2_state *VAR_8 = VAR_5->priv;
 int VAR_9, VAR_10;

 *VAR_7 = VAR_3;

 FUNC_4(&VAR_5->data_mutex);
 VAR_8->data[0] = VAR_0;

 VAR_10 = FUNC_2(VAR_5, VAR_8->data, 1, VAR_8->data, 5, 0);
 if (VAR_10 < 0)
  goto ret;

 if (VAR_8->data[4] == 0xff) {

  VAR_8->rc_counter++;
  if (VAR_8->rc_counter > VAR_1) {
   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
    if (VAR_5->last_event == VAR_4[VAR_9]) {
     *VAR_7 = VAR_2;
     *VAR_6 = VAR_5->last_event;
     FUNC_1("repeat key, event %x\n",
         *VAR_6);
     goto ret;
    }
   }
   FUNC_1("repeated key (non repeatable)\n");
  }
  goto ret;
 }


 VAR_8->data[2] = ~VAR_8->data[1];
 FUNC_3(VAR_5, VAR_8->data, VAR_6, VAR_7);
 if (VAR_8->data[0] != 0) {
  if (*VAR_6 != VAR_5->last_event)
   VAR_8->rc_counter = 0;

  FUNC_1("key: %*ph\n", 5, VAR_8->data);
 }

ret:
 FUNC_5(&VAR_5->data_mutex);
 return VAR_10;
}

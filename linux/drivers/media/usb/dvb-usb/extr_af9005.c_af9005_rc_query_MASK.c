
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_usb_device {int data_mutex; int last_event; struct af9005_device_state* priv; } ;
struct af9005_device_state {int* data; int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int*,int,int (*) (char*,int,int )) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dvb_usb_device*,int*,int,int *,int*) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_device *VAR_3, u32 * VAR_4, int *VAR_5)
{
 struct af9005_device_state *VAR_6 = VAR_3->priv;
 int VAR_7, VAR_8;
 u8 VAR_9;

 *VAR_5 = VAR_2;
 if (&FUNC_6 == ((void*)0)) {

  return 0;
 }

 FUNC_4(&VAR_3->data_mutex);


 VAR_6->data[0] = 3;
 VAR_6->data[1] = 0;
 VAR_6->data[2] = 0x40;
 VAR_6->data[3] = 1;
 VAR_6->data[4] = VAR_9 = VAR_6->sequence++;
 VAR_7 = FUNC_2(VAR_3, VAR_6->data, 5, VAR_6->data, 256, 0);
 if (VAR_7) {
  FUNC_3("rc query failed");
  goto ret;
 }
 if (VAR_6->data[2] != 0x41) {
  FUNC_3("rc query bad header.");
  VAR_7 = -VAR_0;
  goto ret;
 } else if (VAR_6->data[4] != VAR_9) {
  FUNC_3("rc query bad sequence.");
  VAR_7 = -VAR_0;
  goto ret;
 }
 VAR_8 = VAR_6->data[5];
 if (VAR_8 > 246) {
  FUNC_3("rc query invalid length");
  VAR_7 = -VAR_0;
  goto ret;
 }
 if (VAR_8 > 0) {
  FUNC_0("rc data (%d) ", VAR_8);
  FUNC_1((VAR_6->data + 6), VAR_8, FUNC_0);
  VAR_7 = FUNC_6(VAR_3, &VAR_6->data[6], VAR_8, VAR_4, VAR_5);
  if (VAR_7) {
   FUNC_3("rc_decode failed");
   goto ret;
  } else {
   FUNC_0("rc_decode state %x event %x\n", *VAR_5, *VAR_4);
   if (*VAR_5 == VAR_1)
    *VAR_4 = VAR_3->last_event;
  }
 }

ret:
 FUNC_5(&VAR_3->data_mutex);
 return VAR_7;
}

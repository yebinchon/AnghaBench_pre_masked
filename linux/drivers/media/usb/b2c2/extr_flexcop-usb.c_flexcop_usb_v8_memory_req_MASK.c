
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct flexcop_usb {int* data; int data_mutex; int udev; } ;
typedef int flexcop_usb_request_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,int,int,int) ;
 int FUNC_2 (int*,int,int (*) (char*,int,int ,int,int,int)) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int ,int,int,int,int*,int,int) ;

__attribute__((used)) static int FUNC_8(struct flexcop_usb *VAR_12,
  flexcop_usb_request_t VAR_13, u8 VAR_14, u16 VAR_15,
  u8 *VAR_16, u32 VAR_17)
{
 u8 VAR_18 = VAR_11;
 u16 VAR_19;
 int VAR_20, VAR_21, VAR_22;
 VAR_19 = VAR_14 << 8;

 if (VAR_17 > sizeof(VAR_12->data)) {
  FUNC_3("Buffer size bigger than max URB control message\n");
  return -VAR_6;
 }

 switch (VAR_13) {
 case 129:
  VAR_20 = VAR_3;
  VAR_18 |= VAR_8;
  VAR_21 = VAR_0;
  break;
 case 128:
  VAR_19 |= VAR_16[0];
  VAR_18 |= VAR_9;
  VAR_20 = VAR_4;
  VAR_21 = VAR_1;
  break;
 case 130:
  VAR_18 |= VAR_9;
  VAR_20 = VAR_2;
  VAR_21 = VAR_1;
  break;
 default:
  FUNC_0("unsupported request for v8_mem_req %x.\n", VAR_13);
  return -VAR_5;
 }
 FUNC_1("v8mem: %02x %02x %04x %04x, len: %d\n", VAR_18, VAR_13,
   VAR_15, VAR_19, VAR_17);

 FUNC_5(&VAR_12->data_mutex);

 if ((VAR_18 & VAR_10) == VAR_9)
  FUNC_4(VAR_12->data, VAR_16, VAR_17);

 VAR_22 = FUNC_7(VAR_12->udev, VAR_21,
   VAR_13,
   VAR_18,
   VAR_15,
   VAR_19,
   VAR_12->data,
   VAR_17,
   VAR_20 * VAR_7);
 if (VAR_22 != VAR_17)
  VAR_22 = -VAR_6;

 if (VAR_22 >= 0) {
  VAR_22 = 0;
  if ((VAR_18 & VAR_10) == VAR_8)
   FUNC_4(VAR_16, VAR_12->data, VAR_17);
 }

 FUNC_6(&VAR_12->data_mutex);

 FUNC_2(VAR_16, VAR_22, FUNC_1);
 return VAR_22;
}

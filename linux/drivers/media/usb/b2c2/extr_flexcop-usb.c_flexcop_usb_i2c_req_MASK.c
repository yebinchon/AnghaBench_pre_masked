
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct flexcop_usb {int* data; int data_mutex; int udev; } ;
struct flexcop_i2c_adapter {int port; TYPE_1__* fc; } ;
typedef int flexcop_usb_request_t ;
typedef int flexcop_usb_i2c_function_t ;
struct TYPE_2__ {struct flexcop_usb* bus_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int VAR_8 ;
 int FUNC_0 (char*,int,int,int ,int,int,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int ,int,int,int,int*,int,int) ;

__attribute__((used)) static int FUNC_7(struct flexcop_i2c_adapter *VAR_9,
  flexcop_usb_request_t VAR_10, flexcop_usb_i2c_function_t VAR_11,
  u8 VAR_12, u8 VAR_13, u8 *VAR_14, u8 VAR_15)
{
 struct flexcop_usb *VAR_16 = VAR_9->fc->bus_specific;
 u16 VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;
 u8 VAR_22 = VAR_8;

 if (VAR_15 > sizeof(VAR_16->data)) {
  FUNC_2("Buffer size bigger than max URB control message\n");
  return -VAR_3;
 }

 switch (VAR_11) {
 case 128:
 case 132:
 case 129:

 case 133:
  VAR_20 = VAR_1;
  VAR_19 = 2;
  VAR_22 |= VAR_6;
  break;
 case 131:
 case 130:
  VAR_20 = VAR_0;
  VAR_19 = 2;
  VAR_22 |= VAR_5;
  break;
 default:
  FUNC_1("unsupported function for i2c_req %x\n", VAR_11);
  return -VAR_2;
 }
 VAR_17 = (VAR_11 << 8) | (VAR_9->port << 4);
 VAR_18 = (VAR_12 << 8 ) | VAR_13;

 FUNC_0("i2c %2d: %02x %02x %02x %02x %02x %02x\n",
   VAR_11, VAR_22, VAR_10,
   VAR_17 & 0xff, VAR_17 >> 8,
   VAR_18 & 0xff, VAR_18 >> 8);

 FUNC_4(&VAR_16->data_mutex);

 if ((VAR_22 & VAR_7) == VAR_6)
  FUNC_3(VAR_16->data, VAR_14, VAR_15);

 VAR_21 = FUNC_6(VAR_16->udev, VAR_20,
   VAR_10,
   VAR_22,
   VAR_17,
   VAR_18,
   VAR_16->data,
   VAR_15,
   VAR_19 * VAR_4);

 if (VAR_21 != VAR_15)
  VAR_21 = -VAR_3;

 if (VAR_21 >= 0) {
  VAR_21 = 0;
  if ((VAR_22 & VAR_7) == VAR_5)
   FUNC_3(VAR_14, VAR_16->data, VAR_15);
 }

 FUNC_5(&VAR_16->data_mutex);

 return 0;
}

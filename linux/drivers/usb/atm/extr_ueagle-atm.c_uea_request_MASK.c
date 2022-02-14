
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uea_softc {int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uea_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (void const*,int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int ,int,int,int,int *,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct uea_softc *VAR_8,
  u16 VAR_9, u16 VAR_10, u16 VAR_11, const void *VAR_12)
{
 u8 *VAR_13;
 int VAR_14 = -VAR_2;

 VAR_13 = FUNC_2(VAR_12, VAR_11, VAR_3);
 if (!VAR_13) {
  FUNC_3(FUNC_0(VAR_8), "can't allocate xfer_buff\n");
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_8->usb_dev, FUNC_5(VAR_8->usb_dev, 0),
         VAR_4,
         VAR_5 | VAR_7 | VAR_6,
         VAR_9, VAR_10, VAR_13, VAR_11, VAR_0);

 FUNC_1(VAR_13);
 if (VAR_14 < 0) {
  FUNC_3(FUNC_0(VAR_8), "usb_control_msg error %d\n", VAR_14);
  return VAR_14;
 }

 if (VAR_14 != VAR_11) {
  FUNC_3(FUNC_0(VAR_8),
         "usb_control_msg send only %d bytes (instead of %d)\n",
         VAR_14, VAR_11);
  return -VAR_1;
 }

 return 0;
}

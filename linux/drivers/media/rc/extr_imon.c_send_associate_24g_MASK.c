
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int usb_tx_buf; int dev_present_intf0; } ;
typedef int packet ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct imon_context*) ;

__attribute__((used)) static int FUNC_3(struct imon_context *VAR_1)
{
 int VAR_2;
 const unsigned char VAR_3[8] = { 0x01, 0x00, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x20 };

 if (!VAR_1) {
  FUNC_1("no context for device\n");
  return -VAR_0;
 }

 if (!VAR_1->dev_present_intf0) {
  FUNC_1("no iMON device present\n");
  return -VAR_0;
 }

 FUNC_0(VAR_1->usb_tx_buf, VAR_3, sizeof(VAR_3));
 VAR_2 = FUNC_2(VAR_1);

 return VAR_2;
}

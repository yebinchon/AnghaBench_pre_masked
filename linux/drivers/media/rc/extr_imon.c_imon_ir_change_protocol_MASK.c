
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_dev {int allowed_protocols; struct imon_context* priv; } ;
struct imon_context {int rc_proto; int pad_mouse; int lock; int usb_tx_buf; struct device* dev; } ;
struct device {int dummy; } ;
typedef int ir_proto_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,unsigned char**,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct imon_context*) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_3, u64 *VAR_4)
{
 int VAR_5;
 struct imon_context *VAR_6 = VAR_3->priv;
 struct device *VAR_7 = VAR_6->dev;
 bool VAR_8 = 0;
 unsigned char VAR_9[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86 };

 if (*VAR_4 && !(*VAR_4 & VAR_3->allowed_protocols))
  FUNC_1(VAR_7, "Looks like you're trying to use an IR protocol this device does not support\n");

 if (*VAR_4 & VAR_1) {
  FUNC_0(VAR_7, "Configuring IR receiver for MCE protocol\n");
  VAR_9[0] = 0x01;
  *VAR_4 = VAR_1;
 } else if (*VAR_4 & VAR_0) {
  FUNC_0(VAR_7, "Configuring IR receiver for iMON protocol\n");
  if (!VAR_2)
   FUNC_0(VAR_7, "PAD stabilize functionality disabled\n");

  *VAR_4 = VAR_0;
 } else {
  FUNC_1(VAR_7, "Unsupported IR protocol specified, overriding to iMON IR protocol\n");
  if (!VAR_2)
   FUNC_0(VAR_7, "PAD stabilize functionality disabled\n");

  *VAR_4 = VAR_0;
 }

 FUNC_2(VAR_6->usb_tx_buf, &VAR_9, sizeof(VAR_9));

 if (!FUNC_3(&VAR_6->lock)) {
  VAR_8 = 1;
  FUNC_4(&VAR_6->lock);
 }

 VAR_5 = FUNC_6(VAR_6);
 if (VAR_5)
  goto out;

 VAR_6->rc_proto = *VAR_4;
 VAR_6->pad_mouse = 0;

out:
 if (VAR_8)
  FUNC_5(&VAR_6->lock);

 return VAR_5;
}

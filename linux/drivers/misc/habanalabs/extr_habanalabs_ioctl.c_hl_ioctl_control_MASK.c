
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_ioctl_desc {int dummy; } ;
struct hl_fpriv {struct hl_device* hdev; } ;
struct hl_device {int dev_ctrl; } ;
struct file {struct hl_fpriv* private_data; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long,struct hl_ioctl_desc const*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 struct hl_ioctl_desc* VAR_3 ;
 int FUNC_3 (int ) ;

long FUNC_4(struct file *VAR_4, unsigned int VAR_5, unsigned long VAR_6)
{
 struct hl_fpriv *VAR_7 = VAR_4->private_data;
 struct hl_device *VAR_8 = VAR_7->hdev;
 const struct hl_ioctl_desc *VAR_9 = ((void*)0);
 unsigned int VAR_10 = FUNC_0(VAR_5);

 if (VAR_10 == FUNC_0(VAR_1)) {
  VAR_9 = &VAR_3[VAR_10];
 } else {
  FUNC_2(VAR_8->dev_ctrl, "invalid ioctl: pid=%d, nr=0x%02x\n",
   FUNC_3(VAR_2), VAR_10);
  return -VAR_0;
 }

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_9, VAR_8->dev_ctrl);
}

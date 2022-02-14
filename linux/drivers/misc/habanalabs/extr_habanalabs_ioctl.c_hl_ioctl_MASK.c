
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_ioctl_desc {int dummy; } ;
struct hl_fpriv {struct hl_device* hdev; } ;
struct hl_device {int dev; } ;
struct file {struct hl_fpriv* private_data; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long,struct hl_ioctl_desc const*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 struct hl_ioctl_desc* VAR_4 ;
 int FUNC_3 (int ) ;

long FUNC_4(struct file *VAR_5, unsigned int VAR_6, unsigned long VAR_7)
{
 struct hl_fpriv *VAR_8 = VAR_5->private_data;
 struct hl_device *VAR_9 = VAR_8->hdev;
 const struct hl_ioctl_desc *VAR_10 = ((void*)0);
 unsigned int VAR_11 = FUNC_0(VAR_6);

 if ((VAR_11 >= VAR_2) && (VAR_11 < VAR_1)) {
  VAR_10 = &VAR_4[VAR_11];
 } else {
  FUNC_2(VAR_9->dev, "invalid ioctl: pid=%d, nr=0x%02x\n",
   FUNC_3(VAR_3), VAR_11);
  return -VAR_0;
 }

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_10, VAR_9->dev);
}

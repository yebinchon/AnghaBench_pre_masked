
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int radio_tx_subchans; } ;
struct v4l2_modulator {int txsubchans; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_1, void *VAR_2, const struct v4l2_modulator *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->index)
  return -VAR_0;
 if (VAR_3->txsubchans & ~0x13)
  return -VAR_0;
 VAR_4->radio_tx_subchans = VAR_3->txsubchans;
 return 0;
}

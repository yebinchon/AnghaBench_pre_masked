
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ private_data; } ;
struct dev_private_data {unsigned long card_addr; unsigned long user_ctl; unsigned long user_ctl_last; long user_sts; } ;


 long VAR_0 ;





__attribute__((used)) static
long FUNC_0(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct dev_private_data *VAR_4 = (struct dev_private_data *)VAR_1->private_data;

 switch (VAR_2) {
 case 130:
  VAR_4->card_addr = VAR_3; return VAR_4->card_addr;
 case 129:
  VAR_4->user_ctl = VAR_3; return VAR_4->user_ctl;
 case 128:
  VAR_4->user_ctl_last = VAR_3; return VAR_4->user_ctl_last;
 case 131:
  return VAR_4->user_sts;
 }

 return -VAR_0;
}

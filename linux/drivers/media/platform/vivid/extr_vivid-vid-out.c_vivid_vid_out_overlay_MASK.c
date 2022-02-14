
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {unsigned int overlay_out_enabled; TYPE_1__* fmt_out; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int can_do_overlay; } ;


 int VAR_0 ;
 int FUNC_0 (struct vivid_dev*,int,char*) ;
 struct vivid_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_1, void *VAR_2, unsigned VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3 && !VAR_4->fmt_out->can_do_overlay) {
  FUNC_0(VAR_4, 1, "unsupported output format for output overlay\n");
  return -VAR_0;
 }

 VAR_4->overlay_out_enabled = VAR_3;
 return 0;
}

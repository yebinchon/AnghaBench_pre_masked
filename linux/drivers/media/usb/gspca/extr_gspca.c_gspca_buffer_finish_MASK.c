
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct gspca_dev {TYPE_1__* sd_desc; scalar_t__ present; scalar_t__ usb_err; } ;
struct TYPE_2__ {int (* dq_callback ) (struct gspca_dev*) ;} ;


 int FUNC_0 (struct gspca_dev*) ;
 struct gspca_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_0)
{
 struct gspca_dev *VAR_1 = FUNC_1(VAR_0->vb2_queue);

 if (!VAR_1->sd_desc->dq_callback)
  return;

 VAR_1->usb_err = 0;
 if (VAR_1->present)
  VAR_1->sd_desc->dq_callback(VAR_1);
}

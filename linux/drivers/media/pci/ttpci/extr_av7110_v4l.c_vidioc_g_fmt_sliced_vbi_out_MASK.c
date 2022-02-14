
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_4__ {int io_size; void*** service_lines; void* service_set; } ;
struct TYPE_3__ {TYPE_2__ sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {scalar_t__ wssMode; int arm_app; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct av7110 *VAR_6 = (struct av7110 *)VAR_5->ext_priv;

 FUNC_1(2, "VIDIOC_G_FMT:\n");
 if (FUNC_0(VAR_6->arm_app) < 0x2623)
  return -VAR_0;
 FUNC_2(&VAR_4->fmt.sliced, 0, sizeof VAR_4->fmt.sliced);
 if (VAR_6->wssMode) {
  VAR_4->fmt.sliced.service_set = VAR_1;
  VAR_4->fmt.sliced.service_lines[0][23] = VAR_1;
  VAR_4->fmt.sliced.io_size = sizeof(struct v4l2_sliced_vbi_data);
 }
 return 0;
}

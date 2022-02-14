
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_sliced_vbi_cap {scalar_t__ type; void*** service_lines; void* service_set; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {int arm_app; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_sliced_vbi_cap *VAR_5)
{
 struct saa7146_dev *VAR_6 = ((struct saa7146_fh *)VAR_4)->dev;
 struct av7110 *VAR_7 = (struct av7110 *)VAR_6->ext_priv;

 FUNC_1(2, "VIDIOC_G_SLICED_VBI_CAP\n");
 if (VAR_5->type != VAR_1)
  return -VAR_0;
 if (FUNC_0(VAR_7->arm_app) >= 0x2623) {
  VAR_5->service_set = VAR_2;
  VAR_5->service_lines[0][23] = VAR_2;
 }
 return 0;
}

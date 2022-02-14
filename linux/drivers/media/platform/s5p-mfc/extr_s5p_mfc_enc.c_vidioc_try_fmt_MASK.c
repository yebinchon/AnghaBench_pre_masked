
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int height; int width; TYPE_2__* plane_fmt; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct s5p_mfc_fmt {int versions; } ;
struct s5p_mfc_dev {TYPE_3__* variant; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int version_bit; } ;
struct TYPE_5__ {int sizeimage; int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct s5p_mfc_fmt* FUNC_0 (struct v4l2_format*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int,int,int *,int,int,int,int ) ;
 struct s5p_mfc_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct s5p_mfc_dev *VAR_8 = FUNC_3(VAR_5);
 struct s5p_mfc_fmt *VAR_9;
 struct v4l2_pix_format_mplane *VAR_10 = &VAR_7->fmt.pix_mp;

 if (VAR_7->type == VAR_3) {
  VAR_9 = FUNC_0(VAR_7, VAR_1);
  if (!VAR_9) {
   FUNC_1("failed to try output format\n");
   return -VAR_0;
  }
  if ((VAR_8->variant->version_bit & VAR_9->versions) == 0) {
   FUNC_1("Unsupported format by this MFC version.\n");
   return -VAR_0;
  }

  VAR_10->plane_fmt[0].bytesperline =
   VAR_10->plane_fmt[0].sizeimage;
 } else if (VAR_7->type == VAR_4) {
  VAR_9 = FUNC_0(VAR_7, VAR_2);
  if (!VAR_9) {
   FUNC_1("failed to try output format\n");
   return -VAR_0;
  }
  if ((VAR_8->variant->version_bit & VAR_9->versions) == 0) {
   FUNC_1("Unsupported format by this MFC version.\n");
   return -VAR_0;
  }

  FUNC_2(&VAR_10->width, 8, 1920, 1,
   &VAR_10->height, 4, 1080, 1, 0);
 } else {
  FUNC_1("invalid buf type\n");
  return -VAR_0;
 }
 return 0;
}

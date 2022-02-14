
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_format {scalar_t__ type; } ;
struct s5p_mfc_fmt {scalar_t__ codec_mode; int versions; } ;
struct s5p_mfc_dev {TYPE_1__* variant; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int version_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct s5p_mfc_fmt* FUNC_0 (struct v4l2_format*,int ) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 struct s5p_mfc_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, struct v4l2_format *VAR_8)
{
 struct s5p_mfc_dev *VAR_9 = FUNC_3(VAR_6);
 struct s5p_mfc_fmt *VAR_10;

 FUNC_1(2, "Type is %d\n", VAR_8->type);
 if (VAR_8->type == VAR_5) {
  VAR_10 = FUNC_0(VAR_8, VAR_1);
  if (!VAR_10) {
   FUNC_2("Unsupported format for source.\n");
   return -VAR_0;
  }
  if (VAR_10->codec_mode == VAR_3) {
   FUNC_2("Unknown codec\n");
   return -VAR_0;
  }
  if ((VAR_9->variant->version_bit & VAR_10->versions) == 0) {
   FUNC_2("Unsupported format by this MFC version.\n");
   return -VAR_0;
  }
 } else if (VAR_8->type == VAR_4) {
  VAR_10 = FUNC_0(VAR_8, VAR_2);
  if (!VAR_10) {
   FUNC_2("Unsupported format for destination.\n");
   return -VAR_0;
  }
  if ((VAR_9->variant->version_bit & VAR_10->versions) == 0) {
   FUNC_2("Unsupported format by this MFC version.\n");
   return -VAR_0;
  }
 }

 return 0;
}

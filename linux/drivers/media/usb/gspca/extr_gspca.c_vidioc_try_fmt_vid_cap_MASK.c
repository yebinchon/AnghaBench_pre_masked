
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int priv; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct gspca_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gspca_dev*,struct v4l2_format*) ;
 struct gspca_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct gspca_dev *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5 = VAR_3->fmt.pix.priv;

 if (FUNC_0(VAR_4, VAR_3) < 0)
  return -VAR_0;

 VAR_3->fmt.pix.priv = VAR_5;
 return 0;
}

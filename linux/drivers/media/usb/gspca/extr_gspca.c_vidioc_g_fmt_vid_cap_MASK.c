
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
struct gspca_dev {TYPE_1__ pixfmt; } ;
struct file {int dummy; } ;


 struct gspca_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct gspca_dev *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = VAR_2->fmt.pix.priv;

 VAR_2->fmt.pix = VAR_3->pixfmt;

 VAR_2->fmt.pix.priv = VAR_4;
 return 0;
}

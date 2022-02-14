
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; unsigned int denominator; } ;
struct v4l2_frmivalenum {scalar_t__ width; scalar_t__ height; scalar_t__ pixel_format; TYPE_1__ discrete; int type; int index; } ;
struct pwc_device {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (struct pwc_device*,int ,int) ;
 scalar_t__** VAR_4 ;
 struct pwc_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
        struct v4l2_frmivalenum *VAR_7)
{
 struct pwc_device *VAR_8 = FUNC_1(VAR_5);
 int VAR_9 = -1;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_4[VAR_10][0] == VAR_7->width &&
    VAR_4[VAR_10][1] == VAR_7->height) {
   VAR_9 = VAR_10;
   break;
  }
 }


 if (VAR_9 < 0 || VAR_7->pixel_format != VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_7->index, VAR_9);
 if (!VAR_10)
  return -VAR_0;

 VAR_7->type = VAR_2;
 VAR_7->discrete.numerator = 1;
 VAR_7->discrete.denominator = VAR_10;

 return 0;
}

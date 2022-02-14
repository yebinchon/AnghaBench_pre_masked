
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; scalar_t__ pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ fourcc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
          struct v4l2_fmtdesc *VAR_7)
{
 int VAR_8 = VAR_7->index;

 if (VAR_8 >= FUNC_0(VAR_3))
  return -VAR_0;
 if (!VAR_4 && ((VAR_3[VAR_8].fourcc == VAR_1) ||
   (VAR_3[VAR_8].fourcc == VAR_2)))
  return -VAR_0;
 VAR_7->pixelformat = VAR_3[VAR_8].fourcc;
 return 0;
}

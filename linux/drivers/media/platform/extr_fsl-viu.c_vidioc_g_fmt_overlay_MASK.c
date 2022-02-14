
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viu_fh {int win; } ;
struct TYPE_2__ {int win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct viu_fh *VAR_3 = VAR_1;

 VAR_2->fmt.win = VAR_3->win;
 return 0;
}

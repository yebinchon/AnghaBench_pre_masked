
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct v4l2_format fmt; } ;
struct capture_priv {TYPE_1__ vdev; } ;


 struct capture_priv* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct capture_priv *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->vdev.fmt;

 return 0;
}

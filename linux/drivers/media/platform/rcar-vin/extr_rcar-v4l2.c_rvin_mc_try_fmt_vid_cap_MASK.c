
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct rvin_dev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct rvin_dev*,int *) ;
 struct rvin_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct rvin_dev *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, &VAR_2->fmt.pix);

 return 0;
}

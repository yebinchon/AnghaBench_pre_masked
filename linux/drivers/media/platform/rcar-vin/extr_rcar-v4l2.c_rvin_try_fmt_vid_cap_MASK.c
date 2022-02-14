
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct rvin_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvin_dev*,int ,int *,int *,int *) ;
 struct rvin_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct rvin_dev *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_4, VAR_0, &VAR_3->fmt.pix, ((void*)0),
          ((void*)0));
}

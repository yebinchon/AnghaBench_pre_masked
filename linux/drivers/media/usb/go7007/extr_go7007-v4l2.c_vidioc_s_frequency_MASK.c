
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; } ;
struct go7007 {int v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct v4l2_frequency const*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct go7007* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    const struct v4l2_frequency *VAR_5)
{
 struct go7007 *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->tuner)
  return -VAR_0;

 return FUNC_0(&VAR_6->v4l2_dev, VAR_2, VAR_1, VAR_5);
}

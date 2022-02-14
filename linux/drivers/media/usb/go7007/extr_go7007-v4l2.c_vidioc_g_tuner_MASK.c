
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int name; } ;
struct go7007 {int v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_tuner *VAR_5)
{
 struct go7007 *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5->index != 0)
  return -VAR_0;

 FUNC_1(VAR_5->name, "Tuner", sizeof(VAR_5->name));
 return FUNC_0(&VAR_6->v4l2_dev, VAR_2, VAR_1, VAR_5);
}

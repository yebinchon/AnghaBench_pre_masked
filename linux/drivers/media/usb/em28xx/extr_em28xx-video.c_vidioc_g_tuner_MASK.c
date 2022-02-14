
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int name; } ;
struct file {int dummy; } ;
struct em28xx {TYPE_1__* v4l2; } ;
struct TYPE_2__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_tuner*) ;
 struct em28xx* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
     struct v4l2_tuner *VAR_5)
{
 struct em28xx *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5->index != 0)
  return -VAR_0;

 FUNC_0(VAR_5->name, "Tuner", sizeof(VAR_5->name));

 FUNC_1(&VAR_6->v4l2->v4l2_dev, 0, VAR_2, VAR_1, VAR_5);
 return 0;
}

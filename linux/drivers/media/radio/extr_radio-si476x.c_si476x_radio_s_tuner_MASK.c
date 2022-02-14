
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; scalar_t__ audmode; } ;
struct si476x_radio {scalar_t__ audmode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct si476x_radio* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    const struct v4l2_tuner *VAR_5)
{
 struct si476x_radio *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->index != 0)
  return -VAR_0;

 if (VAR_5->audmode == VAR_1 ||
     VAR_5->audmode == VAR_2)
  VAR_6->audmode = VAR_5->audmode;
 else
  VAR_6->audmode = VAR_2;

 return 0;
}

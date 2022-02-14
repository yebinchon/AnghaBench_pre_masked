
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct v4l2_frequency {scalar_t__ tuner; int frequency; } const v4l2_frequency ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int frequency; int v4l2_dev; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_frequency const*) ;
 struct em28xx* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
         const struct v4l2_frequency *VAR_6)
{
 struct v4l2_frequency VAR_7 = *VAR_6;
 struct em28xx *VAR_8 = FUNC_1(VAR_4);
 struct em28xx_v4l2 *VAR_9 = VAR_8->v4l2;

 if (VAR_6->tuner != 0)
  return -VAR_0;

 FUNC_0(&VAR_9->v4l2_dev, 0, VAR_3, VAR_2, VAR_6);
 FUNC_0(&VAR_9->v4l2_dev, 0, VAR_3, VAR_1, &VAR_7);
 VAR_9->frequency = VAR_7.frequency;

 return 0;
}

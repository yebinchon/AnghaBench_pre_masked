
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ audmode; scalar_t__ index; } ;
struct pcm20 {scalar_t__ audmode; int aci; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct pcm20* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    const struct v4l2_tuner *VAR_6)
{
 struct pcm20 *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6->index)
  return -VAR_1;
 if (VAR_6->audmode > VAR_3)
  VAR_7->audmode = VAR_3;
 else
  VAR_7->audmode = VAR_6->audmode;
 FUNC_0(VAR_7->aci, VAR_0,
   VAR_7->audmode == VAR_2, -1);
 return 0;
}

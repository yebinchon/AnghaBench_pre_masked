
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct pcm20 {int freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct pcm20*,int ) ;
 int VAR_2 ;
 struct pcm20* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    const struct v4l2_frequency *VAR_5)
{
 struct pcm20 *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5->tuner != 0 || VAR_5->type != VAR_1)
  return -VAR_0;

 VAR_6->freq = FUNC_0(VAR_2, VAR_5->frequency, 87 * 16000U, 108 * 16000U);
 FUNC_1(VAR_6, VAR_6->freq);
 return 0;
}

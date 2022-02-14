
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {unsigned int frequency; scalar_t__ tuner; scalar_t__ type; } ;
struct tea5764_device {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (unsigned int,int,int) ;
 int FUNC_1 (struct tea5764_device*) ;
 int FUNC_2 (struct tea5764_device*) ;
 int FUNC_3 (struct tea5764_device*,unsigned int) ;
 struct tea5764_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
    const struct v4l2_frequency *VAR_7)
{
 struct tea5764_device *VAR_8 = FUNC_4(VAR_5);
 unsigned VAR_9 = VAR_7->frequency;

 if (VAR_7->tuner != 0 || VAR_7->type != VAR_4)
  return -VAR_0;
 if (VAR_9 == 0) {

  FUNC_1(VAR_8);





  return -VAR_0;
 }
 VAR_9 = FUNC_0(VAR_9, VAR_2 * VAR_3, VAR_1 * VAR_3);
 FUNC_2(VAR_8);
 FUNC_3(VAR_8, (VAR_9 * 125) / 2);
 return 0;
}

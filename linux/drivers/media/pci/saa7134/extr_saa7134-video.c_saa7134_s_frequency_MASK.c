
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; } ;
struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*,int ,int ,struct v4l2_frequency const*) ;
 int VAR_2 ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_3, void *VAR_4,
     const struct v4l2_frequency *VAR_5)
{
 struct saa7134_dev *VAR_6 = FUNC_2(VAR_3);

 if (0 != VAR_5->tuner)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_2, VAR_1, VAR_5);

 FUNC_0(VAR_6);
 return 0;
}

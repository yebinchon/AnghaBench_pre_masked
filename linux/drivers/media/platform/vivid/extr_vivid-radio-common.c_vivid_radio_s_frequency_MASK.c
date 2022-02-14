
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {int dummy; } ;
struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ,int,int ,int ) ;
 int VAR_8 ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (struct vivid_dev*) ;
 int FUNC_3 (struct vivid_dev*) ;

int FUNC_4(struct file *VAR_10, unsigned *VAR_11, const struct v4l2_frequency *VAR_12)
{
 struct vivid_dev *VAR_13 = FUNC_1(VAR_10);
 unsigned VAR_14;
 unsigned VAR_15;

 if (VAR_12->tuner != 0)
  return -VAR_4;

 if (VAR_12->frequency >= (VAR_5 + VAR_6) / 2)
  VAR_15 = VAR_2;
 else if (VAR_12->frequency <= (VAR_0 + VAR_7) / 2)
  VAR_15 = VAR_1;
 else
  VAR_15 = VAR_3;

 VAR_14 = FUNC_0(VAR_8, VAR_12->frequency, VAR_9[VAR_15].rangelow,
        VAR_9[VAR_15].rangehigh);
 *VAR_11 = VAR_14;






 FUNC_2(VAR_13);
 FUNC_3(VAR_13);
 return 0;
}

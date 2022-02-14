
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int capability; int signal; int rxsubchans; int audmode; int type; int name; } ;
struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ FUNC_0 (struct saa7134_dev*,int) ;
 int VAR_11 ;
 int FUNC_1 (struct v4l2_tuner*,int ,int) ;
 int FUNC_2 (struct saa7134_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct saa7134_dev*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_12 ;
 struct saa7134_dev* FUNC_7 (struct file*) ;

int FUNC_8(struct file *VAR_13, void *VAR_14,
     struct v4l2_tuner *VAR_15)
{
 struct saa7134_dev *VAR_16 = FUNC_7(VAR_13);
 int VAR_17;

 if (0 != VAR_15->index)
  return -VAR_0;
 FUNC_1(VAR_15, 0, sizeof(*VAR_15));
 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  if (FUNC_0(VAR_16, VAR_17).type == VAR_2 ||
      FUNC_0(VAR_16, VAR_17).type == VAR_3)
   break;
 }
 if (VAR_17 == VAR_1)
  return -VAR_0;
 if (FUNC_0(VAR_16, VAR_17).type != VAR_4) {
  FUNC_6(VAR_15->name, "Television", sizeof(VAR_15->name));
  VAR_15->type = VAR_6;
  FUNC_4(VAR_16, VAR_12, VAR_11, VAR_15);
  VAR_15->capability = VAR_9 |
   VAR_10 |
   VAR_7 |
   VAR_8;
  VAR_15->rxsubchans = FUNC_2(VAR_16);
  VAR_15->audmode = FUNC_3(VAR_15->rxsubchans);
 }
 if (0 != (FUNC_5(VAR_5) & 0x03))
  VAR_15->signal = 0xffff;
 return 0;
}

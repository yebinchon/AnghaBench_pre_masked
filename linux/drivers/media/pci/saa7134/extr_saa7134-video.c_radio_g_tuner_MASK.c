
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int audmode; int signal; int rxsubchans; int name; } ;
struct saa7134_dev {TYPE_1__* input; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ amux; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_7 ;
 struct saa7134_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9,
     struct v4l2_tuner *VAR_10)
{
 struct saa7134_dev *VAR_11 = FUNC_3(VAR_8);

 if (0 != VAR_10->index)
  return -VAR_0;

 FUNC_2(VAR_10->name, "Radio", sizeof(VAR_10->name));

 FUNC_0(VAR_11, VAR_7, VAR_6, VAR_10);
 VAR_10->audmode &= VAR_2 | VAR_3;
 if (VAR_11->input->amux == VAR_1) {
  VAR_10->signal = 0xf800 - ((FUNC_1(0x581) & 0x1f) << 11);
  VAR_10->rxsubchans = (FUNC_1(0x529) & 0x08) ?
    VAR_5 : VAR_4;
 }
 return 0;
}

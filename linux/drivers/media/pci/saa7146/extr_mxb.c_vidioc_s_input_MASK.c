
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {unsigned int cur_input; scalar_t__ cur_audinput; scalar_t__ cur_mute; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int hps_sync; int hps_source; } ;





 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct mxb*) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct mxb*,int ,int ,int,int ,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ,int ) ;
 int FUNC_5 (struct mxb*,int ,int ,int,int,int ) ;
 int FUNC_6 (struct mxb*,scalar_t__) ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static int FUNC_7(struct file *VAR_10, void *VAR_11, unsigned int VAR_12)
{
 struct saa7146_dev *VAR_13 = ((struct saa7146_fh *)VAR_11)->dev;
 struct mxb *VAR_14 = (struct mxb *)VAR_13->ext_priv;
 int VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_0("VIDIOC_S_INPUT %d\n", VAR_12);

 if (VAR_12 >= VAR_1)
  return -VAR_0;

 VAR_14->cur_input = VAR_12;

 FUNC_4(VAR_13, VAR_6[VAR_12].hps_source,
   VAR_6[VAR_12].hps_sync);



 switch (VAR_12) {
 case 128:
  VAR_16 = VAR_3;

  VAR_15 = FUNC_5(VAR_14, VAR_8, VAR_7, 3, 17, 0);


  if (!VAR_15)
   VAR_15 = FUNC_5(VAR_14, VAR_8, VAR_7, 3, 13, 0);
  break;
 case 129:


  VAR_16 = VAR_5;
  break;
 case 130:


  VAR_16 = VAR_4;
  break;
 case 131:
  VAR_16 = VAR_3;
  VAR_15 = FUNC_5(VAR_14, VAR_8, VAR_7, 1, 17, 0);
  break;
 }

 if (VAR_15)
  return VAR_15;


 if (FUNC_3(VAR_14, VAR_8, VAR_7, VAR_16, VAR_2, 0))
  FUNC_2("VIDIOC_S_INPUT: could not address saa7111a\n");

 VAR_14->cur_audinput = VAR_9[VAR_12];

 if (0 == VAR_14->cur_mute)
  FUNC_6(VAR_14, VAR_14->cur_audinput);
 if (VAR_14->cur_audinput == 0)
  FUNC_1(VAR_14);

 return 0;
}

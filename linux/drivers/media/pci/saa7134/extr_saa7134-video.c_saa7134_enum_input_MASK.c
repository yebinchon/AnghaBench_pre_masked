
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {unsigned int index; int std; int status; int type; int name; } ;
struct saa7134_dev {unsigned int ctl_input; } ;
struct file {int dummy; } ;
struct TYPE_2__ {size_t type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;


 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ FUNC_0 (struct saa7134_dev*,unsigned int) ;
 int * VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct saa7134_dev* FUNC_3 (struct file*) ;

int FUNC_4(struct file *VAR_12, void *VAR_13, struct v4l2_input *VAR_14)
{
 struct saa7134_dev *VAR_15 = FUNC_3(VAR_12);
 unsigned int VAR_16;

 VAR_16 = VAR_14->index;
 if (VAR_16 >= VAR_1)
  return -VAR_0;
 if (FUNC_0(VAR_15, VAR_14->index).type == VAR_3)
  return -VAR_0;
 VAR_14->index = VAR_16;
 FUNC_2(VAR_14->name, VAR_11[FUNC_0(VAR_15, VAR_16).type],
  sizeof(VAR_14->name));
 switch (FUNC_0(VAR_15, VAR_16).type) {
 case 129:
 case 128:
  VAR_14->type = VAR_7;
  break;
 default:
  VAR_14->type = VAR_6;
  break;
 }
 if (VAR_16 == VAR_15->ctl_input) {
  int VAR_17 = FUNC_1(VAR_4);
  int VAR_18 = FUNC_1(VAR_5);

  if (0 != (VAR_17 & 0x40))
   VAR_14->status |= VAR_9;
  if (0 != (VAR_18 & 0x40))
   VAR_14->status |= VAR_10;
  if (0 != (VAR_18 & 0x0e))
   VAR_14->status |= VAR_8;
 }
 VAR_14->std = VAR_2;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_fh {int dummy; } ;
struct saa7134_dev {int slock; struct v4l2_fh* overlay_owner; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 char* VAR_7 ;
 int FUNC_2 (struct saa7134_dev*,TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (struct saa7134_dev*) ;
 TYPE_1__* VAR_8 ;
 struct saa7134_dev* FUNC_7 (struct file*) ;

int FUNC_8(struct file *VAR_9, void *VAR_10, v4l2_std_id VAR_11)
{
 struct saa7134_dev *VAR_12 = FUNC_7(VAR_9);
 struct v4l2_fh *VAR_13 = VAR_10;
 unsigned long VAR_14;
 unsigned int VAR_15;
 v4l2_std_id VAR_16;

 if (FUNC_0(VAR_9) && VAR_12->overlay_owner) {


  return -VAR_0;
 }

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  if (VAR_11 == VAR_8[VAR_15].id)
   break;

 if (VAR_15 == VAR_2)
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
   if (VAR_11 & VAR_8[VAR_15].id)
    break;
 if (VAR_15 == VAR_2)
  return -VAR_1;

 if ((VAR_11 & VAR_3) && (VAR_7[0] != '-')) {
  if (VAR_7[0] == 'L' || VAR_7[0] == 'l') {
   if (VAR_7[1] == 'C' || VAR_7[1] == 'c')
    VAR_16 = VAR_6;
   else
    VAR_16 = VAR_5;
  } else {
   if (VAR_7[0] == 'D' || VAR_7[0] == 'd')
    VAR_16 = VAR_4;
   else
    VAR_16 = VAR_3;
  }
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   if (VAR_16 == VAR_8[VAR_15].id)
    break;
  }
  if (VAR_15 == VAR_2)
   return -VAR_1;
 }

 VAR_11 = VAR_8[VAR_15].id;

 if (!FUNC_0(VAR_9) && VAR_13 == VAR_12->overlay_owner) {
  FUNC_3(&VAR_12->slock, VAR_14);
  FUNC_6(VAR_12);
  FUNC_4(&VAR_12->slock, VAR_14);

  FUNC_2(VAR_12, &VAR_8[VAR_15]);

  FUNC_3(&VAR_12->slock, VAR_14);
  FUNC_5(VAR_12);
  FUNC_4(&VAR_12->slock, VAR_14);
 } else
  FUNC_2(VAR_12, &VAR_8[VAR_15]);

 FUNC_1(VAR_12);
 return 0;
}

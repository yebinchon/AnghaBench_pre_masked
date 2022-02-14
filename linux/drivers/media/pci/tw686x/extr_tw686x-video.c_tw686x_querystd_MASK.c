
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tw686x_video_channel {size_t ch; int vidq; struct tw686x_dev* dev; } ;
struct tw686x_dev {int dummy; } ;
struct file {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct tw686x_dev*,int ) ;
 int FUNC_4 (struct tw686x_dev*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;
 struct tw686x_video_channel* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_11, void *VAR_12, v4l2_std_id *VAR_13)
{
 struct tw686x_video_channel *VAR_14 = FUNC_7(VAR_11);
 struct tw686x_dev *VAR_15 = VAR_14->dev;
 unsigned int VAR_16, VAR_17 = 0;
 unsigned long VAR_18;

 if (FUNC_6(&VAR_14->vidq))
  return -VAR_0;


 VAR_16 = FUNC_3(VAR_15, VAR_1[VAR_14->ch]);
 FUNC_4(VAR_15, VAR_1[VAR_14->ch], 0x7);
 FUNC_4(VAR_15, VAR_2[VAR_14->ch], 0xff);

 VAR_18 = VAR_10 + FUNC_1(500);
 while (FUNC_5(VAR_18)) {

  VAR_17 = FUNC_3(VAR_15, VAR_1[VAR_14->ch]);
  if (!(VAR_17 & FUNC_0(7)))
   break;
  FUNC_2(100);
 }
 FUNC_4(VAR_15, VAR_1[VAR_14->ch], VAR_16);


 if (VAR_17 & FUNC_0(7))
  return 0;

 VAR_17 = (VAR_17 >> 4) & 0x7;
 switch (VAR_17) {
 case 133:
  *VAR_13 &= VAR_3;
  break;
 case 134:
  *VAR_13 &= VAR_4;
  break;
 case 129:
  *VAR_13 &= VAR_7;
  break;
 case 131:
  *VAR_13 &= VAR_6;
  break;
 case 132:
  *VAR_13 &= VAR_5;
  break;
 case 130:
  *VAR_13 &= VAR_8;
  break;
 case 128:
  *VAR_13 &= VAR_9;
  break;
 default:
  *VAR_13 = 0;
 }
 return 0;
}

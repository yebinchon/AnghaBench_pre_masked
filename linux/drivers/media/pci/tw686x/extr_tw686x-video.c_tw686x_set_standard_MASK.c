
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct tw686x_video_channel {int video_standard; size_t ch; int dev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tw686x_video_channel *VAR_12, v4l2_std_id VAR_13)
{
 u32 VAR_14;

 if (VAR_13 & VAR_4)
  VAR_14 = 0;
 else if (VAR_13 & VAR_6)
  VAR_14 = 1;
 else if (VAR_13 & VAR_10)
  VAR_14 = 2;
 else if (VAR_13 & VAR_5)
  VAR_14 = 3;
 else if (VAR_13 & VAR_8)
  VAR_14 = 4;
 else if (VAR_13 & VAR_9)
  VAR_14 = 5;
 else if (VAR_13 & VAR_7)
  VAR_14 = 6;
 else
  return -VAR_0;

 VAR_12->video_standard = VAR_13;
 FUNC_1(VAR_12->dev, VAR_1[VAR_12->ch], VAR_14);

 VAR_14 = FUNC_0(VAR_12->dev, VAR_11);
 if (VAR_13 & VAR_3)
  VAR_14 &= ~(1 << (VAR_2 + VAR_12->ch));
 else
  VAR_14 |= (1 << (VAR_2 + VAR_12->ch));
 FUNC_1(VAR_12->dev, VAR_11, VAR_14);

 return 0;
}

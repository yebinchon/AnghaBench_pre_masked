
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int,int*) ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct v4l2_subdev *VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7,
       int VAR_8)
{
 int VAR_9 = VAR_8 < 0 ? VAR_1 : VAR_8;
 unsigned long VAR_10 = VAR_3 + FUNC_1(VAR_9);
 u8 VAR_11;

 do {
  int VAR_12 = FUNC_0(VAR_4, VAR_5, &VAR_11);

  if (VAR_12 < 0 && !(VAR_7 & VAR_2))
   return VAR_12;
  if (!VAR_12 && (VAR_11 & VAR_7 & 0xff) == (VAR_6 & 0xff))
   return 0;
  FUNC_3(100, 250);
 } while (VAR_9 > 0 && FUNC_2(VAR_10));

 return -VAR_0;
}

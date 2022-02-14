
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct bt819 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bt819*,int) ;
 int VAR_5 ;
 struct bt819* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6, u32 *VAR_7, v4l2_std_id *VAR_8)
{
 struct bt819 *VAR_9 = FUNC_1(VAR_6);
 int VAR_10 = FUNC_0(VAR_9, 0x00);
 int VAR_11 = VAR_0;
 v4l2_std_id VAR_12 = VAR_8 ? *VAR_8 : VAR_1;

 if ((VAR_10 & 0x80))
  VAR_11 = 0;
 else
  VAR_12 = VAR_4;

 if ((VAR_10 & 0x10))
  VAR_12 &= VAR_3;
 else
  VAR_12 &= VAR_2;
 if (VAR_8)
  *VAR_8 = VAR_12;
 if (VAR_7)
  *VAR_7 = VAR_11;

 FUNC_2(1, VAR_5, VAR_6, "get status %x\n", VAR_10);
 return 0;
}

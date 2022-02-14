
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned char VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_0(VAR_5, VAR_3, &VAR_8) +
  FUNC_0(VAR_5, VAR_4, &VAR_9) +
  FUNC_0(VAR_5, VAR_2, &VAR_11);
 if (VAR_7)
  return VAR_7;

 VAR_8 = (VAR_8 & 0xfc) | (VAR_6 & 0x03);
 VAR_10 = (VAR_6 >> 2) & 0xff;
 VAR_11 = (VAR_11 & 0xc0) | ((VAR_6 >> 10) & 0x3f);
 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_8) +
  FUNC_1(VAR_5, VAR_1, VAR_10) +
  FUNC_1(VAR_5, VAR_2, VAR_11);

 if (VAR_7 == 0)
  VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_9 & ~VAR_0);
 return VAR_7;
}

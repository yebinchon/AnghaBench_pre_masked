
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_mbus_framefmt {int code; int width; int height; } ;
struct camif_dev {int dev; struct v4l2_mbus_framefmt mbus_fmt; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct camif_dev*,int ) ;
 int FUNC_2 (struct camif_dev*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int** VAR_3 ;

void FUNC_4(struct camif_dev *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 = &VAR_4->mbus_fmt;
 int VAR_6;
 u32 VAR_7;

 for (VAR_6 = FUNC_0(VAR_3) - 1; VAR_6 >= 0; VAR_6--) {
  if (VAR_3[VAR_6][0] == VAR_5->code)
   break;
 }
 if (VAR_6 < 0) {
  VAR_6 = 0;
  FUNC_3(VAR_4->dev,
   "Unsupported pixel code, falling back to %#08x\n",
   VAR_3[VAR_6][0]);
 }

 VAR_7 = FUNC_1(VAR_4, VAR_2);
 VAR_7 &= ~(VAR_0 | VAR_1);
 VAR_7 |= (VAR_5->width << 16) | VAR_5->height;
 VAR_7 |= VAR_3[VAR_6][1];
 FUNC_2(VAR_4, VAR_2, VAR_7);
}

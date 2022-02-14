
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa7110 {scalar_t__ input; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;
 struct saa7110* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
        u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct saa7110 *VAR_7 = FUNC_1(VAR_3);

 if (VAR_4 >= VAR_1) {
  FUNC_2(1, VAR_2, VAR_3, "input=%d not available\n", VAR_4);
  return -VAR_0;
 }
 if (VAR_7->input != VAR_4) {
  FUNC_0(VAR_3, VAR_4);
  FUNC_2(1, VAR_2, VAR_3, "switched to input=%d\n", VAR_4);
 }
 return 0;
}

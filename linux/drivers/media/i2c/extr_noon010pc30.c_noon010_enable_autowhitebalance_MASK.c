
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, FUNC_0(1), VAR_1 ? 0x2E : 0x2F);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, FUNC_0(0), VAR_1 ? 0xFB : 0x7B);
 return VAR_2;
}

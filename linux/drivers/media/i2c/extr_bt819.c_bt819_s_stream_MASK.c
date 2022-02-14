
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct bt819 {int enable; } ;


 int FUNC_0 (struct bt819*,int,int,int) ;
 int VAR_0 ;
 struct bt819* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct bt819 *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(1, VAR_0, VAR_1, "enable output %x\n", VAR_2);

 if (VAR_3->enable != VAR_2) {
  VAR_3->enable = VAR_2;
  FUNC_0(VAR_3, 0x16, 7, !VAR_2);
 }
 return 0;
}

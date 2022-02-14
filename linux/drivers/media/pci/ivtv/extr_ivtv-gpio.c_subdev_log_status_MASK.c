
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct ivtv {int hdl_gpio; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct ivtv* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3)
{
 struct ivtv *VAR_4 = FUNC_2(VAR_3);

 FUNC_0("GPIO status: DIR=0x%04x OUT=0x%04x IN=0x%04x\n",
   FUNC_1(VAR_0), FUNC_1(VAR_2),
   FUNC_1(VAR_1));
 FUNC_3(&VAR_4->hdl_gpio, VAR_3->name);
 return 0;
}

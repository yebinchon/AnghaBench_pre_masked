
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7393_state {int std; int output; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ) ;
 struct adv7393_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2)
{
 struct adv7393_state *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5 += 2) {

  VAR_4 = FUNC_3(VAR_2, VAR_1[VAR_5],
     VAR_1[VAR_5+1]);
  if (VAR_4) {
   FUNC_5(VAR_2, "Error initializing\n");
   return VAR_4;
  }
 }


 VAR_4 = FUNC_1(VAR_2, VAR_3->output);
 if (VAR_4 < 0) {
  FUNC_5(VAR_2, "Error setting output during init\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_2, VAR_3->std);
 if (VAR_4 < 0) {
  FUNC_5(VAR_2, "Error setting std during init\n");
  return -VAR_0;
 }

 return VAR_4;
}

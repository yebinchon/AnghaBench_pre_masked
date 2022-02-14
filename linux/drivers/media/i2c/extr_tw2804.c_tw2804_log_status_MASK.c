
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tw2804 {int norm; char* channel; char* input; } ;


 int VAR_0 ;
 struct tw2804* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1)
{
 struct tw2804 *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, "Standard: %s\n",
   VAR_2->norm & VAR_0 ? "60 Hz" : "50 Hz");
 FUNC_2(VAR_1, "Channel: %d\n", VAR_2->channel);
 FUNC_2(VAR_1, "Input: %d\n", VAR_2->input);
 return FUNC_1(VAR_1);
}

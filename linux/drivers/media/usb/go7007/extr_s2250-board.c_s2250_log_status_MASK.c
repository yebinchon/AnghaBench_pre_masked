
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s2250 {scalar_t__ std; int input; int audio_input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct s2250* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3)
{
 struct s2250 *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_3, "Standard: %s\n", VAR_4->std == VAR_0 ? "NTSC" :
     VAR_4->std == VAR_1 ? "PAL" :
     VAR_4->std == VAR_2 ? "SECAM" :
     "unknown");
 FUNC_2(VAR_3, "Input: %s\n", VAR_4->input == 0 ? "Composite" :
     VAR_4->input == 1 ? "S-video" :
     "error");
 FUNC_2(VAR_3, "Audio input: %s\n", VAR_4->audio_input == 0 ? "Line In" :
     VAR_4->audio_input == 1 ? "Mic" :
     VAR_4->audio_input == 2 ? "Mic Boost" :
     "error");
 return FUNC_1(VAR_3);
}

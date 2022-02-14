
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7127_state {int std; size_t output_type; size_t wss_mode; scalar_t__ cc_enable; scalar_t__ vps_enable; scalar_t__ wss_enable; scalar_t__ video_enable; scalar_t__ input_type; } ;


 int VAR_0 ;
 char** VAR_1 ;
 struct saa7127_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,char*,char*) ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3)
{
 struct saa7127_state *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3, "Standard: %s\n", (VAR_4->std & VAR_0) ? "60 Hz" : "50 Hz");
 FUNC_1(VAR_3, "Input:    %s\n", VAR_4->input_type ? "color bars" : "normal");
 FUNC_1(VAR_3, "Output:   %s\n", VAR_4->video_enable ?
   VAR_1[VAR_4->output_type] : "disabled");
 FUNC_1(VAR_3, "WSS:      %s\n", VAR_4->wss_enable ?
   VAR_2[VAR_4->wss_mode] : "disabled");
 FUNC_1(VAR_3, "VPS:      %s\n", VAR_4->vps_enable ? "enabled" : "disabled");
 FUNC_1(VAR_3, "CC:       %s\n", VAR_4->cc_enable ? "enabled" : "disabled");
 return 0;
}

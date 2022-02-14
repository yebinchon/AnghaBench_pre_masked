
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct saa717x_state {int tuner_audio_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct saa717x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5, const struct v4l2_tuner *VAR_6)
{
 struct saa717x_state *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;
 char *VAR_9[4] = {
  "MONO", "STEREO", "LANG1", "LANG2/SAP"
 };

 VAR_8 = VAR_3;

 switch (VAR_6->audmode) {
  case 129:
   VAR_8 = VAR_2;
   break;
  case 128:
   VAR_8 = VAR_3;
   break;
  case 130:
   VAR_8 = VAR_1;
   break;
  case 131:
   VAR_8 = VAR_0;
   break;
 }

 FUNC_2(1, VAR_4, VAR_5, "change audio mode to %s\n",
   VAR_9[VAR_8]);
 VAR_7->tuner_audio_mode = VAR_8;


 FUNC_0(VAR_5, VAR_7->tuner_audio_mode);
 return 0;
}

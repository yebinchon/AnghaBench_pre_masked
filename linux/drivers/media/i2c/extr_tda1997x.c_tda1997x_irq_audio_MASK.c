
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int audio_samplerate; size_t audio_type; int client; struct v4l2_subdev sd; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct tda1997x_state *VAR_18, u8 *VAR_19)
{
 struct v4l2_subdev *VAR_20 = &VAR_18->sd;
 u8 VAR_21, VAR_22;

 VAR_22 = FUNC_1(VAR_20, VAR_15);
 FUNC_2(VAR_20, VAR_15, VAR_22);


 if (VAR_22 & VAR_8 ||
     VAR_22 & VAR_9) {

  VAR_21 = FUNC_1(VAR_20, VAR_16);
  if ((VAR_21 & VAR_11) == VAR_4) {
   VAR_21 = FUNC_1(VAR_20, VAR_14);
   VAR_21 |= VAR_10;
   FUNC_2(VAR_20, VAR_14, VAR_21);
   VAR_21 &= ~VAR_10;
   FUNC_2(VAR_20, VAR_14, VAR_21);

   VAR_22 &= ~(VAR_7);
  }
 }
 if (VAR_22 & VAR_6) {
  static const int VAR_23[] = {
   0, 32000, 44100, 48000, 88200, 96000, 176400, 192000
  };

  VAR_21 = FUNC_1(VAR_20, VAR_13);
  VAR_18->audio_samplerate = VAR_23[VAR_21 & 7];
  FUNC_3(VAR_18->client, "Audio Frequency Change: %dHz\n",
    VAR_18->audio_samplerate);
 }
 if (VAR_22 & VAR_5) {
  VAR_21 = FUNC_1(VAR_20, VAR_12);
  if (VAR_21 & FUNC_0(VAR_0))
   VAR_18->audio_type = VAR_0;
  if (VAR_21 & FUNC_0(VAR_2))
   VAR_18->audio_type = VAR_2;
  if (VAR_21 & FUNC_0(VAR_1))
   VAR_18->audio_type = VAR_1;
  if (VAR_21 & FUNC_0(VAR_3))
   VAR_18->audio_type = VAR_3;
  FUNC_3(VAR_18->client, "Audio Type: %s\n",
    VAR_17[VAR_18->audio_type]);
 }
}

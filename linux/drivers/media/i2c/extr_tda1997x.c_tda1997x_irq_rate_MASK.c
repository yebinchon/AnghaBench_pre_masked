
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int activity_status; scalar_t__ chip_revision; int* input_detect; int client; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct tda1997x_state*) ;
 int FUNC_4 (struct v4l2_subdev*,int *) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct tda1997x_state *VAR_7, u8 *VAR_8)
{
 struct v4l2_subdev *VAR_9 = &VAR_7->sd;
 u8 VAR_10, VAR_11;

 u8 VAR_12;

 VAR_11 = FUNC_0(VAR_9, VAR_4);
 FUNC_1(VAR_9, VAR_4, VAR_11);


 VAR_12 = FUNC_2(VAR_9);





 VAR_10 = VAR_11;
 while (VAR_10 != 0) {
  VAR_12 = FUNC_2(VAR_9);
  VAR_10 = FUNC_0(VAR_9, VAR_4);
  FUNC_1(VAR_9, VAR_4, VAR_10);
  VAR_11 |= VAR_10;
 }


 if (VAR_11 & (VAR_0 | VAR_1)) {
  int VAR_13 = (VAR_11 & VAR_0)?0:1;
  u8 VAR_14 = 1<<VAR_13;


  if ((VAR_12 & VAR_14) != (VAR_7->activity_status & VAR_14)) {

   if ((VAR_12 & VAR_14) == 0) {
    FUNC_5(VAR_7->client,
      "HDMI-%c: Digital Activity Lost\n",
      VAR_13+'A');


    VAR_10 = FUNC_0(VAR_9, VAR_5);
    VAR_10 &= ~VAR_3;
    VAR_10 &= ~VAR_2;
    FUNC_1(VAR_9, VAR_5, VAR_10);

    if (VAR_7->chip_revision == 0)
     FUNC_3(VAR_7);

    VAR_7->input_detect[VAR_13] = 0;
    FUNC_4(VAR_9, &VAR_6);
   }


   else {
    FUNC_5(VAR_7->client,
      "HDMI-%c: Digital Activity Detected\n",
      VAR_13+'A');
    VAR_7->input_detect[VAR_13] = 1;
   }


   VAR_7->activity_status = (VAR_12 & VAR_14);
  }
 }
}

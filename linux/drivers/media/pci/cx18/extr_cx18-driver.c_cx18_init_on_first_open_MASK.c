
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_frequency {int frequency; int type; scalar_t__ tuner; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int std; int active_input; int tuner_std; int sd_av; int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct cx18*) ;
 int FUNC_2 (int *,struct cx18_open_id*,struct v4l2_frequency*) ;
 int FUNC_3 (int *,struct cx18_open_id*,int) ;
 int FUNC_4 (int *,struct cx18_open_id*,int) ;
 int FUNC_5 (struct cx18*,int ,int,...) ;
 int VAR_13 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;

int FUNC_10(struct cx18 *VAR_14)
{
 int VAR_15;
 int VAR_16 = 3;
 struct v4l2_frequency VAR_17;
 struct cx18_open_id VAR_18;
 v4l2_std_id VAR_19;

 VAR_18.cx = VAR_14;

 if (FUNC_8(VAR_4, &VAR_14->i_flags))
  return -VAR_7;

 if (FUNC_7(VAR_5, &VAR_14->i_flags))
  return 0;

 while (--VAR_16 > 0) {

  if (FUNC_1(VAR_14) == 0)
   break;
  if (VAR_16 > 1)
   FUNC_0("Retry loading firmware\n");
 }

 if (VAR_16 == 0) {
  FUNC_6(VAR_4, &VAR_14->i_flags);
  return -VAR_7;
 }
 FUNC_6(VAR_6, &VAR_14->i_flags);
 FUNC_5(VAR_14, VAR_2, 2, VAR_0|0xb9, 0);
 FUNC_5(VAR_14, VAR_1, 0);
 FUNC_5(VAR_14, VAR_3, 1, VAR_0);

 VAR_16 = 3;
 while (--VAR_16 > 0) {

  if (FUNC_1(VAR_14) == 0)
   break;
  if (VAR_16 > 1)
   FUNC_0("Retry loading firmware\n");
 }

 if (VAR_16 == 0) {
  FUNC_6(VAR_4, &VAR_14->i_flags);
  return -VAR_7;
 }
 FUNC_5(VAR_14, VAR_2, 2, VAR_0|0xb9, 0);
 FUNC_5(VAR_14, VAR_1, 0);
 FUNC_5(VAR_14, VAR_3, 1, VAR_0);


 FUNC_9(VAR_14->sd_av, VAR_12, VAR_13);

 VAR_17.tuner = 0;
 VAR_17.type = VAR_11;
 VAR_17.frequency = 6400;



 if (VAR_14->std == VAR_10)
  VAR_17.frequency = 1460;
 else if (VAR_14->std & VAR_9)
  VAR_17.frequency = 1076;

 VAR_15 = VAR_14->active_input;
 VAR_14->active_input++;
 FUNC_3(((void*)0), &VAR_18, VAR_15);



 VAR_14->std++;
 VAR_19 = (VAR_14->tuner_std == VAR_8) ? VAR_9 : VAR_14->tuner_std;
 FUNC_4(((void*)0), &VAR_18, VAR_19);
 FUNC_2(((void*)0), &VAR_18, &VAR_17);
 return 0;
}

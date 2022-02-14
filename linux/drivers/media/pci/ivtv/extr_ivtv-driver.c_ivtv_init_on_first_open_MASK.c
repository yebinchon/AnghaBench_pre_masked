
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int frequency; int type; scalar_t__ tuner; } ;
struct ivtv_open_id {int type; struct ivtv* itv; } ;
struct ivtv {int std; int active_input; int std_out; int v4l2_cap; int cxhdl; int tuner_std; int has_cx23415; TYPE_1__* card; int sd_video; int i_flags; } ;
struct TYPE_2__ {int hw_all; int v4l2_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ivtv*,int ,int ,int ,int) ;
 int FUNC_4 (struct ivtv*,int) ;
 scalar_t__ FUNC_5 (struct ivtv*) ;
 int FUNC_6 (struct ivtv*) ;
 int FUNC_7 (struct ivtv*) ;
 int FUNC_8 (int *,struct ivtv_open_id*,struct v4l2_frequency*) ;
 int FUNC_9 (int *,struct ivtv_open_id*,int) ;
 int FUNC_10 (struct ivtv*,int ) ;
 int FUNC_11 (struct ivtv*,int ) ;
 int FUNC_12 (struct ivtv*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_17 (int,int ) ;

int FUNC_18(struct ivtv *VAR_17)
{
 struct v4l2_frequency VAR_18;

 struct ivtv_open_id VAR_19;
 int VAR_20 = 3;
 int VAR_21;

 VAR_19.itv = VAR_17;
 VAR_19.type = VAR_1;

 if (FUNC_15(VAR_2, &VAR_17->i_flags))
  return -VAR_0;

 if (FUNC_14(VAR_3, &VAR_17->i_flags))
  return 0;

 while (--VAR_20 > 0) {

  if (FUNC_5(VAR_17) == 0)
   break;
  if (VAR_20 > 1)
   FUNC_1("Retry loading firmware\n");
 }

 if (VAR_20 == 0) {
  FUNC_13(VAR_2, &VAR_17->i_flags);
  return -VAR_0;
 }


 FUNC_0("Getting firmware version..\n");
 FUNC_6(VAR_17);

 if (VAR_17->card->hw_all & VAR_4)
  FUNC_16(VAR_17->sd_video, VAR_13, VAR_14);

 VAR_18.tuner = 0;
 VAR_18.type = VAR_12;
 VAR_18.frequency = 6400;



 if (VAR_17->std == VAR_11) {
  VAR_18.frequency = 1460;
 }
 else if (VAR_17->std & VAR_10) {
  VAR_18.frequency = 1076;
 }

 VAR_21 = VAR_17->active_input;
 VAR_17->active_input++;
 FUNC_9(((void*)0), &VAR_19, VAR_21);



 VAR_17->std++;
 VAR_17->std_out = VAR_17->std;
 FUNC_8(((void*)0), &VAR_19, &VAR_18);

 if (VAR_17->card->v4l2_capabilities & VAR_9) {



  FUNC_3(VAR_17, VAR_5, VAR_16, VAR_15, 1);
  FUNC_7(VAR_17);
 }


 if (!VAR_17->has_cx23415)
  FUNC_17(0x03, VAR_8);

 FUNC_11(VAR_17, VAR_17->tuner_std);






 if (VAR_17->v4l2_cap & VAR_9) {
  FUNC_4(VAR_17, VAR_7 | VAR_6);
  FUNC_12(VAR_17);
  FUNC_10(VAR_17, VAR_17->tuner_std);
 } else {
  FUNC_4(VAR_17, VAR_7);
 }


 FUNC_2(&VAR_17->cxhdl);
 return 0;
}

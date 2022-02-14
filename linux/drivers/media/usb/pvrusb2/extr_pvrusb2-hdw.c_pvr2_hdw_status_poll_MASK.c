
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int rangehigh; int rangelow; int capability; int rxsubchans; int signal; int type; } ;
struct pvr2_hdw {scalar_t__ input_val; scalar_t__ cropcap_stale; int v4l2_dev; scalar_t__ tuner_signal_stale; struct v4l2_tuner tuner_signal_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_tuner*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_tuner*) ;

void FUNC_3(struct pvr2_hdw *VAR_6)
{
 struct v4l2_tuner *VAR_7 = &VAR_6->tuner_signal_info;
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->type = (VAR_6->input_val == VAR_0) ?
  VAR_3 : VAR_2;
 VAR_6->tuner_signal_stale = 0;




 FUNC_2(&VAR_6->v4l2_dev, 0, VAR_5, VAR_4, VAR_7);
 FUNC_1(VAR_1, "subdev status poll type=%u strength=%u audio=0x%x cap=0x%x low=%u hi=%u",
     VAR_7->type,
     VAR_7->signal, VAR_7->rxsubchans, VAR_7->capability,
     VAR_7->rangelow, VAR_7->rangehigh);



 VAR_6->cropcap_stale = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int flag_decoder_missed; scalar_t__ decoder_client_id; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int ,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct pvr2_hdw *VAR_6,int VAR_7)
{




 FUNC_0(VAR_1, "subdev v4l2 stream=%s",
     (VAR_7 ? "on" : "off"));
 FUNC_2(&VAR_6->v4l2_dev, 0, VAR_5, VAR_4, VAR_7);
 FUNC_2(&VAR_6->v4l2_dev, 0, VAR_3, VAR_4, VAR_7);
 if (VAR_6->decoder_client_id) {



  return 0;
 }
 if (!VAR_6->flag_decoder_missed) {
  FUNC_0(VAR_2,
      "***WARNING*** No decoder present");
  VAR_6->flag_decoder_missed = !0;
  FUNC_1("flag_decoder_missed",
       VAR_6->flag_decoder_missed);
 }
 return -VAR_0;
}

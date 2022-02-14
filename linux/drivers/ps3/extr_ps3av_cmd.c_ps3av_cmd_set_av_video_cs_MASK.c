
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ps3av_pkt_av_video_cs {int avport; int aspect; int dither; int super_white; int bitlen_out; void* av_cs_in; void* av_cs_out; int av_vid; int send_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ps3av_pkt_av_video_cs*,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int) ;

u32 FUNC_6(void *VAR_11, u32 VAR_12, int VAR_13, int VAR_14,
         int VAR_15, u32 VAR_16)
{
 struct ps3av_pkt_av_video_cs *VAR_17;

 VAR_17 = (struct ps3av_pkt_av_video_cs *)VAR_11;
 if (VAR_13 == -1)
  VAR_13 = VAR_8;
 if (VAR_14 == -1)
  VAR_14 = VAR_7;
 if (VAR_15 == -1)
  VAR_15 = 0;

 FUNC_0(VAR_17, 0, sizeof(*VAR_17));
 FUNC_4(VAR_0, sizeof(*VAR_17),
        &VAR_17->send_hdr);
 VAR_17->avport = VAR_12;

 VAR_17->av_vid = FUNC_5(VAR_13);
 VAR_17->av_cs_out = FUNC_1(VAR_14);

 VAR_17->av_cs_in = FUNC_1(VAR_6);
 VAR_17->bitlen_out = FUNC_2(VAR_14);
 if ((VAR_16 & VAR_10) && FUNC_3())
  VAR_17->super_white = VAR_5;
 else
  VAR_17->super_white = VAR_4;
 VAR_17->aspect = VAR_15;
 if (VAR_16 & VAR_9) {
  VAR_17->dither = VAR_3
      | VAR_1;
 } else {

  VAR_17->dither = VAR_2;
 }

 return sizeof(*VAR_17);
}

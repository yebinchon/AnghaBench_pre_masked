
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3av_pkt_av_get_hw_conf {int num_of_hdmi; int num_of_avmulti; int num_of_spdif; } ;
struct ps3av {int audio_port; void** av_port; void** opt_port; scalar_t__* head; struct ps3av_pkt_av_get_hw_conf av_hw_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ps3av_pkt_av_get_hw_conf*) ;

__attribute__((used)) static int FUNC_2(struct ps3av *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 const struct ps3av_pkt_av_get_hw_conf *VAR_16;


 VAR_15 = FUNC_1(&VAR_11->av_hw_conf);
 if (VAR_15 < 0)
  return -1;

 VAR_16 = &VAR_11->av_hw_conf;
 FUNC_0("av_h_conf: num of hdmi: %u\n", VAR_16->num_of_hdmi);
 FUNC_0("av_h_conf: num of avmulti: %u\n", VAR_16->num_of_avmulti);
 FUNC_0("av_h_conf: num of spdif: %u\n", VAR_16->num_of_spdif);

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  VAR_11->head[VAR_12] = VAR_8 + VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  VAR_11->opt_port[VAR_12] = VAR_7 + VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_16->num_of_hdmi; VAR_12++)
  VAR_11->av_port[VAR_12] = VAR_6 + VAR_12;
 for (VAR_13 = 0; VAR_13 < VAR_16->num_of_avmulti; VAR_13++)
  VAR_11->av_port[VAR_12 + VAR_13] = VAR_5 + VAR_13;
 for (VAR_14 = 0; VAR_14 < VAR_16->num_of_spdif; VAR_14++)
  VAR_11->av_port[VAR_12 + VAR_13 + VAR_14] = VAR_7 + VAR_14;


 VAR_11->audio_port = VAR_1
     | VAR_2
     | VAR_0
     | VAR_3 | VAR_4;

 return 0;
}

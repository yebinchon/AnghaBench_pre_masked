
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct go7007_board_info {int dummy; } ;
struct go7007 {int tuner_type; int bitrate; int fps_scale; scalar_t__ audio_enabled; int * audio_deliver; scalar_t__* modet_map; TYPE_1__* modet; scalar_t__ interlace_coding; scalar_t__ dvd_mode; scalar_t__ gop_header_enable; scalar_t__ seq_header_enable; scalar_t__ repeat_seqhead; scalar_t__ closed_gop; scalar_t__ ipb; scalar_t__ gop_size; int aspect_ratio; scalar_t__ pali; int format; scalar_t__ encoder_subsample; scalar_t__ encoder_v_halve; scalar_t__ encoder_h_halve; scalar_t__ input; int interrupt_waitq; scalar_t__ interrupt_available; scalar_t__ i2c_adapter_online; int i2c_adapter; int status; int spinlock; int frame_waitq; int hw_lock; scalar_t__* name; scalar_t__ channel_number; scalar_t__ board_id; struct go7007_board_info const* board_info; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (int *) ;
 struct go7007* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct go7007 *FUNC_6(const struct go7007_board_info *VAR_4,
      struct device *VAR_5)
{
 struct go7007 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(struct go7007), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->dev = VAR_5;
 VAR_6->board_info = VAR_4;
 VAR_6->board_id = 0;
 VAR_6->tuner_type = -1;
 VAR_6->channel_number = 0;
 VAR_6->name[0] = 0;
 FUNC_4(&VAR_6->hw_lock);
 FUNC_1(&VAR_6->frame_waitq);
 FUNC_5(&VAR_6->spinlock);
 VAR_6->status = VAR_2;
 FUNC_3(&VAR_6->i2c_adapter, 0, sizeof(VAR_6->i2c_adapter));
 VAR_6->i2c_adapter_online = 0;
 VAR_6->interrupt_available = 0;
 FUNC_1(&VAR_6->interrupt_waitq);
 VAR_6->input = 0;
 FUNC_0(VAR_6);
 VAR_6->encoder_h_halve = 0;
 VAR_6->encoder_v_halve = 0;
 VAR_6->encoder_subsample = 0;
 VAR_6->format = VAR_3;
 VAR_6->bitrate = 1500000;
 VAR_6->fps_scale = 1;
 VAR_6->pali = 0;
 VAR_6->aspect_ratio = VAR_1;
 VAR_6->gop_size = 0;
 VAR_6->ipb = 0;
 VAR_6->closed_gop = 0;
 VAR_6->repeat_seqhead = 0;
 VAR_6->seq_header_enable = 0;
 VAR_6->gop_header_enable = 0;
 VAR_6->dvd_mode = 0;
 VAR_6->interlace_coding = 0;
 for (VAR_7 = 0; VAR_7 < 4; ++VAR_7)
  VAR_6->modet[VAR_7].enable = 0;
 for (VAR_7 = 0; VAR_7 < 1624; ++VAR_7)
  VAR_6->modet_map[VAR_7] = 0;
 VAR_6->audio_deliver = ((void*)0);
 VAR_6->audio_enabled = 0;

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_switch_channel {int channel_number; int switch_count; int mode; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int channel_switch_in_progress; struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int ) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_4 (struct cw1200_common*) ;

int FUNC_5(struct cw1200_common *VAR_3,
   const struct wsm_switch_channel *VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_3->wsm_cmd_buf;

 FUNC_2(VAR_3);

 FUNC_1(VAR_6, VAR_4->mode);
 FUNC_1(VAR_6, VAR_4->switch_count);
 FUNC_0(VAR_6, VAR_4->channel_number);

 VAR_3->channel_switch_in_progress = 1;

 VAR_5 = FUNC_3(VAR_3, VAR_6, ((void*)0),
      VAR_2, VAR_1);
 if (VAR_5)
  VAR_3->channel_switch_in_progress = 0;

 FUNC_4(VAR_3);
 return VAR_5;

nomem:
 FUNC_4(VAR_3);
 return -VAR_0;
}

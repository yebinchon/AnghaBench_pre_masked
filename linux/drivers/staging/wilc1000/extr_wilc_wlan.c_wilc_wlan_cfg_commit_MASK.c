
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wilc_vif {struct wilc* wilc; } ;
struct TYPE_2__ {char cmd_type; int seq_no; int driver_handler; int total_len; } ;
struct wilc_cfg_frame {TYPE_1__ hdr; } ;
struct wilc_cfg_cmd_hdr {int dummy; } ;
struct wilc {int cfg_frame_offset; int cfg_seq_no; struct wilc_cfg_frame cfg_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wilc_vif*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct wilc_vif *VAR_1, int VAR_2,
    u32 VAR_3)
{
 struct wilc *VAR_4 = VAR_1->wilc;
 struct wilc_cfg_frame *VAR_5 = &VAR_4->cfg_frame;
 int VAR_6 = VAR_4->cfg_frame_offset + sizeof(struct wilc_cfg_cmd_hdr);

 if (VAR_2 == VAR_0)
  VAR_5->hdr.cmd_type = 'W';
 else
  VAR_5->hdr.cmd_type = 'Q';

 VAR_5->hdr.seq_no = VAR_4->cfg_seq_no % 256;
 VAR_5->hdr.total_len = FUNC_0(VAR_6);
 VAR_5->hdr.driver_handler = FUNC_1(VAR_3);
 VAR_4->cfg_seq_no = VAR_5->hdr.seq_no;

 if (!FUNC_2(VAR_1, (u8 *)&VAR_5->hdr, VAR_6))
  return -1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_sglist {int buffer_len; } ;
struct ipr_ioa_cfg {scalar_t__ sis64; struct ipr_sglist* ucode_sglist; } ;
struct TYPE_3__ {int* cdb; int request_type; } ;
struct TYPE_4__ {TYPE_1__ cmd_pkt; int res_handle; } ;
struct ipr_cmnd {int job_step; TYPE_2__ ioarcb; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_cmnd*,struct ipr_sglist*) ;
 int FUNC_2 (struct ipr_cmnd*,struct ipr_sglist*) ;
 int FUNC_3 (struct ipr_cmnd*,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_13)
{
 struct ipr_ioa_cfg *VAR_14 = VAR_13->ioa_cfg;
 struct ipr_sglist *VAR_15 = VAR_14->ucode_sglist;

 VAR_0;
 VAR_13->job_step = VAR_9;

 if (!VAR_15)
  return VAR_2;

 VAR_13->ioarcb.res_handle = FUNC_0(VAR_1);
 VAR_13->ioarcb.cmd_pkt.request_type = VAR_4;
 VAR_13->ioarcb.cmd_pkt.cdb[0] = VAR_8;
 VAR_13->ioarcb.cmd_pkt.cdb[1] = VAR_6;
 VAR_13->ioarcb.cmd_pkt.cdb[6] = (VAR_15->buffer_len & 0xff0000) >> 16;
 VAR_13->ioarcb.cmd_pkt.cdb[7] = (VAR_15->buffer_len & 0x00ff00) >> 8;
 VAR_13->ioarcb.cmd_pkt.cdb[8] = VAR_15->buffer_len & 0x0000ff;

 if (VAR_14->sis64)
  FUNC_2(VAR_13, VAR_15);
 else
  FUNC_1(VAR_13, VAR_15);
 VAR_13->job_step = VAR_11;

 FUNC_3(VAR_13, VAR_10, VAR_12,
     VAR_5);

 VAR_7;
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cdb; } ;
struct ipr_ioarcb {TYPE_1__ cmd_pkt; } ;
struct ipr_ioa_cfg {TYPE_2__* vpd_cbs; } ;
struct ipr_inquiry_pageC4 {int* cache_cap; } ;
struct ipr_cmnd {int job_step_failed; int job_step; struct ipr_ioa_cfg* ioa_cfg; struct ipr_ioarcb ioarcb; } ;
struct TYPE_4__ {struct ipr_inquiry_pageC4 pageC4_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_cmnd*,int ,int ) ;
 int FUNC_2 (struct ipr_cmnd*,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct ipr_cmnd *VAR_12)
{
 struct ipr_ioarcb *VAR_13 = &VAR_12->ioarcb;
 struct ipr_ioa_cfg *VAR_14 = VAR_12->ioa_cfg;
 struct ipr_inquiry_pageC4 *VAR_15 = &VAR_14->vpd_cbs->pageC4_data;

 VAR_0;

 VAR_12->job_step = VAR_9;

 if (VAR_15->cache_cap[0] & VAR_1) {
  FUNC_1(VAR_12,
          FUNC_0(VAR_2),
          VAR_3);

  VAR_13->cmd_pkt.cdb[2] = 0x40;

  VAR_12->job_step_failed = VAR_8;
  FUNC_2(VAR_12, VAR_10, VAR_11,
      VAR_6);

  VAR_7;
  return VAR_5;
 }

 VAR_7;
 return VAR_4;
}

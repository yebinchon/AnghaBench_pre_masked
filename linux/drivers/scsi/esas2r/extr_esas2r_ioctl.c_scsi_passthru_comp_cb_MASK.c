
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int residual_length; int scsi_stat; } ;
struct TYPE_6__ {TYPE_2__ scsi_rsp; } ;
struct esas2r_request {int req_stat; int (* aux_req_cb ) (struct esas2r_adapter*,struct esas2r_request*) ;TYPE_3__ func_rsp; int sense_len; scalar_t__ aux_req_cx; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_hba_scsi_pass_thru {scalar_t__ target_id; int req_status; int residual_length; int sense_length; int scsi_status; } ;
struct TYPE_4__ {struct atto_hba_scsi_pass_thru scsi_pass_thru; } ;
struct atto_ioctl {TYPE_1__ data; } ;


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
 scalar_t__ FUNC_0 (struct esas2r_adapter*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;

__attribute__((used)) static void FUNC_3(struct esas2r_adapter *VAR_11,
      struct esas2r_request *VAR_12)
{
 struct atto_ioctl *VAR_13 = (struct atto_ioctl *)VAR_12->aux_req_cx;
 struct atto_hba_scsi_pass_thru *VAR_14 = &VAR_13->data.scsi_pass_thru;
 u8 VAR_15 = VAR_4;

 VAR_14->scsi_status = VAR_12->func_rsp.scsi_rsp.scsi_stat;
 VAR_14->sense_length = VAR_12->sense_len;
 VAR_14->residual_length =
  FUNC_1(VAR_12->func_rsp.scsi_rsp.residual_length);

 switch (VAR_12->req_stat) {
 case 130:
 case 133:
  VAR_15 = VAR_8;
  break;
 case 128:
  VAR_15 = VAR_10;
  break;
 case 135:
  VAR_15 = VAR_7;
  break;
 case 132:
 case 131:
  VAR_15 = VAR_5;
  break;
 case 136:
  VAR_15 = VAR_6;
  break;
 case 129:
  VAR_15 = VAR_9;
  break;
 case 137:
  VAR_15 = VAR_3;
  break;
 case 138:
  VAR_15 = VAR_1;
  break;
 case 139:
  VAR_15 = VAR_0;
  break;
 case 134:
  VAR_15 = VAR_2;
  break;
 }

 VAR_14->req_status = VAR_15;


 VAR_14->target_id =
  FUNC_0(VAR_11, (u16)VAR_14->target_id);


 (*VAR_12->aux_req_cb)(VAR_11, VAR_12);
}

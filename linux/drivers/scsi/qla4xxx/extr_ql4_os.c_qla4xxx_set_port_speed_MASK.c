
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int addl_fw_state; } ;
struct iscsi_cls_host {int port_speed; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_qla_host*) ;
 struct scsi_qla_host* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_5)
{
 struct scsi_qla_host *VAR_6 = FUNC_1(VAR_5);
 struct iscsi_cls_host *VAR_7 = VAR_5->shost_data;
 uint32_t VAR_8 = VAR_4;

 FUNC_0(VAR_6);

 switch (VAR_6->addl_fw_state & 0x0F00) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 131:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 case 130:
  VAR_8 = VAR_1;
  break;
 }
 VAR_7->port_speed = VAR_8;
}

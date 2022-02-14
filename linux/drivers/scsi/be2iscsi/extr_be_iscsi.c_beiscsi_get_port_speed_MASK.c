
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_host {int port_speed; } ;
struct beiscsi_hba {int port_speed; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct beiscsi_hba* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_7)
{
 struct beiscsi_hba *VAR_8 = FUNC_0(VAR_7);
 struct iscsi_cls_host *VAR_9 = VAR_7->shost_data;

 switch (VAR_8->port_speed) {
 case 131:
  VAR_9->port_speed = VAR_2;
  break;
 case 133:
  VAR_9->port_speed = VAR_0;
  break;
 case 130:
  VAR_9->port_speed = VAR_3;
  break;
 case 132:
  VAR_9->port_speed = VAR_1;
  break;
 case 129:
  VAR_9->port_speed = VAR_4;
  break;
 case 128:
  VAR_9->port_speed = VAR_5;
  break;
 default:
  VAR_9->port_speed = VAR_6;
 }
}

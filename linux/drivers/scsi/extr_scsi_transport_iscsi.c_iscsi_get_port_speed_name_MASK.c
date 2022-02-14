
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct iscsi_cls_host {int port_speed; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;
struct TYPE_3__ {int value; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

char *FUNC_1(struct Scsi_Host *VAR_1)
{
 int VAR_2;
 char *VAR_3 = "Unknown!";
 struct iscsi_cls_host *VAR_4 = VAR_1->shost_data;
 uint32_t VAR_5 = VAR_4->port_speed;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].value & VAR_5) {
   VAR_3 = VAR_0[VAR_2].name;
   break;
  }
 }
 return VAR_3;
}

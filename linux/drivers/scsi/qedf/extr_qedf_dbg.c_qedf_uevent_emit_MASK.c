
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {int host_no; TYPE_1__ shost_gendev; } ;
typedef int event_string ;


 int VAR_0 ;

 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(struct Scsi_Host *VAR_1, u32 VAR_2, char *VAR_3)
{
 char VAR_4[40];
 char *VAR_5[] = {VAR_4, ((void*)0)};

 FUNC_1(VAR_4, 0, sizeof(VAR_4));
 switch (VAR_2) {
 case 128:
  if (VAR_3)
   FUNC_3(VAR_4, VAR_3, sizeof(VAR_4));
  else
   FUNC_2(VAR_4, "GRCDUMP=%u", VAR_1->host_no);
  break;
 default:

  break;
 }

 FUNC_0(&VAR_1->shost_gendev.kobj, VAR_0, VAR_5);
}

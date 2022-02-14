
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* type; } ;
struct TYPE_7__ {TYPE_4__ scsi; } ;
struct powertec_info {scalar_t__ term_ctl; TYPE_1__* ec; TYPE_3__ info; } ;
struct Scsi_Host {TYPE_2__* hostt; scalar_t__ hostdata; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int slot_no; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,int,char*,char*) ;

const char *FUNC_1(struct Scsi_Host *VAR_1)
{
 struct powertec_info *VAR_2 = (struct powertec_info *)VAR_1->hostdata;
 static char VAR_3[150];

 FUNC_0(VAR_3, "%s (%s) in slot %d v%s terminators o%s",
  VAR_1->hostt->name, VAR_2->info.scsi.type, VAR_2->ec->slot_no,
  VAR_0, VAR_2->term_ctl ? "n" : "ff");

 return VAR_3;
}

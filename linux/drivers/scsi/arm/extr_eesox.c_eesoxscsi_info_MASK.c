
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* type; } ;
struct TYPE_8__ {TYPE_3__ scsi; } ;
struct eesoxscsi_info {int control; TYPE_1__* ec; TYPE_4__ info; } ;
struct Scsi_Host {TYPE_2__* hostt; scalar_t__ hostdata; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int slot_no; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*,int,char*,char*) ;

const char *FUNC_1(struct Scsi_Host *VAR_2)
{
 struct eesoxscsi_info *VAR_3 = (struct eesoxscsi_info *)VAR_2->hostdata;
 static char VAR_4[150];

 FUNC_0(VAR_4, "%s (%s) in slot %d v%s terminators o%s",
  VAR_2->hostt->name, VAR_3->info.scsi.type, VAR_3->ec->slot_no,
  VAR_1, VAR_3->control & VAR_0 ? "n" : "ff");

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* type; } ;
struct TYPE_7__ {TYPE_2__ scsi; } ;
struct arxescsi_info {TYPE_4__* ec; TYPE_3__ info; } ;
struct Scsi_Host {TYPE_1__* hostt; scalar_t__ hostdata; } ;
struct TYPE_8__ {int slot_no; } ;
struct TYPE_5__ {char* name; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,int,char*) ;

__attribute__((used)) static const char *FUNC_1(struct Scsi_Host *VAR_1)
{
 struct arxescsi_info *VAR_2 = (struct arxescsi_info *)VAR_1->hostdata;
 static char VAR_3[150];

 FUNC_0(VAR_3, "%s (%s) in slot %d v%s",
  VAR_1->hostt->name, VAR_2->info.scsi.type, VAR_2->ec->slot_no,
  VAR_0);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ScsiInqData {int Vers; int RDF; int Flags; } ;
struct DeviceCtlBlk {int dev_mode; int max_command; int sync_mode; TYPE_1__* acb; } ;
struct TYPE_2__ {int tag_max_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct DeviceCtlBlk *VAR_3, struct ScsiInqData *VAR_4)
{

 if ((VAR_4->Vers & 0x07) >= 2 || (VAR_4->RDF & 0x0F) == 2) {
  if ((VAR_4->Flags & VAR_2)
      && (VAR_3->dev_mode & VAR_1) &&



      !FUNC_0(((char *)VAR_4) + 8)) {
   if (VAR_3->max_command == 1)
    VAR_3->max_command =
        VAR_3->acb->tag_max_num;
   VAR_3->sync_mode |= VAR_0;

  } else
   VAR_3->max_command = 1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* handler; } ;
struct TYPE_2__ {int module; int name; int (* detach ) (struct scsi_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_1)
{
 VAR_1->handler->detach(VAR_1);
 FUNC_1(VAR_0, VAR_1, "%s: Detached\n", VAR_1->handler->name);
 FUNC_0(VAR_1->handler->module);
}

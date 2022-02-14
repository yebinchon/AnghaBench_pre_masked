
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_inq {int dummy; } ;
struct TYPE_2__ {int * serial; } ;
struct aac_dev {TYPE_1__ adapter_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_0, void *VAR_1, int VAR_2)
{



 return FUNC_1((char *)(VAR_1), sizeof(struct scsi_inq) - 4, "%08X%02X",
   FUNC_0(VAR_0->adapter_info.serial[0]), VAR_2);
}

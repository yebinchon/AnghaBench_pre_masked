
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct se_cmd {int scsi_asc; int scsi_ascq; TYPE_1__* se_tfo; } ;
struct TYPE_2__ {int fabric_name; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct se_cmd *VAR_0, u8 VAR_1)
{





 FUNC_0("[%s]: ALUA TG Port not available, "
  "SenseKey: NOT_READY, ASC/ASCQ: "
  "0x04/0x%02x\n",
  VAR_0->se_tfo->fabric_name, VAR_1);

 VAR_0->scsi_asc = 0x04;
 VAR_0->scsi_ascq = VAR_1;
}

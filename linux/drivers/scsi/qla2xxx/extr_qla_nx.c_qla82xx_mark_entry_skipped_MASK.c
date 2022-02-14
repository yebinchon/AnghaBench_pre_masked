
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int scsi_qla_host_t ;
struct TYPE_4__ {int entry_capture_mask; int driver_flags; } ;
struct TYPE_5__ {TYPE_1__ d_ctrl; int entry_type; } ;
typedef TYPE_2__ qla82xx_md_entry_hdr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,char*,int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(scsi_qla_host_t *VAR_2,
 qla82xx_md_entry_hdr_t *VAR_3, int VAR_4)
{
 VAR_3->d_ctrl.driver_flags |= VAR_0;
 FUNC_0(VAR_1, VAR_2, 0xb036,
     "Skipping entry[%d]: "
     "ETYPE[0x%x]-ELEVEL[0x%x]\n",
     VAR_4, VAR_3->entry_type,
     VAR_3->d_ctrl.entry_capture_mask);
}

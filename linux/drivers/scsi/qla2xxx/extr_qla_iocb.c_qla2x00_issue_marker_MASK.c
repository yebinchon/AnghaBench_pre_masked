
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ marker_needed; TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_6__ {int base_qpair; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;

int FUNC_2(scsi_qla_host_t *VAR_3, int VAR_4)
{
 if (VAR_4) {
  if (FUNC_0(VAR_3, VAR_3->hw->base_qpair, 0, 0,
     VAR_0) != VAR_2)
   return VAR_1;
 } else {
  if (FUNC_1(VAR_3, VAR_3->hw->base_qpair, 0, 0,
     VAR_0) != VAR_2)
   return VAR_1;
 }
 VAR_3->marker_needed = 0;

 return VAR_2;
}

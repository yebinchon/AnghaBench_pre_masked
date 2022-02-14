
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct scsi_qla_host *VAR_3)
{
 return ((VAR_3->pdev->device == VAR_0) ||
  (VAR_3->pdev->device == VAR_2) ||
  (VAR_3->pdev->device == VAR_1));
}

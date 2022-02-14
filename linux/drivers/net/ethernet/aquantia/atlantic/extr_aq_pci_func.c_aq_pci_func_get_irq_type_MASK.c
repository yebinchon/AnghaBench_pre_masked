
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_nic_s {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ msi_enabled; scalar_t__ msix_enabled; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

unsigned int FUNC_0(struct aq_nic_s *VAR_3)
{
 if (VAR_3->pdev->msix_enabled)
  return VAR_2;
 if (VAR_3->pdev->msi_enabled)
  return VAR_1;
 return VAR_0;
}

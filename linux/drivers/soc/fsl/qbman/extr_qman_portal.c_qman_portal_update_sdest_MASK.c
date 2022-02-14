
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_portal_config {int channel; int dev; scalar_t__ iommu_domain; } ;
struct pamu_stash_attribute {unsigned int cpu; int cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ,struct pamu_stash_attribute*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(const struct qm_portal_config *VAR_2,
       unsigned int VAR_3)
{
 FUNC_2(VAR_2->channel, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_dev {int cmbsz; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct nvme_dev *VAR_2)
{
 return (VAR_2->cmbsz >> VAR_1) & VAR_0;
}

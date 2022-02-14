
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {TYPE_2__* safw_phys_luns; } ;
struct TYPE_4__ {TYPE_1__* lun; } ;
struct TYPE_3__ {int * node_ident; } ;



__attribute__((used)) static inline u32 FUNC_0(struct aac_dev *VAR_0, int VAR_1)
{
 return VAR_0->safw_phys_luns->lun[VAR_1].node_ident[8];
}

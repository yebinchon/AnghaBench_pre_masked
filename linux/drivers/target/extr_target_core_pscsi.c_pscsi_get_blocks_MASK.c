
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_device {int dummy; } ;
struct pscsi_dev_virt {TYPE_2__* pdv_bd; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* bd_part; } ;
struct TYPE_3__ {int nr_sects; } ;


 struct pscsi_dev_virt* FUNC_0 (struct se_device*) ;

__attribute__((used)) static sector_t FUNC_1(struct se_device *VAR_0)
{
 struct pscsi_dev_virt *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->pdv_bd && VAR_1->pdv_bd->bd_part)
  return VAR_1->pdv_bd->bd_part->nr_sects;

 return 0;
}

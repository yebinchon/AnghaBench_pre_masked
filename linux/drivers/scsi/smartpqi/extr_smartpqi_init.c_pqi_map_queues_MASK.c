
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {int pci_dev; } ;
struct TYPE_2__ {int * map; } ;
struct Scsi_Host {TYPE_1__ tag_set; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct pqi_ctrl_info* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_1)
{
 struct pqi_ctrl_info *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(&VAR_1->tag_set.map[VAR_0],
     VAR_2->pci_dev, 0);
}

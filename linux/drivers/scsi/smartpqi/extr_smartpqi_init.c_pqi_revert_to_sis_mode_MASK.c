
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pqi_ctrl_info*,int ) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*,int ) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, VAR_0);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "re-enabling SIS mode failed with error %d\n", VAR_3);
  return VAR_3;
 }
 FUNC_3(VAR_2, VAR_1);

 return 0;
}

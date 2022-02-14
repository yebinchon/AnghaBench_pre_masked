
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct pqi_ctrl_info* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pqi_ctrl_info*,int ) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 int VAR_2;
 struct pqi_ctrl_info *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  goto error;





 VAR_2 = FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 if (VAR_2 == 0)
  return;

error:
 FUNC_0(&VAR_1->dev,
  "unable to flush controller cache\n");
}

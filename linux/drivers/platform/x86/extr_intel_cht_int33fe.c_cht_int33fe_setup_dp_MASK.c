
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; int dev; } ;
struct fwnode_handle {int secondary; } ;
struct cht_int33fe_data {TYPE_1__* dp; } ;
struct TYPE_2__ {struct fwnode_handle* secondary; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (int *,char*) ;
 int * VAR_4 ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int,int *) ;
 struct fwnode_handle* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cht_int33fe_data *VAR_5)
{
 struct fwnode_handle *VAR_6;
 struct pci_dev *VAR_7;

 VAR_6 = FUNC_4(&VAR_4[VAR_1]);
 if (!VAR_6)
  return -VAR_0;


 VAR_7 = FUNC_3(VAR_2 << 8, ((void*)0));
 if (!VAR_7 || VAR_7->vendor != VAR_3) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }


 VAR_5->dp = FUNC_1(&VAR_7->dev, "DD02");
 FUNC_2(VAR_7);
 if (!VAR_5->dp)
  return -VAR_0;

 VAR_6->secondary = FUNC_0(-VAR_0);
 VAR_5->dp->secondary = VAR_6;

 return 0;
}

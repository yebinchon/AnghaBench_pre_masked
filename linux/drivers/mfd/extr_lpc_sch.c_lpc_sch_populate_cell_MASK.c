
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; int flags; } ;
struct pci_dev {int dev; } ;
struct mfd_cell {char const* name; int num_resources; int ignore_resource_conflicts; int id; struct resource* resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (struct pci_dev*,int,char const*,struct resource*,int) ;
 int FUNC_2 (struct mfd_cell*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, int VAR_4,
     const char *VAR_5, int VAR_6, int VAR_7,
     int VAR_8, struct mfd_cell *VAR_9)
{
 struct resource *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(&VAR_3->dev, 2, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_10, VAR_6);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->name = VAR_5;
 VAR_9->resources = VAR_10;
 VAR_9->num_resources = 1;
 VAR_9->ignore_resource_conflicts = 1;
 VAR_9->id = VAR_8;


 if (VAR_7 < 0)
  return 0;

 VAR_10++;

 VAR_10->start = VAR_7;
 VAR_10->end = VAR_7;
 VAR_10->flags = VAR_2;

 VAR_9->num_resources++;

 return 0;
}

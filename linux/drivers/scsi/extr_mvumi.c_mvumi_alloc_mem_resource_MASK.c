
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_res {int type; unsigned int size; int entry; void* virt_addr; int bus_addr; } ;
struct mvumi_hba {int res_list; TYPE_1__* pdev; } ;
typedef enum resource_type { ____Placeholder_resource_type } resource_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (int *,unsigned int,int *,int ) ;
 int FUNC_3 (struct mvumi_res*) ;
 void* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *,int *) ;
 unsigned int FUNC_6 (unsigned int,int) ;

__attribute__((used)) static struct mvumi_res *FUNC_7(struct mvumi_hba *VAR_2,
    enum resource_type VAR_3, unsigned int VAR_4)
{
 struct mvumi_res *VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0);

 if (!VAR_5) {
  FUNC_1(&VAR_2->pdev->dev,
   "Failed to allocate memory for resource manager.\n");
  return ((void*)0);
 }

 switch (VAR_3) {
 case 129:
  VAR_5->virt_addr = FUNC_4(VAR_4, VAR_0);
  if (!VAR_5->virt_addr) {
   FUNC_1(&VAR_2->pdev->dev,
    "unable to allocate memory,size = %d.\n", VAR_4);
   FUNC_3(VAR_5);
   return ((void*)0);
  }
  break;

 case 128:
  VAR_4 = FUNC_6(VAR_4, 8);
  VAR_5->virt_addr = FUNC_2(&VAR_2->pdev->dev, VAR_4,
          &VAR_5->bus_addr,
          VAR_1);
  if (!VAR_5->virt_addr) {
   FUNC_1(&VAR_2->pdev->dev,
     "unable to allocate consistent mem,"
       "size = %d.\n", VAR_4);
   FUNC_3(VAR_5);
   return ((void*)0);
  }
  break;

 default:
  FUNC_1(&VAR_2->pdev->dev, "unknown resource type %d.\n", VAR_3);
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_5->type = VAR_3;
 VAR_5->size = VAR_4;
 FUNC_0(&VAR_5->entry);
 FUNC_5(&VAR_5->entry, &VAR_2->res_list);

 return VAR_5;
}

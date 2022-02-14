
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc_mem_entry {void* va; int len; int dma; } ;
struct TYPE_2__ {struct device* parent; } ;
struct rproc {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct device*,char*,int *,int ) ;
 int FUNC_2 (struct device*,char*,int *,int ) ;
 void* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rproc *VAR_1,
     struct rproc_mem_entry *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev.parent;
 void *VAR_4;

 FUNC_1(VAR_3, "map memory: %pa+%x\n", &VAR_2->dma, VAR_2->len);
 VAR_4 = FUNC_3(VAR_2->dma, VAR_2->len);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_3, "Unable to map memory region: %pa+%x\n",
   &VAR_2->dma, VAR_2->len);
  return -VAR_0;
 }


 VAR_2->va = VAR_4;

 return 0;
}


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
 int FUNC_0 (struct device*,char*,int *,int ) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rproc *VAR_1,
         struct rproc_mem_entry *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev.parent;
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_2->dma, VAR_2->len);
 if (!VAR_4) {
  FUNC_0(VAR_3, "Unable to map memory region: %pa+%zx\n",
   &VAR_2->dma, VAR_2->len);
  return -VAR_0;
 }


 VAR_2->va = VAR_4;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserved_mem {size_t base; size_t size; } ;
struct property {int length; int name; int * value; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
typedef size_t dma_addr_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int ) ;
 void* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct device_node*,struct property*) ;
 struct property* FUNC_6 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_7 (int ,char*,int) ;
 struct reserved_mem* FUNC_8 (struct device_node*) ;
 int FUNC_9 (size_t) ;

int FUNC_10(struct device *VAR_3, int VAR_4, dma_addr_t *VAR_5,
    size_t *VAR_6)
{
 struct device_node *VAR_7;
 struct reserved_mem *VAR_8;
 struct property *VAR_9;
 int VAR_10, VAR_11;
 __be32 *VAR_12;

 VAR_7 = FUNC_7(VAR_3->of_node, "memory-region", VAR_4);
 if (!VAR_7) {
  FUNC_1(VAR_3, "No memory-region found for index %d\n", VAR_4);
  return -VAR_0;
 }

 VAR_8 = FUNC_8(VAR_7);
 if (!VAR_8) {
  FUNC_1(VAR_3, "of_reserved_mem_lookup() returned NULL\n");
  return -VAR_0;
 }
 *VAR_5 = VAR_8->base;
 *VAR_6 = VAR_8->size;







 VAR_9 = FUNC_6(VAR_7, "reg", &VAR_10);
 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_3, sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   return -VAR_1;
  VAR_9->value = VAR_12 = FUNC_3(VAR_3, sizeof(__be32) * 4,
             VAR_2);
  if (!VAR_9->value)
   return -VAR_1;
  VAR_12[0] = FUNC_0(FUNC_9(*VAR_5));
  VAR_12[1] = FUNC_0(FUNC_4(*VAR_5));
  VAR_12[2] = FUNC_0(FUNC_9(*VAR_6));
  VAR_12[3] = FUNC_0(FUNC_4(*VAR_6));
  VAR_9->length = sizeof(__be32) * 4;
  VAR_9->name = FUNC_2(VAR_3, "reg", VAR_2);
  if (!VAR_9->name)
   return -VAR_1;
  VAR_11 = FUNC_5(VAR_7, VAR_9);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}

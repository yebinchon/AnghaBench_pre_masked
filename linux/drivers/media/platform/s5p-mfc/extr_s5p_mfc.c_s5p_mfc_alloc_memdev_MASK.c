
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; int release; int dma_mask; int coherent_dma_mask; struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ,char const*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 struct device* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int) ;
 int FUNC_7 (struct device*,int ,unsigned int) ;
 int FUNC_8 (struct device*) ;
 int VAR_1 ;

__attribute__((used)) static struct device *FUNC_9(struct device *VAR_2,
        const char *VAR_3, unsigned int VAR_4)
{
 struct device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_2, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_4(VAR_5);
 FUNC_1(VAR_5, "%s:%s", FUNC_0(VAR_2), VAR_3);
 VAR_5->parent = VAR_2;
 VAR_5->coherent_dma_mask = VAR_2->coherent_dma_mask;
 VAR_5->dma_mask = VAR_2->dma_mask;
 VAR_5->release = VAR_1;






 FUNC_6(VAR_5, VAR_2->of_node, 1);

 if (FUNC_2(VAR_5) == 0) {
  VAR_6 = FUNC_7(VAR_5, VAR_2->of_node,
        VAR_4);
  if (VAR_6 == 0)
   return VAR_5;
  FUNC_3(VAR_5);
 }

 FUNC_8(VAR_5);
 return ((void*)0);
}

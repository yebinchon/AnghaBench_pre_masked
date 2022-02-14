
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*) ;
 struct scatterlist* FUNC_1 (int,int ) ;
 void* FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*,void*,int ) ;

struct scatterlist *FUNC_5(struct pci_dev *VAR_1,
      unsigned int *VAR_2, u32 VAR_3)
{
 struct scatterlist *VAR_4;
 void *VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_3(VAR_4, 1);

 VAR_5 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_5)
  goto out_free_sg;

 FUNC_4(VAR_4, VAR_5, VAR_3);
 *VAR_2 = 1;
 return VAR_4;

out_free_sg:
 FUNC_0(VAR_4);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;
struct cxl_afu {int crs_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct pci_bus *VAR_1, unsigned int VAR_2,
           struct cxl_afu *VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->number, VAR_2);
 if (VAR_5 > VAR_3->crs_num)
  return VAR_0;

 *VAR_4 = VAR_5;
 return 0;
}

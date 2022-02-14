
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef void pci_dev ;
typedef int loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,void*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2;

 (*VAR_3)++;
 VAR_4 = FUNC_0(VAR_0, VAR_0, VAR_4);
 return VAR_4;
}

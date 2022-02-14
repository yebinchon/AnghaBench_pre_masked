
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mobiveil_msi {unsigned long num_of_vectors; int lock; int msi_irq_in_use; } ;
struct mobiveil_pcie {struct mobiveil_msi msi; } ;
struct irq_domain {struct mobiveil_pcie* host_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned long,int *,struct mobiveil_pcie*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5, void *VAR_6)
{
 struct mobiveil_pcie *VAR_7 = VAR_3->host_data;
 struct mobiveil_msi *VAR_8 = &VAR_7->msi;
 unsigned long VAR_9;

 FUNC_0(VAR_5 != 1);
 FUNC_3(&VAR_8->lock);

 VAR_9 = FUNC_1(VAR_8->msi_irq_in_use, VAR_8->num_of_vectors);
 if (VAR_9 >= VAR_8->num_of_vectors) {
  FUNC_4(&VAR_8->lock);
  return -VAR_0;
 }

 FUNC_5(VAR_9, VAR_8->msi_irq_in_use);

 FUNC_4(&VAR_8->lock);

 FUNC_2(VAR_3, VAR_4, VAR_9, &VAR_2,
       VAR_3->host_data, VAR_1, ((void*)0), ((void*)0));
 return 0;
}

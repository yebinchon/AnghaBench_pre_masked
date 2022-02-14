
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct advk_pcie* host_data; } ;
struct advk_pcie {int msi_bottom_irq_chip; int msi_used_lock; int msi_used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (struct irq_domain*,unsigned int,int,int *,struct advk_pcie*,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5, void *VAR_6)
{
 struct advk_pcie *VAR_7 = VAR_3->host_data;
 int VAR_8, VAR_9;

 FUNC_3(&VAR_7->msi_used_lock);
 VAR_8 = FUNC_0(VAR_7->msi_used, VAR_1,
        0, VAR_5, 0);
 if (VAR_8 >= VAR_1) {
  FUNC_4(&VAR_7->msi_used_lock);
  return -VAR_0;
 }

 FUNC_1(VAR_7->msi_used, VAR_8, VAR_5);
 FUNC_4(&VAR_7->msi_used_lock);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  FUNC_2(VAR_3, VAR_4 + VAR_9, VAR_8 + VAR_9,
        &VAR_7->msi_bottom_irq_chip,
        VAR_3->host_data, VAR_2,
        ((void*)0), ((void*)0));

 return VAR_8;
}

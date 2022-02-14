
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pcie_port {int lock; int msi_irq_in_use; } ;
struct irq_domain {struct mtk_pcie_port* host_data; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (struct irq_domain*,unsigned int,unsigned long,int *,struct mtk_pcie_port*,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6, void *VAR_7)
{
 struct mtk_pcie_port *VAR_8 = VAR_4->host_data;
 unsigned long VAR_9;

 FUNC_0(VAR_6 != 1);
 FUNC_4(&VAR_8->lock);

 VAR_9 = FUNC_2(VAR_8->msi_irq_in_use, VAR_1);
 if (VAR_9 >= VAR_1) {
  FUNC_5(&VAR_8->lock);
  return -VAR_0;
 }

 FUNC_1(VAR_9, VAR_8->msi_irq_in_use);

 FUNC_5(&VAR_8->lock);

 FUNC_3(VAR_4, VAR_5, VAR_9, &VAR_3,
       VAR_4->host_data, VAR_2,
       ((void*)0), ((void*)0));

 return 0;
}

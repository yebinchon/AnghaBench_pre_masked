
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pcie_port {int msi_irq_chip; int lock; int num_vectors; int msi_irq_in_use; } ;
struct irq_domain {struct pcie_port* host_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct irq_domain*,unsigned int,int,int ,struct pcie_port*,int ,int *,int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        void *VAR_5)
{
 struct pcie_port *VAR_6 = VAR_2->host_data;
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_3(&VAR_6->lock, VAR_7);

 VAR_9 = FUNC_0(VAR_6->msi_irq_in_use, VAR_6->num_vectors,
          FUNC_2(VAR_4));

 FUNC_4(&VAR_6->lock, VAR_7);

 if (VAR_9 < 0)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_1(VAR_2, VAR_3 + VAR_8, VAR_9 + VAR_8,
        VAR_6->msi_irq_chip,
        VAR_6, VAR_1,
        ((void*)0), ((void*)0));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int num_vectors; int irq_domain; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pcie_port*,scalar_t__,int,int*) ;
 int FUNC_1 (unsigned long*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

irqreturn_t FUNC_4(struct pcie_port *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 irqreturn_t VAR_11 = VAR_1;

 VAR_10 = VAR_5->num_vectors / VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
  FUNC_0(VAR_5, VAR_4 +
     (VAR_6 * VAR_3),
        4, &VAR_9);
  if (!VAR_9)
   continue;

  VAR_11 = VAR_0;
  VAR_7 = 0;
  while ((VAR_7 = FUNC_1((unsigned long *) &VAR_9,
         VAR_2,
         VAR_7)) != VAR_2) {
   VAR_8 = FUNC_3(VAR_5->irq_domain,
            (VAR_6 * VAR_2) +
            VAR_7);
   FUNC_2(VAR_8);
   VAR_7++;
  }
 }

 return VAR_11;
}

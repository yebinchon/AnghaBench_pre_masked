
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct iproc_msi_grp {int eq; struct iproc_msi* msi; } ;
struct iproc_msi {int inner_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 unsigned long FUNC_2 (struct iproc_msi*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iproc_msi*,int ,int) ;
 int FUNC_5 (struct iproc_msi*,int ,int,int) ;
 struct irq_chip* FUNC_6 (struct irq_desc*) ;
 struct iproc_msi_grp* FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_4)
{
 struct irq_chip *VAR_5 = FUNC_6(VAR_4);
 struct iproc_msi_grp *VAR_6;
 struct iproc_msi *VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 FUNC_0(VAR_5, VAR_4);

 VAR_6 = FUNC_7(VAR_4);
 VAR_7 = VAR_6->msi;
 VAR_8 = VAR_6->eq;
 VAR_9 = FUNC_4(VAR_7, VAR_1,
      VAR_8) & VAR_2;
 do {
  VAR_10 = FUNC_4(VAR_7, VAR_3,
       VAR_8) & VAR_2;





  VAR_11 = (VAR_10 < VAR_9) ?
   (VAR_0 - (VAR_9 - VAR_10)) : (VAR_10 - VAR_9);
  if (!VAR_11)
   break;


  while (VAR_11--) {
   VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9);
   VAR_13 = FUNC_8(VAR_7->inner_domain, VAR_12);
   FUNC_3(VAR_13);

   VAR_9++;
   VAR_9 %= VAR_0;
  }





  FUNC_5(VAR_7, VAR_1, VAR_8, VAR_9);





 } while (1);

 FUNC_1(VAR_5, VAR_4);
}

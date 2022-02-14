
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_msi_group {int msi_grp; struct xgene_msi* msi; } ;
struct xgene_msi {int inner_domain; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;
 struct irq_chip* FUNC_6 (struct irq_desc*) ;
 struct xgene_msi_group* FUNC_7 (struct irq_desc*) ;
 unsigned int FUNC_8 (int ,int) ;
 int FUNC_9 (struct xgene_msi*,int) ;
 int FUNC_10 (struct xgene_msi*,int,int) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_2)
{
 struct irq_chip *VAR_3 = FUNC_6(VAR_2);
 struct xgene_msi_group *VAR_4;
 struct xgene_msi *VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12;

 FUNC_1(VAR_3, VAR_2);

 VAR_4 = FUNC_7(VAR_2);
 VAR_5 = VAR_4->msi;
 VAR_12 = VAR_4->msi_grp;






 VAR_11 = FUNC_9(VAR_5, VAR_12);
 while (VAR_11) {
  VAR_7 = FUNC_3(VAR_11) - 1;





  VAR_8 = FUNC_10(VAR_5, VAR_12, VAR_7);
  while (VAR_8) {
   VAR_10 = FUNC_3(VAR_8) - 1;





   VAR_9 = (((VAR_7 * VAR_0) + VAR_10) *
     VAR_1) + VAR_12;





   VAR_9 = FUNC_5(VAR_9);
   VAR_6 = FUNC_8(VAR_5->inner_domain, VAR_9);
   FUNC_0(!VAR_6);
   if (VAR_6 != 0)
    FUNC_4(VAR_6);
   VAR_8 &= ~(1 << VAR_10);
  }
  VAR_11 &= ~(1 << VAR_7);

  if (!VAR_11) {





   VAR_11 = FUNC_9(VAR_5, VAR_12);
  }
 }

 FUNC_2(VAR_3, VAR_2);
}

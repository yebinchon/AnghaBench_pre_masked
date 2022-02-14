
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct advk_pcie {int irq_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct advk_pcie*) ;
 int FUNC_2 (struct advk_pcie*,int ) ;
 int FUNC_3 (struct advk_pcie*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct advk_pcie *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_9 = FUNC_2(VAR_8, VAR_3);
 VAR_10 = FUNC_2(VAR_8, VAR_1);
 VAR_11 = VAR_9 & ((~VAR_10) & VAR_0);

 VAR_12 = FUNC_2(VAR_8, VAR_6);
 VAR_13 = FUNC_2(VAR_8, VAR_5);
 VAR_14 = VAR_12 & ((~VAR_13) & VAR_4);

 if (!VAR_11 && !VAR_14) {
  FUNC_3(VAR_8, VAR_9, VAR_3);
  FUNC_3(VAR_8, VAR_12, VAR_6);
  return;
 }


 if (VAR_11 & VAR_2)
  FUNC_1(VAR_8);


 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  if (!(VAR_14 & FUNC_0(VAR_15)))
   continue;

  FUNC_3(VAR_8, FUNC_0(VAR_15),
       VAR_6);

  VAR_16 = FUNC_5(VAR_8->irq_domain, VAR_15);
  FUNC_4(VAR_16);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int reg_rxcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*,int ) ;
 int FUNC_2 (struct jme_adapter*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static inline void
FUNC_7(struct jme_adapter *VAR_3)
{
 int VAR_4;
 u32 VAR_5;




 FUNC_2(VAR_3, VAR_0, VAR_3->reg_rxcs);
 FUNC_6();

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 for (VAR_4 = VAR_1 ; (VAR_5 & VAR_2) && VAR_4 > 0 ; --VAR_4) {
  FUNC_3(1);
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  FUNC_5();
 }

 if (!VAR_4)
  FUNC_4("Disable RX engine timeout\n");




 FUNC_0(VAR_3);
}

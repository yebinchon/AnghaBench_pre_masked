
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_priv {scalar_t__ version; int (* int_disable ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct emac_priv *VAR_7)
{
 if (VAR_7->version == VAR_6) {
  unsigned long VAR_8;

  FUNC_3(VAR_8);



  FUNC_0(VAR_1, 0x0);
  FUNC_0(VAR_2, 0x0);

  if (VAR_7->int_disable)
   VAR_7->int_disable();




  FUNC_1(VAR_3,
   VAR_4);


  FUNC_1(VAR_3,
   VAR_5);

  FUNC_2(VAR_8);

 } else {

  FUNC_0(VAR_0, 0x0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_priv {scalar_t__ version; int (* int_enable ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct emac_priv *VAR_4)
{
 if (VAR_4->version == VAR_3) {
  if (VAR_4->int_enable)
   VAR_4->int_enable();

  FUNC_0(VAR_1, 0xff);
  FUNC_0(VAR_2, 0xff);






 } else {

  FUNC_0(VAR_0, 0x1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_emac_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct arc_emac_priv*,int ) ;
 int FUNC_1 (struct arc_emac_priv*,int ,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct arc_emac_priv *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0 * 40; VAR_5++) {
  unsigned int VAR_6 = FUNC_0(VAR_4, VAR_3);

  VAR_6 &= VAR_2;

  if (VAR_6) {

   FUNC_1(VAR_4, VAR_3, VAR_6);
   return 0;
  }

  FUNC_2(25);
 }

 return -VAR_1;
}

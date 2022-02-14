
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_enet_priv*,int ) ;
 int FUNC_1 (struct bcm_enet_priv*,unsigned int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct bcm_enet_priv *VAR_3, unsigned int VAR_4)
{
 int VAR_5;


 FUNC_1(VAR_3, VAR_0, VAR_1);

 FUNC_1(VAR_3, VAR_4, VAR_2);
 FUNC_3();


 VAR_5 = 1000;
 do {
  if (FUNC_0(VAR_3, VAR_1) & VAR_0)
   break;
  FUNC_2(1);
 } while (VAR_5-- > 0);

 return (VAR_5 < 0) ? 1 : 0;
}

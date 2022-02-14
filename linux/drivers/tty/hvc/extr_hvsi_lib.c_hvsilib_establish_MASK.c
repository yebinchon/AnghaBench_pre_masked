
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {int opened; int termno; scalar_t__ established; } ;


 int FUNC_0 (struct hvsi_priv*) ;
 int FUNC_1 (struct hvsi_priv*) ;
 int FUNC_2 (struct hvsi_priv*) ;
 int FUNC_3 (struct hvsi_priv*) ;
 int FUNC_4 (struct hvsi_priv*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;

void FUNC_8(struct hvsi_priv *VAR_0)
{
 int VAR_1;

 FUNC_6("HVSI@%x: Establishing...\n", VAR_0->termno);




 for (VAR_1 = 0; VAR_1 < 20; VAR_1++) {
  if (VAR_0->established)
   goto established;
  if (!FUNC_0(VAR_0))
   FUNC_5(10);
 }




 FUNC_6("HVSI@%x:   ... sending close\n", VAR_0->termno);

 FUNC_1(VAR_0);



 FUNC_6("HVSI@%x:   ... restarting handshake\n", VAR_0->termno);

 FUNC_2(VAR_0);

 FUNC_6("HVSI@%x:   ... waiting handshake\n", VAR_0->termno);


 for (VAR_1 = 0; VAR_1 < 40; VAR_1++) {
  if (VAR_0->established)
   goto established;
  if (!FUNC_0(VAR_0))
   FUNC_5(10);
 }

 if (!VAR_0->established) {
  FUNC_6("HVSI@%x: Timeout handshaking, giving up !\n",
    VAR_0->termno);
  return;
 }
 established:


 FUNC_6("HVSI@%x:   ... established, reading mctrl\n", VAR_0->termno);

 FUNC_3(VAR_0);



 FUNC_6("HVSI@%x:   ... setting mctrl\n", VAR_0->termno);

 FUNC_4(VAR_0, 1);


 FUNC_7();
 VAR_0->opened = 1;
}

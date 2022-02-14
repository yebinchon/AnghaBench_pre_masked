
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {int tty; int termno; } ;
struct hvc_struct {int port; } ;


 int FUNC_0 (struct hvsi_priv*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hvsi_priv *VAR_0, struct hvc_struct *VAR_1)
{
 FUNC_1("HVSI@%x: open !\n", VAR_0->termno);


 VAR_0->tty = FUNC_2(&VAR_1->port);

 FUNC_0(VAR_0);

 return 0;
}

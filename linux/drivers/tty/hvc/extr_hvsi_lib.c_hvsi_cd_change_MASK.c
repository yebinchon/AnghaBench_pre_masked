
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {int termno; scalar_t__ opened; int is_console; int mctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct hvsi_priv*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct hvsi_priv *VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->mctrl |= VAR_0;
 else {
  VAR_1->mctrl &= ~VAR_0;







  if (!VAR_1->is_console && VAR_1->opened) {
   FUNC_1("HVSI@%x Carrier lost, hanging up !\n",
     VAR_1->termno);
   FUNC_0(VAR_1);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_priv {int status; TYPE_1__* assoc_network; } ;
struct TYPE_2__ {int capability; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 scalar_t__ FUNC_3 (struct ipw_priv*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct ipw_priv *VAR_3 = VAR_2;

 if (VAR_3->status & VAR_0)
  return;

 FUNC_1(VAR_3);

 if (VAR_3->assoc_network &&
     (VAR_3->assoc_network->capability & VAR_1))
  FUNC_2(VAR_3);

 if (FUNC_3(VAR_3)) {
  FUNC_0("Failed to up device\n");
  return;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hostap_cs_priv {int * link; } ;
struct TYPE_3__ {struct hostap_cs_priv* hw_priv; } ;
typedef TYPE_1__ local_info_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(local_info_t *VAR_0)
{
 struct hostap_cs_priv *VAR_1 = VAR_0->hw_priv;
 if (VAR_1 != ((void*)0) && VAR_1->link != ((void*)0) && FUNC_0(VAR_1->link))
  return 1;
 return 0;
}

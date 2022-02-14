
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ltq_etop_priv {int * ch; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (int ) ;
 struct ltq_etop_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_2)
{
 struct ltq_etop_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_3(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_1(VAR_4) || FUNC_0(VAR_4))
   FUNC_2(VAR_2, &VAR_3->ch[VAR_4]);
}

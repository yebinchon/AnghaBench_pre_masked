
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_eth_priv {TYPE_1__* cls_rules; } ;
struct TYPE_2__ {scalar_t__ in_use; } ;


 int FUNC_0 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_1(struct dpaa2_eth_priv *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
  if (VAR_0->cls_rules[VAR_1].in_use)
   VAR_2++;

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_private {int dummy; } ;
struct ethtool_rxnfc {int flow_type; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfar_private*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gfar_private *VAR_1,
         struct ethtool_rxnfc *VAR_2)
{

 if (!FUNC_0(VAR_1, VAR_2->data, VAR_2->flow_type))
  return -VAR_0;

 return 0;
}

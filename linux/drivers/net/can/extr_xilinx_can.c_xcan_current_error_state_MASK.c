
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;} ;
struct net_device {int dummy; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xcan_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xcan_priv*,int ) ;

__attribute__((used)) static enum can_state FUNC_2(struct net_device *VAR_6)
{
 struct xcan_priv *VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8 = VAR_7->read_reg(VAR_7, VAR_5);

 if ((VAR_8 & VAR_4) == VAR_4)
  return VAR_1;
 else if (VAR_8 & VAR_3)
  return VAR_2;
 else
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct c_can_priv {int (* read_reg ) (struct c_can_priv*,int ) ;int napi; int sie_pending; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct c_can_priv*,int) ;
 int FUNC_2 (int *) ;
 struct c_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct c_can_priv*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = (struct net_device *)VAR_5;
 struct c_can_priv *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 VAR_8 = VAR_7->read_reg(VAR_7, VAR_0);
 if (!VAR_8)
  return VAR_3;


 if (VAR_8 & VAR_1)
  FUNC_0(&VAR_7->sie_pending, 1);


 FUNC_1(VAR_7, 0);
 FUNC_2(&VAR_7->napi);

 return VAR_2;
}

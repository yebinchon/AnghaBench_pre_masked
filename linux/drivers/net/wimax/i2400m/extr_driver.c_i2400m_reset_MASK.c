
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ reg_state; } ;
struct TYPE_2__ {struct net_device* net_dev; } ;
struct i2400m {int (* bus_reset ) (struct i2400m*,int) ;TYPE_1__ wimax_dev; } ;
typedef enum i2400m_reset_type { ____Placeholder_i2400m_reset_type } i2400m_reset_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i2400m*,int) ;

int FUNC_3(struct i2400m *VAR_1, enum i2400m_reset_type VAR_2)
{
 struct net_device *VAR_3 = VAR_1->wimax_dev.net_dev;






 if (VAR_3->reg_state == VAR_0) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
 }
 return VAR_1->bus_reset(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device const*,struct can_berr_counter*) ;

__attribute__((used)) static int FUNC_1(const struct net_device *VAR_4,
  enum can_state *VAR_5)
{
 struct can_berr_counter VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6.txerr < 96 && VAR_6.rxerr < 96)
  *VAR_5 = VAR_1;
 else if (VAR_6.txerr < 128 && VAR_6.rxerr < 128)
  *VAR_5 = VAR_3;
 else if (VAR_6.txerr < 256 && VAR_6.rxerr < 256)
  *VAR_5 = VAR_2;
 else
  *VAR_5 = VAR_0;

 return 0;
}

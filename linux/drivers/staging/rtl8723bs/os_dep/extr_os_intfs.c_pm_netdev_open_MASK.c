
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int hw_init_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, u8 VAR_2)
{
 int VAR_3 = -1;

 struct adapter *VAR_4 = (struct adapter *)FUNC_5(VAR_1);

 if (1 == VAR_2) {
  if (FUNC_3(&(FUNC_1(VAR_4)->hw_init_mutex)) == 0) {
   VAR_3 = FUNC_0(VAR_1);
   FUNC_4(&(FUNC_1(VAR_4)->hw_init_mutex));
  }
 }
 else
  VAR_3 = (VAR_0 == FUNC_2(VAR_4)) ? (0) : (-1);

 return VAR_3;
}

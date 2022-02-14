
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);

 return ((VAR_3->rtllib->state == VAR_0) ||
  (VAR_3->rtllib->state == VAR_1));
}

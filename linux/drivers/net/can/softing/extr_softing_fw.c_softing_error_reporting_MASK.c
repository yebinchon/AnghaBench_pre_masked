
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrlmode; } ;
struct softing_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct softing_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_1(struct net_device *VAR_1)
{
 struct softing_priv *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2->can.ctrlmode & VAR_0)
  ? 1 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ priv; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct port *FUNC_1(struct net_device *VAR_0)
{
 return (struct port *)FUNC_0(VAR_0)->priv;
}

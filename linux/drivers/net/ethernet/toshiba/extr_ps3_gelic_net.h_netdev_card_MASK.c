
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gelic_port {struct gelic_card* card; } ;
struct gelic_card {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct gelic_card *FUNC_1(struct net_device *VAR_0)
{
 return ((struct gelic_port *)FUNC_0(VAR_0))->card;
}

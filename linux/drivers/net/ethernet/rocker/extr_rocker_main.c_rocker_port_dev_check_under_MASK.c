
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct rocker* rocker; } ;
struct rocker {int dummy; } ;
struct net_device {int dummy; } ;


 struct rocker_port* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct net_device const*) ;

__attribute__((used)) static bool FUNC_2(const struct net_device *VAR_0,
     struct rocker *VAR_1)
{
 struct rocker_port *VAR_2;

 if (!FUNC_1(VAR_0))
  return 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2->rocker != VAR_1)
  return 0;

 return 1;
}

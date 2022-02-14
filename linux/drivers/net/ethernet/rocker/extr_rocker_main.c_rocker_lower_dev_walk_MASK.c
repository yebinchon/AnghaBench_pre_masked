
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_walk_data {int port; int rocker; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct rocker_walk_data *VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (FUNC_1(VAR_0, VAR_2->rocker)) {
  VAR_2->port = FUNC_0(VAR_0);
  VAR_3 = 1;
 }

 return VAR_3;
}

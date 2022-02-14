
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_walk_data {struct rocker_port* port; struct rocker* rocker; } ;
struct rocker_port {int dummy; } ;
struct rocker {int dummy; } ;
struct net_device {int dummy; } ;


 struct rocker_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,struct rocker_walk_data*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct net_device*,struct rocker*) ;

struct rocker_port *FUNC_3(struct net_device *VAR_1,
            struct rocker *VAR_2)
{
 struct rocker_walk_data VAR_3;

 if (FUNC_2(VAR_1, VAR_2))
  return FUNC_0(VAR_1);

 VAR_3.rocker = VAR_2;
 VAR_3.port = ((void*)0);
 FUNC_1(VAR_1, VAR_0, &VAR_3);

 return VAR_3.port;
}

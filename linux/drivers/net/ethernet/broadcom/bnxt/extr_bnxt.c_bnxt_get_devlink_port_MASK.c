
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct devlink_port {int dummy; } ;
struct bnxt {struct devlink_port dl_port; } ;


 struct bnxt* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct devlink_port *FUNC_1(struct net_device *VAR_0)
{
 struct bnxt *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->dl_port;
}

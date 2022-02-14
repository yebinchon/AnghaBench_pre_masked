
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_node_auth {int enforce_discovery_auth; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct iscsi_node_auth node_auth; } ;
struct TYPE_4__ {TYPE_1__ discovery_acl; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct config_item *VAR_1,
  char *VAR_2)
{
 struct iscsi_node_auth *VAR_3 = &VAR_0->discovery_acl.node_auth;

 return FUNC_0(VAR_2, "%d\n", VAR_3->enforce_discovery_auth);
}

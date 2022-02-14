
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct islpci_acl {int policy; } ;
struct TYPE_3__ {struct islpci_acl acl; } ;
typedef TYPE_1__ islpci_private ;
typedef int __u32 ;


 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0, struct iw_request_info *VAR_1,
     __u32 * VAR_2, char *VAR_3)
{
 islpci_private *VAR_4 = FUNC_0(VAR_0);
 struct islpci_acl *VAR_5 = &VAR_4->acl;

 *VAR_2 = VAR_5->policy;

 return 0;
}

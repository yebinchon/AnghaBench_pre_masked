
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int link_up; } ;
struct bnxt {TYPE_1__ link_info; } ;


 struct bnxt* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct bnxt *VAR_1 = FUNC_0(VAR_0);


 return VAR_1->link_info.link_up;
}

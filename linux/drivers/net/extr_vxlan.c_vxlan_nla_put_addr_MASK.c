
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
union vxlan_addr {TYPE_2__ sin; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, int VAR_1,
         const union vxlan_addr *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->sin.sin_addr.s_addr);
}

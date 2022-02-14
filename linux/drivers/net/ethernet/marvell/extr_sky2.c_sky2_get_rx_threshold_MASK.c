
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sky2_port {TYPE_1__* netdev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static unsigned FUNC_1(struct sky2_port *VAR_2)
{
 unsigned VAR_3;


 VAR_3 = FUNC_0(VAR_2->netdev->mtu + VAR_0 + VAR_1, 8);


 return (VAR_3 - 8) / sizeof(u32);
}

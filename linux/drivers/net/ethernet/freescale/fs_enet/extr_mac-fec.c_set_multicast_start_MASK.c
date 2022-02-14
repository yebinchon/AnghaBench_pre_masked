
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ htlo; scalar_t__ hthi; } ;
struct fs_enet_private {TYPE_1__ fec; } ;


 struct fs_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_0(VAR_0);

 VAR_1->fec.hthi = 0;
 VAR_1->fec.htlo = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ hwp; int * ethtool_stats; } ;
struct TYPE_3__ {scalar_t__ offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  VAR_2->ethtool_stats[VAR_3] = FUNC_2(VAR_2->hwp + VAR_0[VAR_3].offset);
}

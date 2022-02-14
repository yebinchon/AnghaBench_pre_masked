
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct nfp_net {int * vxlan_ports; TYPE_1__ dp; } ;
typedef int port ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_net*,int ) ;
 int FUNC_3 (struct nfp_net*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct nfp_net *VAR_4, int VAR_5, __be16 VAR_6)
{
 int VAR_7;

 VAR_4->vxlan_ports[VAR_5] = VAR_6;

 if (!(VAR_4->dp.ctrl & VAR_0))
  return;

 FUNC_0(VAR_3 & 1);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 2)
  FUNC_3(VAR_4, VAR_2 + VAR_7 * sizeof(VAR_6),
     FUNC_1(VAR_4->vxlan_ports[VAR_7 + 1]) << 16 |
     FUNC_1(VAR_4->vxlan_ports[VAR_7]));

 FUNC_2(VAR_4, VAR_1);
}

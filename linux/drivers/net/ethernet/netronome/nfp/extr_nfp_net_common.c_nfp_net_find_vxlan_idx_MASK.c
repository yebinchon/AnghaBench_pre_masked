
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {scalar_t__* vxlan_ports; int * vxlan_usecnt; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct nfp_net *VAR_2, __be16 VAR_3)
{
 int VAR_4, VAR_5 = -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->vxlan_ports[VAR_4] == VAR_3)
   return VAR_4;
  if (!VAR_2->vxlan_usecnt[VAR_4])
   VAR_5 = VAR_4;
 }

 return VAR_5;
}

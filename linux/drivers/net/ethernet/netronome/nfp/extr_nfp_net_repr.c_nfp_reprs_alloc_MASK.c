
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_reprs {unsigned int num_reprs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct nfp_reprs* FUNC_0 (int,int ) ;

struct nfp_reprs *FUNC_1(unsigned int VAR_1)
{
 struct nfp_reprs *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2) +
   VAR_1 * sizeof(struct net_device *), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->num_reprs = VAR_1;

 return VAR_2;
}

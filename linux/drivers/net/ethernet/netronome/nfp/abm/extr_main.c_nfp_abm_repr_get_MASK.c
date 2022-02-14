
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct nfp_reprs {size_t num_reprs; int * reprs; } ;
struct nfp_app {int * reprs; } ;
struct net_device {size_t num_reprs; int * reprs; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfp_reprs* FUNC_1 (int ) ;

__attribute__((used)) static struct net_device *
FUNC_2(struct nfp_app *VAR_2, u32 VAR_3, bool *VAR_4)
{
 enum nfp_repr_type VAR_5;
 struct nfp_reprs *VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 VAR_7 = FUNC_0(VAR_0, VAR_3);

 VAR_6 = FUNC_1(VAR_2->reprs[VAR_5]);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_7 >= VAR_6->num_reprs)
  return ((void*)0);

 return FUNC_1(VAR_6->reprs[VAR_7]);
}

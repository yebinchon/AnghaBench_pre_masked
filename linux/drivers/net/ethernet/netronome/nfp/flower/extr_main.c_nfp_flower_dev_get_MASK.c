
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


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct nfp_reprs* FUNC_1 (struct nfp_app*,size_t) ;
 int FUNC_2 (struct nfp_app*,int ,size_t*) ;
 struct nfp_reprs* FUNC_3 (int ) ;

__attribute__((used)) static struct net_device *
FUNC_4(struct nfp_app *VAR_4, u32 VAR_5, bool *VAR_6)
{
 enum nfp_repr_type VAR_7;
 struct nfp_reprs *VAR_8;
 u8 VAR_9 = 0;


 if (FUNC_0(VAR_1, VAR_5) ==
     VAR_2) {
  if (VAR_6)
   *VAR_6 = 1;
  VAR_9 = FUNC_0(VAR_0, VAR_5);
  return FUNC_1(VAR_4, VAR_9);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5, &VAR_9);
 if (VAR_7 > VAR_3)
  return ((void*)0);

 VAR_8 = FUNC_3(VAR_4->reprs[VAR_7]);
 if (!VAR_8)
  return ((void*)0);

 if (VAR_9 >= VAR_8->num_reprs)
  return ((void*)0);

 return FUNC_3(VAR_8->reprs[VAR_9]);
}

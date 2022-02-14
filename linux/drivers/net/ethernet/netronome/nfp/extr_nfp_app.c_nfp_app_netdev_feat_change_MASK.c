
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_reprs {unsigned int num_reprs; int * reprs; } ;
struct nfp_net {struct nfp_app* app; } ;
struct nfp_app {int * reprs; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net_device*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nfp_app *VAR_1, struct net_device *VAR_2)
{
 struct nfp_net *VAR_3;
 unsigned int VAR_4;

 if (!FUNC_1(VAR_2))
  return;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->app != VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct nfp_reprs *VAR_5;
  unsigned int VAR_6;

  VAR_5 = FUNC_3(VAR_1->reprs[VAR_4]);
  if (!VAR_5)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_5->num_reprs; VAR_6++) {
   struct net_device *VAR_7;

   VAR_7 = FUNC_3(VAR_5->reprs[VAR_6]);
   if (!VAR_7)
    continue;

   FUNC_2(VAR_7, VAR_2);
  }
 }
}

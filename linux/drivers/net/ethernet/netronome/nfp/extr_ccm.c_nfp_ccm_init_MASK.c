
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_ccm {int wq; int replies; struct nfp_app* app; } ;
struct nfp_app {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct nfp_ccm *VAR_0, struct nfp_app *VAR_1)
{
 VAR_0->app = VAR_1;
 FUNC_1(&VAR_0->replies);
 FUNC_0(&VAR_0->wq);
 return 0;
}

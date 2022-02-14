
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int rss_lock; int rss_context; } ;


 int FUNC_0 (struct efx_nic*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->rss_lock);
 VAR_1 = FUNC_0(VAR_0, &VAR_0->rss_context);
 FUNC_2(&VAR_0->rss_lock);
 return VAR_1;
}

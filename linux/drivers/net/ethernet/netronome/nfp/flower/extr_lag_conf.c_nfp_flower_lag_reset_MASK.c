
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_lag {int rst_cfg; } ;
typedef enum nfp_fl_lag_batch { ____Placeholder_nfp_fl_lag_batch } nfp_fl_lag_batch ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_fl_lag*,int *,int *,int ,int*) ;

int FUNC_1(struct nfp_fl_lag *VAR_1)
{
 enum nfp_fl_lag_batch VAR_2 = VAR_0;

 VAR_1->rst_cfg = 1;
 return FUNC_0(VAR_1, ((void*)0), ((void*)0), 0, &VAR_2);
}

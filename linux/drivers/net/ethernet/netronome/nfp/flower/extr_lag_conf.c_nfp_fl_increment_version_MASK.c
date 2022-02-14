
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_lag {int batch_ver; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nfp_fl_lag *VAR_1)
{

 VAR_1->batch_ver += 2;
 VAR_1->batch_ver &= VAR_0;


 if (!VAR_1->batch_ver)
  VAR_1->batch_ver += 2;
}

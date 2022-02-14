
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct nffw_fwinfo* fwinfo; } ;
struct TYPE_4__ {struct nffw_fwinfo* fwinfo; } ;
struct TYPE_6__ {TYPE_2__ v2; TYPE_1__ v1; } ;
struct nfp_nffw_info_data {TYPE_3__ info; } ;
struct nffw_fwinfo {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct nfp_nffw_info_data*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct nfp_nffw_info_data *VAR_2, struct nffw_fwinfo **VAR_3)
{







 switch (FUNC_0(VAR_2)) {
 case 0:
 case 1:
  *VAR_3 = &VAR_2->info.v1.fwinfo[0];
  return VAR_0;
 case 2:
  *VAR_3 = &VAR_2->info.v2.fwinfo[0];
  return VAR_1;
 default:
  *VAR_3 = ((void*)0);
  return 0;
 }
}

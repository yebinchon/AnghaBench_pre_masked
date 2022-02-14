
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_pf {scalar_t__ max_data_vnics; TYPE_1__* eth_tbl; int cpp; } ;
struct nfp_app {struct nfp_pf* pf; } ;
struct TYPE_2__ {scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct nfp_app *VAR_1)
{
 struct nfp_pf *VAR_2 = VAR_1->pf;

 if (VAR_2->eth_tbl && VAR_2->max_data_vnics != VAR_2->eth_tbl->count) {
  FUNC_0(VAR_2->cpp, "ETH entries don't match vNICs (%d vs %d)\n",
   VAR_2->max_data_vnics, VAR_2->eth_tbl->count);
  return -VAR_0;
 }

 return 0;
}

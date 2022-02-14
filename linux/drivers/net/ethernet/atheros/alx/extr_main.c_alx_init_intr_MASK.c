
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct alx_priv {int num_vec; int num_napi; int num_txq; int num_rxq; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct alx_priv *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->hw.pdev, 1, 1,
   VAR_1 | VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->num_vec = 1;
 VAR_2->num_napi = 1;
 VAR_2->num_txq = 1;
 VAR_2->num_rxq = 1;
 return 0;
}

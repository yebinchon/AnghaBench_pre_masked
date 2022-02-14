
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_hw_resc {scalar_t__ resv_tx_rings; scalar_t__ min_tx_rings; } ;
struct bnxt {int dev; struct bnxt_hw_resc hw_resc; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct bnxt *VAR_0)
{
 return 1;
}

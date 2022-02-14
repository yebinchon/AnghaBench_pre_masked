
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {scalar_t__ op_claim_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct nfsd4_open *VAR_2)
{
 return VAR_2->op_claim_type == VAR_0 ||
        VAR_2->op_claim_type == VAR_1;
}

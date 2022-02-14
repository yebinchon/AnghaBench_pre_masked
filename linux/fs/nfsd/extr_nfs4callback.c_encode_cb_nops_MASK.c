
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_cb_compound_hdr {scalar_t__ nops; int * nops_p; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nfs4_cb_compound_hdr *VAR_1)
{
 FUNC_0(VAR_1->nops > VAR_0);
 *VAR_1->nops_p = FUNC_1(VAR_1->nops);
}

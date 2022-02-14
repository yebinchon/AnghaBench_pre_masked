
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {scalar_t__ op_deleg_want; int op_why_no_deleg; void* op_delegate_type; } ;
struct nfs4_delegation {scalar_t__ dl_type; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct nfsd4_open *VAR_6,
     struct nfs4_delegation *VAR_7)
{
 if (VAR_6->op_deleg_want == VAR_2 &&
     VAR_7->dl_type == VAR_1) {
  VAR_6->op_delegate_type = VAR_0;
  VAR_6->op_why_no_deleg = VAR_4;
 } else if (VAR_6->op_deleg_want == VAR_3 &&
     VAR_7->dl_type == VAR_1) {
  VAR_6->op_delegate_type = VAR_0;
  VAR_6->op_why_no_deleg = VAR_5;
 }




}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {int op_deleg_want; int op_why_no_deleg; int op_delegate_type; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct nfsd4_open *VAR_5, int VAR_6)
{
 VAR_5->op_delegate_type = VAR_1;
 if (VAR_6 == -VAR_0)
  VAR_5->op_why_no_deleg = VAR_3;
 else {
  VAR_5->op_why_no_deleg = VAR_4;
  switch (VAR_5->op_deleg_want) {
  case 129:
  case 128:
  case 132:
   break;
  case 131:
   VAR_5->op_why_no_deleg = VAR_2;
   break;
  case 130:
   FUNC_0(1);
  }
 }
}

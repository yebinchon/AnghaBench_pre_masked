
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_hcb {int istat_sem; } ;
struct sym_ccb {scalar_t__ host_status; int to_abort; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sym_hcb*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sym_hcb*,int) ;

__attribute__((used)) static int FUNC_2(struct sym_hcb *VAR_4, struct sym_ccb *VAR_5, int VAR_6)
{



 if (!VAR_5 || !VAR_5->host_status || VAR_5->host_status == VAR_0)
  return -1;





 if (VAR_5->to_abort) {
  FUNC_1(VAR_4, 1);
  return 0;
 }




 VAR_5->to_abort = VAR_6 ? 2 : 1;




 VAR_4->istat_sem = VAR_1;
 FUNC_0(VAR_4, VAR_3, VAR_2|VAR_1);
 return 0;
}

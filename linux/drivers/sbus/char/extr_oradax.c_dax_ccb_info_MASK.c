
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ccb_info_result {scalar_t__ state; int q_pos; int q_num; int inst_num; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (unsigned long,int*) ;
 int FUNC_2 (char*,int ,scalar_t__,...) ;
 unsigned long FUNC_3 (int ,struct ccb_info_result*) ;

__attribute__((used)) static int FUNC_4(u64 VAR_2, struct ccb_info_result *VAR_3)
{
 unsigned long VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 FUNC_0("attempting info on ca_ra 0x%llx", VAR_2);
 VAR_4 = FUNC_3(VAR_2, VAR_3);

 if (VAR_4 == VAR_1) {
  FUNC_2("HV_EOK (ca_ra 0x%llx): %d", VAR_2, VAR_3->state);
  if (VAR_3->state == VAR_0) {
   FUNC_2("dax_unit %d, queue_num %d, queue_pos %d",
         VAR_3->inst_num, VAR_3->q_num, VAR_3->q_pos);
  }
 } else {
  VAR_5 = FUNC_1(VAR_4, &VAR_6);
  FUNC_0("%s (ca_ra 0x%llx)", VAR_5, VAR_2);
 }

 return VAR_6;
}

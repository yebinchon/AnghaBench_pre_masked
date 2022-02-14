
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int pwr_collapse_prep; } ;
struct hfi_sys_pc_prep_pkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct hfi_sys_pc_prep_pkt*) ;
 int FUNC_3 (struct venus_hfi_device*) ;
 int VAR_1 ;
 int FUNC_4 (struct venus_hfi_device*,struct hfi_sys_pc_prep_pkt*) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct venus_hfi_device *VAR_2,
     bool VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_1);
 struct hfi_sys_pc_prep_pkt VAR_5;
 int VAR_6;

 FUNC_0(&VAR_2->pwr_collapse_prep);

 FUNC_2(&VAR_5);

 VAR_6 = FUNC_4(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_5(&VAR_2->pwr_collapse_prep, VAR_4);
 if (!VAR_6) {
  FUNC_3(VAR_2);
  return -VAR_0;
 }

 return 0;
}

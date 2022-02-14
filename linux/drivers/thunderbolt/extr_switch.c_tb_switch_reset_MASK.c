
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tb_regs_switch_header {int route_hi; int member_0; int route_lo; int member_1; int enabled; int member_2; } ;
struct tb_cfg_result {int err; } ;
struct tb {int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tb_cfg_result FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int *,int,int ,int,int,int) ;
 int FUNC_2 (struct tb*,char*,int) ;

int FUNC_3(struct tb *VAR_2, u64 VAR_3)
{
 struct tb_cfg_result VAR_4;
 struct tb_regs_switch_header VAR_5 = {
  VAR_5.route_hi = VAR_3 >> 32,
  VAR_5.route_lo = VAR_3,
  VAR_5.enabled = 1,
 };
 FUNC_2(VAR_2, "resetting switch at %llx\n", VAR_3);
 VAR_4.err = FUNC_1(VAR_2->ctl, ((u32 *) &VAR_5) + 2, VAR_3,
   0, 2, 2, 2);
 if (VAR_4.err)
  return VAR_4.err;
 VAR_4 = FUNC_0(VAR_2->ctl, VAR_3, VAR_1);
 if (VAR_4.err > 0)
  return -VAR_0;
 return VAR_4.err;
}

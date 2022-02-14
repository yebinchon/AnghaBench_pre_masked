
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tb_ctl {int dummy; } ;
struct tb_cfg_result {int err; int response_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tb_cfg_result FUNC_0 (struct tb_ctl*,int *,int ,int ,int ,int ,int,int ) ;

int FUNC_1(struct tb_ctl *VAR_3, u64 VAR_4)
{
 u32 VAR_5;
 struct tb_cfg_result VAR_6 = FUNC_0(VAR_3, &VAR_5, VAR_4, 0,
         VAR_2, 0, 1,
         VAR_1);
 if (VAR_6.err == 1)
  return -VAR_0;
 if (VAR_6.err)
  return VAR_6.err;
 return VAR_6.response_port;
}

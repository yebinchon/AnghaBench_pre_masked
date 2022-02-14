
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int dummy; } ;
struct tb_cfg_result {int err; int member_0; } ;
struct tb_cfg_request {struct tb_cfg_result result; int work; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct tb_ctl*,struct tb_cfg_request*,int ,int *) ;
 int FUNC_4 (struct tb_cfg_request*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;

struct tb_cfg_result FUNC_6(struct tb_ctl *VAR_3,
      struct tb_cfg_request *VAR_4,
      int VAR_5)
{
 unsigned long VAR_6 = FUNC_2(VAR_5);
 struct tb_cfg_result VAR_7 = { 0 };
 FUNC_0(VAR_1);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_2, &VAR_1);
 if (VAR_8) {
  VAR_7.err = VAR_8;
  return VAR_7;
 }

 if (!FUNC_5(&VAR_1, VAR_6))
  FUNC_4(VAR_4, -VAR_0);

 FUNC_1(&VAR_4->work);

 return VAR_4->result;
}

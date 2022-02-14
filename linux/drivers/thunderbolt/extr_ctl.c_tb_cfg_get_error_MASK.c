
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int dummy; } ;
struct tb_cfg_result {scalar_t__ tb_error; } ;
typedef enum tb_cfg_space { ____Placeholder_tb_cfg_space } tb_cfg_space ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb_ctl*,struct tb_cfg_result const*) ;

__attribute__((used)) static int FUNC_1(struct tb_ctl *VAR_4, enum tb_cfg_space VAR_5,
       const struct tb_cfg_result *VAR_6)
{






 if (VAR_5 == VAR_3 &&
     VAR_6->tb_error == VAR_2)
  return -VAR_1;

 FUNC_0(VAR_4, VAR_6);
 return -VAR_0;
}

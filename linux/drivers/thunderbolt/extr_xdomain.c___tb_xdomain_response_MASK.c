
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int dummy; } ;
struct tb_cfg_request {size_t request_size; int request_type; void const* request; int copy; int match; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_ctl*,struct tb_cfg_request*,int ,struct tb_cfg_request*) ;
 struct tb_cfg_request* FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct tb_ctl *VAR_4, const void *VAR_5,
     size_t VAR_6, enum tb_cfg_pkg_type VAR_7)
{
 struct tb_cfg_request *VAR_8;

 VAR_8 = FUNC_1();
 if (!VAR_8)
  return -VAR_0;

 VAR_8->match = VAR_3;
 VAR_8->copy = VAR_2;
 VAR_8->request = VAR_5;
 VAR_8->request_size = VAR_6;
 VAR_8->request_type = VAR_7;

 return FUNC_0(VAR_4, VAR_8, VAR_1, VAR_8);
}

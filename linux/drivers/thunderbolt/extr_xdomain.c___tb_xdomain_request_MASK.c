
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int dummy; } ;
struct tb_cfg_result {int err; } ;
struct tb_cfg_request {size_t request_size; int request_type; size_t response_size; int response_type; void* response; void const* request; int copy; int match; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct tb_cfg_request* FUNC_0 () ;
 int FUNC_1 (struct tb_cfg_request*) ;
 struct tb_cfg_result FUNC_2 (struct tb_ctl*,struct tb_cfg_request*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct tb_ctl *VAR_4, const void *VAR_5,
 size_t VAR_6, enum tb_cfg_pkg_type VAR_7, void *VAR_8,
 size_t VAR_9, enum tb_cfg_pkg_type VAR_10,
 unsigned int VAR_11)
{
 struct tb_cfg_request *VAR_12;
 struct tb_cfg_result VAR_13;

 VAR_12 = FUNC_0();
 if (!VAR_12)
  return -VAR_1;

 VAR_12->match = VAR_3;
 VAR_12->copy = VAR_2;
 VAR_12->request = VAR_5;
 VAR_12->request_size = VAR_6;
 VAR_12->request_type = VAR_7;
 VAR_12->response = VAR_8;
 VAR_12->response_size = VAR_9;
 VAR_12->response_type = VAR_10;

 VAR_13 = FUNC_2(VAR_4, VAR_12, VAR_11);

 FUNC_1(VAR_12);

 return VAR_13.err == 1 ? -VAR_0 : VAR_13.err;
}

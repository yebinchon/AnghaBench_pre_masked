
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tb_ctl {int dummy; } ;
struct tb_cfg_result {int err; int member_0; } ;
struct tb_cfg_request {int request_size; int response_size; void* response_type; struct tb_cfg_header* response; void* request_type; struct cfg_reset_pkg* request; int copy; int match; } ;
struct tb_cfg_header {int dummy; } ;
struct cfg_reset_pkg {int header; } ;
typedef int request ;
typedef int reply ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct tb_cfg_request* FUNC_1 () ;
 int FUNC_2 (struct tb_cfg_request*) ;
 struct tb_cfg_result FUNC_3 (struct tb_ctl*,struct tb_cfg_request*,int) ;

struct tb_cfg_result FUNC_4(struct tb_ctl *VAR_4, u64 VAR_5,
      int VAR_6)
{
 struct cfg_reset_pkg VAR_7 = { .header = FUNC_0(VAR_5) };
 struct tb_cfg_result VAR_8 = { 0 };
 struct tb_cfg_header VAR_9;
 struct tb_cfg_request *VAR_10;

 VAR_10 = FUNC_1();
 if (!VAR_10) {
  VAR_8.err = -VAR_0;
  return VAR_8;
 }

 VAR_10->match = VAR_3;
 VAR_10->copy = VAR_2;
 VAR_10->request = &VAR_7;
 VAR_10->request_size = sizeof(VAR_7);
 VAR_10->request_type = VAR_1;
 VAR_10->response = &VAR_9;
 VAR_10->response_size = sizeof(VAR_9);
 VAR_10->response_type = VAR_1;

 VAR_8 = FUNC_3(VAR_4, VAR_10, VAR_6);

 FUNC_2(VAR_10);

 return VAR_8;
}

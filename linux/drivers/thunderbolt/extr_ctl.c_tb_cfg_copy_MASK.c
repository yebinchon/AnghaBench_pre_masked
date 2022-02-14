
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_cfg_result {int err; } ;
struct tb_cfg_request {struct tb_cfg_result result; int response_size; int response; int request; int response_type; } ;
struct ctl_pkg {int buffer; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct tb_cfg_result FUNC_1 (struct ctl_pkg const*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct tb_cfg_request *VAR_0, const struct ctl_pkg *VAR_1)
{
 struct tb_cfg_result VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_0->response_size, VAR_0->response_type,
      FUNC_2(VAR_0->request));
 if (!VAR_2.err)
  FUNC_0(VAR_0->response, VAR_1->buffer, VAR_0->response_size);

 VAR_0->result = VAR_2;


 return 1;
}

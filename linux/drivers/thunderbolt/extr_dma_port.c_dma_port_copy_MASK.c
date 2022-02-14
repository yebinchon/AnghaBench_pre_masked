
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_cfg_request {int response_size; int response; } ;
struct ctl_pkg {int buffer; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct tb_cfg_request *VAR_0, const struct ctl_pkg *VAR_1)
{
 FUNC_0(VAR_0->response, VAR_1->buffer, VAR_0->response_size);
 return 1;
}

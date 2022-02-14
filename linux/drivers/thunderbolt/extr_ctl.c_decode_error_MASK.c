
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_cfg_result {int err; scalar_t__ response_port; int tb_error; int response_route; int member_0; } ;
struct ctl_pkg {struct cfg_error_pkg* buffer; } ;
struct cfg_error_pkg {scalar_t__ port; int error; int zero1; int zero3; int zero2; int header; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ctl_pkg const*,int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct tb_cfg_result FUNC_3(const struct ctl_pkg *VAR_1)
{
 struct cfg_error_pkg *VAR_2 = VAR_1->buffer;
 struct tb_cfg_result VAR_3 = { 0 };
 VAR_3.response_route = FUNC_2(&VAR_2->header);
 VAR_3.response_port = 0;
 VAR_3.err = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0,
          FUNC_2(&VAR_2->header));
 if (VAR_3.err)
  return VAR_3;

 FUNC_0(VAR_2->zero1, "pkg->zero1 is %#x\n", VAR_2->zero1);
 FUNC_0(VAR_2->zero2, "pkg->zero1 is %#x\n", VAR_2->zero1);
 FUNC_0(VAR_2->zero3, "pkg->zero1 is %#x\n", VAR_2->zero1);
 VAR_3.err = 1;
 VAR_3.tb_error = VAR_2->error;
 VAR_3.response_port = VAR_2->port;
 return VAR_3;

}

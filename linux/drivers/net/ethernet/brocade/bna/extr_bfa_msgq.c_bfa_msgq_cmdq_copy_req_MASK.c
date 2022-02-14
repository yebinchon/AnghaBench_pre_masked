
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_msgq_i2h_cmdq_copy_req {int len; int offset; } ;
struct bfi_mbmsg {int dummy; } ;
struct bfa_msgq_cmdq {void* bytes_to_copy; void* offset; scalar_t__ token; } ;


 int FUNC_0 (struct bfa_msgq_cmdq*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_msgq_cmdq *VAR_0, struct bfi_mbmsg *VAR_1)
{
 struct bfi_msgq_i2h_cmdq_copy_req *VAR_2 =
  (struct bfi_msgq_i2h_cmdq_copy_req *)VAR_1;

 VAR_0->token = 0;
 VAR_0->offset = FUNC_1(VAR_2->offset);
 VAR_0->bytes_to_copy = FUNC_1(VAR_2->len);
 FUNC_0(VAR_0);
}

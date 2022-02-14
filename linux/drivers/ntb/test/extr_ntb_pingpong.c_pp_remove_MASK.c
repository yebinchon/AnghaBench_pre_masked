
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_ctx {int dummy; } ;
struct ntb_dev {struct pp_ctx* ctx; } ;
struct ntb_client {int dummy; } ;


 int FUNC_0 (struct pp_ctx*) ;
 int FUNC_1 (struct pp_ctx*) ;
 int FUNC_2 (struct pp_ctx*) ;

__attribute__((used)) static void FUNC_3(struct ntb_client *VAR_0, struct ntb_dev *VAR_1)
{
 struct pp_ctx *VAR_2 = VAR_1->ctx;

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2);
}

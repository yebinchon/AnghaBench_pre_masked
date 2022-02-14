
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_msit_ctx {TYPE_1__* peers; } ;
struct ntb_dev {struct ntb_msit_ctx* ctx; } ;
struct ntb_client {int dummy; } ;
struct TYPE_2__ {int msi_desc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ntb_dev*) ;
 int FUNC_2 (struct ntb_dev*,int ) ;
 int FUNC_3 (struct ntb_dev*) ;
 int FUNC_4 (struct ntb_dev*) ;
 int FUNC_5 (struct ntb_dev*) ;
 int FUNC_6 (struct ntb_msit_ctx*) ;
 int FUNC_7 (struct ntb_dev*) ;

__attribute__((used)) static void FUNC_8(struct ntb_client *VAR_0, struct ntb_dev *VAR_1)
{
 struct ntb_msit_ctx *VAR_2 = VAR_1->ctx;
 int VAR_3;

 FUNC_4(VAR_1);
 FUNC_2(VAR_1, FUNC_3(VAR_1));
 FUNC_5(VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_7(VAR_1); VAR_3++)
  FUNC_0(VAR_2->peers[VAR_3].msi_desc);

 FUNC_1(VAR_1);
 FUNC_6(VAR_2);
}

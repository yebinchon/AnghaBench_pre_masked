
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {TYPE_1__* core; int fh; int lock; int m2m_dev; int m2m_ctx; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev_enc; } ;


 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct venus_inst* FUNC_4 (struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct venus_inst*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0)
{
 struct venus_inst *VAR_1 = FUNC_4(VAR_0);

 FUNC_7(VAR_1->m2m_ctx);
 FUNC_8(VAR_1->m2m_dev);
 FUNC_9(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);
 FUNC_5(&VAR_1->fh);
 FUNC_6(&VAR_1->fh);

 FUNC_3(VAR_1->core->dev_enc);

 FUNC_1(VAR_1);
 return 0;
}

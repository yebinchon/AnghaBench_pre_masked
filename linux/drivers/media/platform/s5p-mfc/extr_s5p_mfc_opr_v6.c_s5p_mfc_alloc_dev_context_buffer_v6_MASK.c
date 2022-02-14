
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int virt; int size; } ;
struct s5p_mfc_dev {TYPE_3__ ctx_buf; TYPE_2__* variant; } ;
struct s5p_mfc_buf_size_v6 {int dev_ctx; } ;
struct TYPE_5__ {TYPE_1__* buf_size; } ;
struct TYPE_4__ {struct s5p_mfc_buf_size_v6* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct s5p_mfc_dev*,int ,TYPE_3__*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct s5p_mfc_dev *VAR_1)
{
 struct s5p_mfc_buf_size_v6 *VAR_2 = VAR_1->variant->buf_size->priv;
 int VAR_3;

 FUNC_1();

 VAR_1->ctx_buf.size = VAR_2->dev_ctx;
 VAR_3 = FUNC_4(VAR_1, VAR_0, &VAR_1->ctx_buf);
 if (VAR_3) {
  FUNC_3("Failed to allocate device context buffer\n");
  return VAR_3;
 }

 FUNC_0(VAR_1->ctx_buf.virt, 0, VAR_2->dev_ctx);
 FUNC_5();

 FUNC_2();

 return 0;
}

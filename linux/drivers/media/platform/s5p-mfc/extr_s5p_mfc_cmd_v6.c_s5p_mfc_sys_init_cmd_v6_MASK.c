
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dma; } ;
struct s5p_mfc_dev {TYPE_3__ ctx_buf; int mfc_ops; TYPE_2__* variant; } ;
struct s5p_mfc_cmd_args {int dummy; } ;
struct s5p_mfc_buf_size_v6 {int dev_ctx; } ;
struct TYPE_5__ {TYPE_1__* buf_size; } ;
struct TYPE_4__ {struct s5p_mfc_buf_size_v6* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5p_mfc_dev*,int ,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;
 int FUNC_2 (int ,int ,struct s5p_mfc_dev*) ;

__attribute__((used)) static int FUNC_3(struct s5p_mfc_dev *VAR_4)
{
 struct s5p_mfc_cmd_args VAR_5;
 struct s5p_mfc_buf_size_v6 *VAR_6 = VAR_4->variant->buf_size->priv;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4->mfc_ops, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4, VAR_4->ctx_buf.dma, VAR_0);
 FUNC_0(VAR_4, VAR_6->dev_ctx, VAR_1);
 return FUNC_1(VAR_4, VAR_2,
     &VAR_5);
}

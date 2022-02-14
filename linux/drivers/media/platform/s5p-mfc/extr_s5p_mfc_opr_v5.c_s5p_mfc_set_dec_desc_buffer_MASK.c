
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s5p_mfc_dev {TYPE_2__* variant; } ;
struct TYPE_6__ {int dma; } ;
struct s5p_mfc_ctx {TYPE_3__ dsc; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf_size_v5 {int dsc; } ;
struct TYPE_5__ {TYPE_1__* buf_size; } ;
struct TYPE_4__ {struct s5p_mfc_buf_size_v5* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s5p_mfc_ctx *VAR_2)
{
 struct s5p_mfc_dev *VAR_3 = VAR_2->dev;
 struct s5p_mfc_buf_size_v5 *VAR_4 = VAR_3->variant->buf_size->priv;

 FUNC_1(VAR_3, FUNC_0(VAR_2->dsc.dma), VAR_0);
 FUNC_1(VAR_3, VAR_4->dsc, VAR_1);
}

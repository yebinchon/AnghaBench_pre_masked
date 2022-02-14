
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s5p_mfc_dev {TYPE_2__* variant; } ;
struct TYPE_6__ {int dma; int size; int virt; } ;
struct s5p_mfc_ctx {TYPE_3__ dsc; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf_size_v5 {int dsc; } ;
struct TYPE_5__ {TYPE_1__* buf_size; } ;
struct TYPE_4__ {struct s5p_mfc_buf_size_v5* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s5p_mfc_dev*,int ,TYPE_3__*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_2)
{
 struct s5p_mfc_dev *VAR_3 = VAR_2->dev;
 struct s5p_mfc_buf_size_v5 *VAR_4 = VAR_3->variant->buf_size->priv;
 int VAR_5;

 VAR_2->dsc.size = VAR_4->dsc;
 VAR_5 = FUNC_3(VAR_3, VAR_0, &VAR_2->dsc);
 if (VAR_5) {
  FUNC_2("Failed to allocate temporary buffer\n");
  return VAR_5;
 }

 FUNC_0(VAR_2->dsc.dma & ((1 << VAR_1) - 1));
 FUNC_1(VAR_2->dsc.virt, 0, VAR_2->dsc.size);
 FUNC_4();
 return 0;
}

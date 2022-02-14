
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_mfc_priv_buf {scalar_t__ virt; int size; } ;
struct s5p_mfc_dev {struct s5p_mfc_priv_buf fw_buf; TYPE_2__* variant; } ;
struct TYPE_4__ {TYPE_1__* buf_size; } ;
struct TYPE_3__ {int fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,struct s5p_mfc_priv_buf*) ;

int FUNC_2(struct s5p_mfc_dev *VAR_2)
{
 struct s5p_mfc_priv_buf *VAR_3 = &VAR_2->fw_buf;
 int VAR_4;

 VAR_3->size = VAR_2->variant->buf_size->fw;

 if (VAR_3->virt) {
  FUNC_0("Attempting to allocate firmware when it seems that it is already loaded\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_0, &VAR_2->fw_buf);
 if (VAR_4) {
  FUNC_0("Allocating bitprocessor buffer failed\n");
  return VAR_4;
 }

 return 0;
}

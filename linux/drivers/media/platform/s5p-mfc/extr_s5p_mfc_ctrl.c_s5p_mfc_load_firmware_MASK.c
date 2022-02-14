
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; int virt; } ;
struct s5p_mfc_dev {int fw_get_done; int fw_ver; TYPE_3__ fw_buf; TYPE_2__* plat_dev; TYPE_1__* variant; } ;
struct firmware {scalar_t__ size; int data; } ;
typedef enum s5p_mfc_fw_ver { ____Placeholder_s5p_mfc_fw_ver } s5p_mfc_fw_ver ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int * fw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct firmware*) ;
 int FUNC_5 (struct firmware const**,int ,int *) ;
 int FUNC_6 () ;

int FUNC_7(struct s5p_mfc_dev *VAR_3)
{
 struct firmware *VAR_4;
 int VAR_5, VAR_6 = -VAR_0;



 FUNC_1();

 if (VAR_3->fw_get_done)
  return 0;

 for (VAR_5 = VAR_2 - 1; VAR_5 >= 0; VAR_5--) {
  if (!VAR_3->variant->fw_name[VAR_5])
   continue;
  VAR_6 = FUNC_5((const struct firmware **)&VAR_4,
    VAR_3->variant->fw_name[VAR_5], &VAR_3->plat_dev->dev);
  if (!VAR_6) {
   VAR_3->fw_ver = (enum s5p_mfc_fw_ver) VAR_5;
   break;
  }
 }

 if (VAR_6 != 0) {
  FUNC_3("Firmware is not present in the /lib/firmware directory nor compiled in kernel\n");
  return -VAR_0;
 }
 if (VAR_4->size > VAR_3->fw_buf.size) {
  FUNC_3("MFC firmware is too big to be loaded\n");
  FUNC_4(VAR_4);
  return -VAR_1;
 }
 FUNC_0(VAR_3->fw_buf.virt, VAR_4->data, VAR_4->size);
 FUNC_6();
 VAR_3->fw_get_done = 1;
 FUNC_4(VAR_4);
 FUNC_2();
 return 0;
}

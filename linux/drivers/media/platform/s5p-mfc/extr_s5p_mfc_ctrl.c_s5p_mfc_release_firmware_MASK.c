
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int fw_get_done; int fw_buf; } ;


 int FUNC_0 (struct s5p_mfc_dev*,int *) ;

int FUNC_1(struct s5p_mfc_dev *VAR_0)
{


 FUNC_0(VAR_0, &VAR_0->fw_buf);
 VAR_0->fw_get_done = 0;
 return 0;
}

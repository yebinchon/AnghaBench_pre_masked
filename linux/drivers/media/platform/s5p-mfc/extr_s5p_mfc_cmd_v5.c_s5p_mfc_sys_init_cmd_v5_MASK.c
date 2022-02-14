
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct s5p_mfc_dev {TYPE_1__ fw_buf; } ;
struct s5p_mfc_cmd_args {int * arg; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5p_mfc_cmd_args*,int ,int) ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_dev *VAR_1)
{
 struct s5p_mfc_cmd_args VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(struct s5p_mfc_cmd_args));
 VAR_2.arg[0] = VAR_1->fw_buf.size;
 return FUNC_1(VAR_1, VAR_0,
   &VAR_2);
}

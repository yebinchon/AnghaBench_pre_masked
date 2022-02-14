
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_cmd_args {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5p_mfc_cmd_args*,int ,int) ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_dev *VAR_1)
{
 struct s5p_mfc_cmd_args VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(struct s5p_mfc_cmd_args));
 return FUNC_1(VAR_1, VAR_0,
     &VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int curr_ctx; } ;
struct s5p_mfc_ctx {scalar_t__ state; int inst_no; int num; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_cmd_args {int * arg; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5p_mfc_cmd_args*,int ,int) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct s5p_mfc_ctx *VAR_4)
{
 struct s5p_mfc_dev *VAR_5 = VAR_4->dev;
 struct s5p_mfc_cmd_args VAR_6;
 int VAR_7;

 if (VAR_4->state == VAR_2) {
  FUNC_2("Instance already returned\n");
  VAR_4->state = VAR_1;
  return -VAR_0;
 }

 FUNC_1(2, "Returning instance number %d\n", VAR_4->inst_no);
 VAR_5->curr_ctx = VAR_4->num;
 FUNC_0(&VAR_6, 0, sizeof(struct s5p_mfc_cmd_args));
 VAR_6.arg[0] = VAR_4->inst_no;
 VAR_7 = FUNC_3(VAR_5, VAR_3,
        &VAR_6);
 if (VAR_7) {
  FUNC_2("Failed to return an instance\n");
  VAR_4->state = VAR_1;
  return -VAR_0;
 }
 return 0;
}

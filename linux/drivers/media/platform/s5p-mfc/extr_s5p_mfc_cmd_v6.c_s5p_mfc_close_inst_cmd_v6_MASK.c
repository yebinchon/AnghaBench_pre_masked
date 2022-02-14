
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int curr_ctx; } ;
struct s5p_mfc_ctx {scalar_t__ state; int inst_no; int num; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_cmd_args {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5p_mfc_dev*,int ,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_ctx *VAR_4)
{
 struct s5p_mfc_dev *VAR_5 = VAR_4->dev;
 struct s5p_mfc_cmd_args VAR_6;
 int VAR_7 = 0;

 VAR_5->curr_ctx = VAR_4->num;
 if (VAR_4->state != VAR_1) {
  FUNC_0(VAR_5, VAR_4->inst_no, VAR_3);
  VAR_7 = FUNC_1(VAR_5,
     VAR_2,
     &VAR_6);
 } else {
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {scalar_t__ type; int state; int inst_no; int mfc_ops; } ;
struct s5p_mfc_ctx {scalar_t__ type; int state; int inst_no; int mfc_ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_2 (struct s5p_mfc_dev*,int ,int ) ;
 int FUNC_3 (struct s5p_mfc_dev*) ;
 int VAR_8 ;

void FUNC_4(struct s5p_mfc_dev *VAR_9, struct s5p_mfc_ctx *VAR_10)
{
 VAR_10->state = VAR_2;
 FUNC_3(VAR_10);
 FUNC_1(VAR_9->mfc_ops, VAR_8, VAR_9);

 if (FUNC_2(VAR_10,
    VAR_4, 0))
  FUNC_0("Err returning instance\n");


 FUNC_1(VAR_9->mfc_ops, VAR_5, VAR_10);
 FUNC_1(VAR_9->mfc_ops, VAR_7, VAR_10);
 if (VAR_10->type == VAR_0)
  FUNC_1(VAR_9->mfc_ops, VAR_6, VAR_10);

 VAR_10->inst_no = VAR_3;
 VAR_10->state = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int instance_id; } ;
struct s5p_mfc_dev {int mfc_cmds; int curr_ctx; struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {int inst_no; int num; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct s5p_mfc_dev*,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct s5p_mfc_ctx *VAR_2, int VAR_3)
{
 struct s5p_mfc_dev *VAR_4 = VAR_2->dev;
 const struct s5p_mfc_regs *VAR_5 = VAR_4->mfc_regs;

 if (VAR_3) {
  VAR_4->curr_ctx = VAR_2->num;
  FUNC_1(VAR_2->inst_no, VAR_5->instance_id);
  FUNC_0(VAR_4->mfc_cmds, VAR_1, VAR_4,
    VAR_0, ((void*)0));
 }
}

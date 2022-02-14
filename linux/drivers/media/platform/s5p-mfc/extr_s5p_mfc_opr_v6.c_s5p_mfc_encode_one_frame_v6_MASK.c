
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int instance_id; } ;
struct s5p_mfc_dev {int mfc_cmds; struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {scalar_t__ codec_mode; scalar_t__ state; int inst_no; struct s5p_mfc_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;
 int FUNC_2 (int ,int ,struct s5p_mfc_dev*,int,int *) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_5)
{
 struct s5p_mfc_dev *VAR_6 = VAR_5->dev;
 const struct s5p_mfc_regs *VAR_7 = VAR_6->mfc_regs;
 int VAR_8;

 FUNC_0(2, "++\n");



 if (VAR_5->codec_mode == VAR_3)
  FUNC_1(VAR_5);

 FUNC_3(VAR_5);

 if (VAR_5->state != VAR_0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 FUNC_4(VAR_5->inst_no, VAR_7->instance_id);
 FUNC_2(VAR_6->mfc_cmds, VAR_4, VAR_6, VAR_8, ((void*)0));

 FUNC_0(2, "--\n");

 return 0;
}

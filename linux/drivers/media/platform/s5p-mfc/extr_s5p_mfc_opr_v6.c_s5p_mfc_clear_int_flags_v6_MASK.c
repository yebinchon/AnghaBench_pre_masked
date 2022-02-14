
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int risc2host_int; int risc2host_command; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct s5p_mfc_dev *VAR_0)
{
 const struct s5p_mfc_regs *VAR_1 = VAR_0->mfc_regs;
 FUNC_0(0, VAR_1->risc2host_command);
 FUNC_0(0, VAR_1->risc2host_int);
}

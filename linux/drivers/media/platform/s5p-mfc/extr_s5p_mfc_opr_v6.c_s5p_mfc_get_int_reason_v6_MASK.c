
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {TYPE_1__* mfc_regs; } ;
struct TYPE_2__ {int risc2host_command; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct s5p_mfc_dev *VAR_1)
{
 return FUNC_0(VAR_1->mfc_regs->risc2host_command) &
  VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int cr_int_addr; int completion; } ;
struct zd_usb_interrupt {TYPE_1__ read_regs; int read_regs_enabled; int interval; int lock; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zd_usb*) ;

__attribute__((used)) static inline void FUNC_6(struct zd_usb *VAR_1)
{
 struct zd_usb_interrupt *VAR_2 = &VAR_1->intr;

 FUNC_4(&VAR_2->lock);
 VAR_2->interval = FUNC_3(FUNC_5(VAR_1));
 FUNC_2(&VAR_2->read_regs.completion);
 FUNC_0(&VAR_2->read_regs_enabled, 0);
 VAR_2->read_regs.cr_int_addr = FUNC_1((u16)VAR_0);
}

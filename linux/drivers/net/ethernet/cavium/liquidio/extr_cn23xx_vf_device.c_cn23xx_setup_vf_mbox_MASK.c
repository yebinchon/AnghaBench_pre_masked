
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct octeon_mbox* ctxptr; int work; } ;
struct octeon_mbox {int * mbox_read_reg; TYPE_2__ mbox_poll_wk; int * mbox_write_reg; int * mbox_int_reg; int state; scalar_t__ q_no; struct octeon_device* oct_dev; int lock; } ;
struct octeon_device {struct octeon_mbox** mbox; TYPE_1__* mmio; } ;
struct TYPE_3__ {scalar_t__ hw_addr; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct octeon_mbox*,int ,int) ;
 int FUNC_4 (int *) ;
 struct octeon_mbox* FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct octeon_device *VAR_3)
{
 struct octeon_mbox *VAR_4 = ((void*)0);

 VAR_4 = FUNC_5(sizeof(*VAR_4));
 if (!VAR_4)
  return 1;

 FUNC_3(VAR_4, 0, sizeof(struct octeon_mbox));

 FUNC_4(&VAR_4->lock);

 VAR_4->oct_dev = VAR_3;

 VAR_4->q_no = 0;

 VAR_4->state = VAR_0;


 VAR_4->mbox_int_reg =
     (u8 *)VAR_3->mmio[0].hw_addr + FUNC_1(0);

 VAR_4->mbox_read_reg =
     (u8 *)VAR_3->mmio[0].hw_addr + FUNC_0(0, 0);

 VAR_4->mbox_write_reg =
     (u8 *)VAR_3->mmio[0].hw_addr + FUNC_0(0, 1);

 FUNC_2(&VAR_4->mbox_poll_wk.work,
     VAR_2);

 VAR_4->mbox_poll_wk.ctxptr = VAR_4;

 VAR_3->mbox[0] = VAR_4;

 FUNC_6(VAR_1, VAR_4->mbox_read_reg);

 return 0;
}

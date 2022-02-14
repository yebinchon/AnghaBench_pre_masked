
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct octeon_ioq_vector {int droq_index; struct octeon_device* oct_dev; } ;
struct octeon_device {TYPE_2__** mbox; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ mbox_poll_wk; int mbox_int_reg; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct octeon_ioq_vector *VAR_0)
{
 struct octeon_device *VAR_1 = VAR_0->oct_dev;
 u64 VAR_2;

 if (!VAR_0->droq_index) {

  VAR_2 = FUNC_2(VAR_1->mbox[0]->mbox_int_reg);
  FUNC_4(VAR_2, VAR_1->mbox[0]->mbox_int_reg);
  if (FUNC_1(VAR_1->mbox[0]))
   FUNC_3(&VAR_1->mbox[0]->mbox_poll_wk.work,
           FUNC_0(0));
 }
}

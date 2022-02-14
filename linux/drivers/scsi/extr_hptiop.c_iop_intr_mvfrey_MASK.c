
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int* outlist_cptr; int outlist_rptr; int list_count; TYPE_2__* mu; TYPE_1__* outlist; } ;
struct TYPE_8__ {TYPE_3__ mvfrey; } ;
struct hptiop_hba {TYPE_4__ u; scalar_t__ initialized; } ;
struct TYPE_6__ {int pcie_f0_int_enable; int isr_cause; int cpu_to_f0_msg_a; int f0_doorbell; } ;
struct TYPE_5__ {int val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct hptiop_hba*,int) ;
 int FUNC_3 (struct hptiop_hba*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct hptiop_hba *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 if (VAR_2->initialized)
  FUNC_5(0, &(VAR_2->u.mvfrey.mu->pcie_f0_int_enable));

 VAR_4 = FUNC_4(&(VAR_2->u.mvfrey.mu->f0_doorbell));
 if (VAR_4) {
  FUNC_5(VAR_4, &(VAR_2->u.mvfrey.mu->f0_doorbell));
  if (VAR_4 & VAR_0) {
   u32 VAR_8 = FUNC_4(&(VAR_2->u.mvfrey.mu->cpu_to_f0_msg_a));
   FUNC_1("received outbound msg %x\n", VAR_8);
   FUNC_2(VAR_2, VAR_8);
  }
  VAR_7 = 1;
 }

 VAR_4 = FUNC_4(&(VAR_2->u.mvfrey.mu->isr_cause));
 if (VAR_4) {
  FUNC_5(VAR_4, &(VAR_2->u.mvfrey.mu->isr_cause));
  do {
   VAR_5 = *VAR_2->u.mvfrey.outlist_cptr & 0xff;
   VAR_6 = VAR_2->u.mvfrey.outlist_rptr;
   while (VAR_6 != VAR_5) {
    VAR_6++;
    if (VAR_6 == VAR_2->u.mvfrey.list_count)
     VAR_6 = 0;

    VAR_3 = VAR_2->u.mvfrey.outlist[VAR_6].val;
    FUNC_0(!(VAR_3 & VAR_1));
    FUNC_3(VAR_2, VAR_3);
    VAR_7 = 1;
   }
   VAR_2->u.mvfrey.outlist_rptr = VAR_6;
  } while (VAR_5 != (*VAR_2->u.mvfrey.outlist_cptr & 0xff));
 }

 if (VAR_2->initialized)
  FUNC_5(0x1010, &(VAR_2->u.mvfrey.mu->pcie_f0_int_enable));

 return VAR_7;
}

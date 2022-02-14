
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
struct sym_tcb {int dummy; } ;
struct TYPE_6__ {void* size; void* addr; } ;
struct sym_pmc {TYPE_3__ sg; void* ret; } ;
struct sym_hcb {int dummy; } ;
struct TYPE_5__ {TYPE_1__* data; struct sym_pmc pm1; struct sym_pmc pm0; } ;
struct sym_ccb {int host_flags; int goalp; TYPE_2__ phys; } ;
struct TYPE_4__ {int size; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ,int) ;
 int FUNC_2 (struct sym_hcb*,int) ;
 int FUNC_3 (struct sym_hcb*,int ) ;
 int FUNC_4 (struct sym_hcb*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sym_hcb*,struct sym_ccb*,int,int*) ;
 int FUNC_8 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_9 (struct sym_hcb*,struct sym_ccb*,int) ;

__attribute__((used)) static void FUNC_10(struct sym_hcb *VAR_9, struct sym_tcb *VAR_10, struct sym_ccb *VAR_11, int VAR_12)
{
 int VAR_13 = VAR_12;
 u32 VAR_14 = FUNC_8 (VAR_9, VAR_11);
 u32 VAR_15;
 u32 VAR_16;
 u_char VAR_17;
 int VAR_18;
 struct sym_pmc *VAR_19;




 if (VAR_11->host_flags & VAR_3)
  goto out_reject;





 VAR_18 = FUNC_7(VAR_9, VAR_11, VAR_14, &VAR_13);
 if (VAR_18 < 0)
  goto out_reject;





 VAR_15 = FUNC_5(VAR_11->goalp);
 VAR_15 = VAR_15 - 8 - (VAR_4 - VAR_18) * (2*4);





 if (VAR_13 == 0) {
  VAR_14 = VAR_15;
  goto out_ok;
 }




 VAR_17 = FUNC_0(VAR_9, VAR_2);

 if (VAR_17 & VAR_1)
  VAR_17 ^= VAR_0;

 if (!(VAR_17 & VAR_0)) {
  VAR_19 = &VAR_11->phys.pm0;
  VAR_14 = FUNC_3(VAR_9, VAR_7);
 }
 else {
  VAR_19 = &VAR_11->phys.pm1;
  VAR_14 = FUNC_3(VAR_9, VAR_8);
 }

 VAR_17 &= ~(VAR_1);

 FUNC_1(VAR_9, VAR_2, VAR_17);
 VAR_19->ret = FUNC_5(VAR_15);
 VAR_16 = FUNC_6(VAR_11->phys.data[VAR_18-1].addr);
 VAR_16 += FUNC_6(VAR_11->phys.data[VAR_18-1].size) + VAR_13;
 VAR_19->sg.addr = FUNC_5(VAR_16);
 VAR_19->sg.size = FUNC_5(-VAR_13);

out_ok:
 FUNC_9 (VAR_9, VAR_11, VAR_14);
 FUNC_2(VAR_9, FUNC_3(VAR_9, VAR_5));
 return;

out_reject:
 FUNC_2(VAR_9, FUNC_4(VAR_9, VAR_6));
}

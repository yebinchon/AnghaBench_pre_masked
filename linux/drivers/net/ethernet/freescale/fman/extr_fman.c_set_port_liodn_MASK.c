
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fman {TYPE_1__* bmi_regs; TYPE_2__* dma_regs; } ;
struct TYPE_4__ {int * fmdmplr; } ;
struct TYPE_3__ {int * fmbm_spliodn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct fman *VAR_2, u8 VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;


 VAR_6 = FUNC_0(&VAR_2->dma_regs->fmdmplr[VAR_3 / 2]);
 if (VAR_3 % 2) {
  VAR_6 &= ~VAR_0;
  VAR_6 |= VAR_4;
 } else {
  VAR_6 &= ~(VAR_0 << VAR_1);
  VAR_6 |= VAR_4 << VAR_1;
 }
 FUNC_1(VAR_6, &VAR_2->dma_regs->fmdmplr[VAR_3 / 2]);
 FUNC_1(VAR_5, &VAR_2->bmi_regs->fmbm_spliodn[VAR_3 - 1]);
}

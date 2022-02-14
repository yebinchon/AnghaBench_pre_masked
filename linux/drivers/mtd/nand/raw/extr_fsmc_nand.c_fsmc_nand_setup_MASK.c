
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsmc_nand_timings {int tclr; int tar; int thiz; int thold; int twait; int tset; } ;
struct TYPE_2__ {int options; } ;
struct fsmc_nand_data {scalar_t__ regs_va; TYPE_1__ nand; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fsmc_nand_data *VAR_20,
       struct fsmc_nand_timings *VAR_21)
{
 u32 VAR_22 = VAR_2 | VAR_4 | VAR_18;
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_23 = (VAR_21->tclr & VAR_8) << VAR_9;
 VAR_24 = (VAR_21->tar & VAR_6) << VAR_7;
 VAR_25 = (VAR_21->thiz & VAR_10) << VAR_11;
 VAR_26 = (VAR_21->thold & VAR_12) << VAR_13;
 VAR_27 = (VAR_21->twait & VAR_16) << VAR_17;
 VAR_28 = (VAR_21->tset & VAR_14) << VAR_15;

 if (VAR_20->nand.options & VAR_19)
  VAR_22 |= VAR_3;

 FUNC_0(VAR_22 | VAR_23 | VAR_24, VAR_20->regs_va + VAR_5);
 FUNC_0(VAR_25 | VAR_26 | VAR_27 | VAR_28, VAR_20->regs_va + VAR_1);
 FUNC_0(VAR_25 | VAR_26 | VAR_27 | VAR_28, VAR_20->regs_va + VAR_0);
}

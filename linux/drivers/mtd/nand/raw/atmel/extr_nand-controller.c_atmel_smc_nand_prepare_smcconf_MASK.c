
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tRC_min; int tWP_min; int tCLS_min; int tDS_min; int tCLH_min; int tWC_min; int tREH_min; int tRHOH_min; int tRHZ_max; int tRP_min; int tCLR_min; int tADL_min; int tAR_min; int tRR_min; int tWB_max; int tWH_min; int tDH_min; int tALH_min; int tCH_min; int tALS_min; int tCS_min; } ;
struct TYPE_5__ {TYPE_1__ sdr; } ;
struct nand_data_interface {scalar_t__ type; TYPE_2__ timings; } ;
struct atmel_smc_cs_conf {int mode; int timings; } ;
struct atmel_nand_controller {int mck; } ;
struct TYPE_6__ {int options; int controller; } ;
struct atmel_nand {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct atmel_smc_cs_conf*) ;
 int FUNC_3 (struct atmel_smc_cs_conf*,int ,int) ;
 int FUNC_4 (struct atmel_smc_cs_conf*,int ,int) ;
 int FUNC_5 (struct atmel_smc_cs_conf*,int ,int) ;
 int FUNC_6 (struct atmel_smc_cs_conf*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int ,int ) ;
 struct atmel_nand_controller* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct atmel_nand *VAR_21,
     const struct nand_data_interface *VAR_22,
     struct atmel_smc_cs_conf *VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26, VAR_27;
 struct atmel_nand_controller *VAR_28;
 int VAR_29;

 VAR_28 = FUNC_10(VAR_21->base.controller);


 if (VAR_22->type != VAR_19)
  return -VAR_16;





 if (VAR_22->timings.sdr.tRC_min < 30000)
  return -VAR_16;

 FUNC_2(VAR_23);

 VAR_27 = VAR_20 / FUNC_7(VAR_28->mck);
 VAR_27 *= 1000;






 VAR_24 = FUNC_1(VAR_22->timings.sdr.tWP_min, VAR_27);
 VAR_25 = VAR_24;
 VAR_29 = FUNC_4(VAR_23, VAR_15,
       VAR_24);
 if (VAR_29)
  return VAR_29;
 VAR_26 = FUNC_9(VAR_22->timings.sdr.tCLS_min, VAR_22->timings.sdr.tCS_min,
        VAR_22->timings.sdr.tALS_min);
 VAR_26 = FUNC_8(VAR_26, VAR_22->timings.sdr.tDS_min);
 VAR_24 = FUNC_1(VAR_26, VAR_27);
 VAR_24 = VAR_24 > VAR_25 ? VAR_24 - VAR_25 : 0;
 VAR_25 += VAR_24;
 VAR_29 = FUNC_5(VAR_23, VAR_15,
       VAR_24);
 if (VAR_29)
  return VAR_29;







 VAR_26 = FUNC_9(VAR_22->timings.sdr.tCLH_min, VAR_22->timings.sdr.tCH_min,
        VAR_22->timings.sdr.tALH_min);
 VAR_26 = FUNC_9(VAR_26, VAR_22->timings.sdr.tDH_min,
        VAR_22->timings.sdr.tWH_min);
 VAR_24 = FUNC_1(VAR_26, VAR_27);
 VAR_25 += VAR_24;
 VAR_24 = FUNC_1(VAR_22->timings.sdr.tWC_min, VAR_27);
 VAR_24 = FUNC_8(VAR_25, VAR_24);
 VAR_29 = FUNC_3(VAR_23, VAR_15,
       VAR_24);
 if (VAR_29)
  return VAR_29;
 VAR_29 = FUNC_4(VAR_23, VAR_13,
       VAR_24);
 if (VAR_29)
  return VAR_29;







 VAR_26 = FUNC_8(VAR_22->timings.sdr.tREH_min, VAR_22->timings.sdr.tRHOH_min);
 VAR_24 = FUNC_1(VAR_26, VAR_27);
 VAR_25 = VAR_24;




 VAR_24 = FUNC_1(VAR_22->timings.sdr.tRHZ_max, VAR_27);
 VAR_24 -= VAR_25;







 if (VAR_24 > VAR_9)
  VAR_24 = VAR_9;
 else if (VAR_24 < VAR_10)
  VAR_24 = VAR_10;

 VAR_23->mode |= FUNC_0(VAR_24) |
    VAR_8;






 VAR_24 = FUNC_1(VAR_22->timings.sdr.tRP_min, VAR_27);
 VAR_25 += VAR_24;
 VAR_29 = FUNC_4(VAR_23, VAR_14,
       VAR_24);
 if (VAR_29)
  return VAR_29;
 VAR_24 = FUNC_1(VAR_22->timings.sdr.tRC_min, VAR_27);
 VAR_24 = FUNC_8(VAR_25, VAR_24);
 VAR_29 = FUNC_3(VAR_23, VAR_14,
       VAR_24);
 if (VAR_29)
  return VAR_29;
 VAR_29 = FUNC_4(VAR_23, VAR_12,
       VAR_24);
 if (VAR_29)
  return VAR_29;


 VAR_24 = FUNC_1(VAR_22->timings.sdr.tCLR_min, VAR_27);
 VAR_29 = FUNC_6(VAR_23,
        VAR_3,
        VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_24 = FUNC_1(VAR_22->timings.sdr.tADL_min, VAR_27);
 VAR_29 = FUNC_6(VAR_23,
        VAR_1,
        VAR_24);
 if (VAR_29 && VAR_29 != -VAR_17)
  return VAR_29;

 VAR_24 = FUNC_1(VAR_22->timings.sdr.tAR_min, VAR_27);
 VAR_29 = FUNC_6(VAR_23,
        VAR_2,
        VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_24 = FUNC_1(VAR_22->timings.sdr.tRR_min, VAR_27);
 VAR_29 = FUNC_6(VAR_23,
        VAR_4,
        VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_24 = FUNC_1(VAR_22->timings.sdr.tWB_max, VAR_27);
 VAR_29 = FUNC_6(VAR_23,
        VAR_5,
        VAR_24);
 if (VAR_29)
  return VAR_29;


 VAR_23->timings |= VAR_0;


 if (VAR_21->base.options & VAR_18)
  VAR_23->mode |= VAR_6;


 VAR_23->mode |= VAR_7 |
    VAR_11;

 return 0;
}

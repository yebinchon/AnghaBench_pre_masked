
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* pad_tune; void* emmc_top_cmd; void* emmc_top_control; void* iocon; } ;
struct TYPE_6__ {void* pad_tune; void* emmc_top_cmd; void* emmc_top_control; void* iocon; } ;
struct msdc_host {int base; int top_base; int dev; TYPE_1__ saved_tune_para; TYPE_3__ def_tune_para; TYPE_2__* dev_comp; scalar_t__ internal_cd; } ;
struct TYPE_5__ {int pad_tune_reg; scalar_t__ data_tune; scalar_t__ support_64g; scalar_t__ enhance_rx; scalar_t__ async_fifo; scalar_t__ busy_check; scalar_t__ stop_clk_fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct msdc_host*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct msdc_host *VAR_46)
{
 u32 VAR_47;
 u32 VAR_48 = VAR_46->dev_comp->pad_tune_reg;


 FUNC_4(VAR_46->base + VAR_6, VAR_8 | VAR_7);


 FUNC_1(VAR_46);


 FUNC_6(0, VAR_46->base + VAR_11);
 VAR_47 = FUNC_2(VAR_46->base + VAR_10);
 FUNC_6(VAR_47, VAR_46->base + VAR_10);


 if (VAR_46->internal_cd) {
  FUNC_5(VAR_46->base + VAR_28, VAR_29,
         VAR_1);
  FUNC_4(VAR_46->base + VAR_28, VAR_30);
  FUNC_4(VAR_46->base + VAR_11, VAR_12);
  FUNC_4(VAR_46->base + VAR_35, VAR_37);
 } else {
  FUNC_3(VAR_46->base + VAR_35, VAR_37);
  FUNC_3(VAR_46->base + VAR_28, VAR_30);
  FUNC_3(VAR_46->base + VAR_11, VAR_12);
 }

 if (VAR_46->top_base) {
  FUNC_6(0, VAR_46->top_base + VAR_5);
  FUNC_6(0, VAR_46->top_base + VAR_4);
 } else {
  FUNC_6(0, VAR_46->base + VAR_48);
 }
 FUNC_6(0, VAR_46->base + VAR_13);
 FUNC_5(VAR_46->base + VAR_13, VAR_14, 0);
 FUNC_6(0x403c0046, VAR_46->base + VAR_18);
 FUNC_5(VAR_46->base + VAR_18, VAR_9, 1);
 FUNC_6(0xffff4089, VAR_46->base + VAR_19);
 FUNC_4(VAR_46->base + VAR_2, VAR_3);

 if (VAR_46->dev_comp->stop_clk_fix) {
  FUNC_5(VAR_46->base + VAR_19,
         VAR_20, 3);
  FUNC_3(VAR_46->base + VAR_41,
        VAR_43);
  FUNC_3(VAR_46->base + VAR_41,
        VAR_42);
 }

 if (VAR_46->dev_comp->busy_check)
  FUNC_3(VAR_46->base + VAR_19, (1 << 7));

 if (VAR_46->dev_comp->async_fifo) {
  FUNC_5(VAR_46->base + VAR_21,
         VAR_26, 3);
  if (VAR_46->dev_comp->enhance_rx) {
   if (VAR_46->top_base)
    FUNC_4(VAR_46->top_base + VAR_5,
          VAR_45);
   else
    FUNC_4(VAR_46->base + VAR_34,
          VAR_44);
  } else {
   FUNC_5(VAR_46->base + VAR_21,
          VAR_25, 2);
   FUNC_5(VAR_46->base + VAR_21,
          VAR_24, 2);
  }

  FUNC_3(VAR_46->base + VAR_21,
        VAR_23);
  FUNC_4(VAR_46->base + VAR_21,
        VAR_22);
 }

 if (VAR_46->dev_comp->support_64g)
  FUNC_4(VAR_46->base + VAR_21,
        VAR_27);
 if (VAR_46->dev_comp->data_tune) {
  if (VAR_46->top_base) {
   FUNC_4(VAR_46->top_base + VAR_5,
         VAR_32);
   FUNC_3(VAR_46->top_base + VAR_5,
         VAR_0);
   FUNC_4(VAR_46->top_base + VAR_4,
         VAR_31);
  } else {
   FUNC_4(VAR_46->base + VAR_48,
         VAR_16 |
         VAR_15);
  }
 } else {

  if (VAR_46->top_base)
   FUNC_4(VAR_46->top_base + VAR_5,
         VAR_33);
  else
   FUNC_4(VAR_46->base + VAR_48,
         VAR_17);
 }




 FUNC_4(VAR_46->base + VAR_35, VAR_38);


 FUNC_3(VAR_46->base + VAR_35, VAR_39);
 FUNC_4(VAR_46->base + VAR_34, VAR_40);


 FUNC_5(VAR_46->base + VAR_35, VAR_36, 3);

 VAR_46->def_tune_para.iocon = FUNC_2(VAR_46->base + VAR_13);
 VAR_46->saved_tune_para.iocon = FUNC_2(VAR_46->base + VAR_13);
 if (VAR_46->top_base) {
  VAR_46->def_tune_para.emmc_top_control =
   FUNC_2(VAR_46->top_base + VAR_5);
  VAR_46->def_tune_para.emmc_top_cmd =
   FUNC_2(VAR_46->top_base + VAR_4);
  VAR_46->saved_tune_para.emmc_top_control =
   FUNC_2(VAR_46->top_base + VAR_5);
  VAR_46->saved_tune_para.emmc_top_cmd =
   FUNC_2(VAR_46->top_base + VAR_4);
 } else {
  VAR_46->def_tune_para.pad_tune = FUNC_2(VAR_46->base + VAR_48);
  VAR_46->saved_tune_para.pad_tune = FUNC_2(VAR_46->base + VAR_48);
 }
 FUNC_0(VAR_46->dev, "init hardware done!");
}

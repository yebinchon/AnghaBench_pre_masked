
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int speed; int ahbcfg; scalar_t__ service_interval; int external_id_pin_ctl; scalar_t__ ipg_isoc_en; int phy_type; } ;
struct dwc2_hsotg {int num_of_eps; int dev; int lx_state; TYPE_2__ params; TYPE_3__** eps_out; scalar_t__ dedicated_fifos; TYPE_1__** eps_in; } ;
struct TYPE_8__ {int maxpacket; } ;
struct TYPE_7__ {TYPE_4__ ep; } ;
struct TYPE_5__ {TYPE_4__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
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
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_4 (int) ;
 int VAR_65 ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (struct dwc2_hsotg*,int ,int) ;
 scalar_t__ FUNC_7 (struct dwc2_hsotg*,int) ;
 int FUNC_8 (struct dwc2_hsotg*) ;
 int FUNC_9 (struct dwc2_hsotg*) ;
 int FUNC_10 (struct dwc2_hsotg*,int ,int,int) ;
 int FUNC_11 (struct dwc2_hsotg*,int) ;
 int FUNC_12 (struct dwc2_hsotg*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (struct dwc2_hsotg*) ;
 int FUNC_16 (struct dwc2_hsotg*,int) ;
 int FUNC_17 (struct dwc2_hsotg*,int ) ;
 int FUNC_18 (struct dwc2_hsotg*,int ,int) ;
 int FUNC_19 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_20 (struct dwc2_hsotg*,TYPE_3__*,int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 scalar_t__ FUNC_23 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_24 (struct dwc2_hsotg*) ;

void FUNC_25(struct dwc2_hsotg *VAR_66,
           bool VAR_67)
{
 u32 VAR_68;
 u32 VAR_69;
 u32 VAR_70;
 u32 VAR_71 = 0;
 int VAR_72;


 FUNC_20(VAR_66, VAR_66->eps_out[0], -VAR_36);

 if (!VAR_67) {
  if (FUNC_7(VAR_66, 1))
   return;
 } else {

  for (VAR_72 = 1; VAR_72 < VAR_66->num_of_eps; VAR_72++) {
   if (VAR_66->eps_in[VAR_72])
    FUNC_14(&VAR_66->eps_in[VAR_72]->ep);
   if (VAR_66->eps_out[VAR_72])
    FUNC_14(&VAR_66->eps_out[VAR_72]->ep);
  }
 }







 VAR_70 = FUNC_17(VAR_66, VAR_62);
 VAR_70 &= ~VAR_65;
 VAR_70 |= FUNC_4(7);


 VAR_70 &= ~(VAR_64 | VAR_63);
        FUNC_19(VAR_66, VAR_70, VAR_62);

 FUNC_16(VAR_66, 1);

 FUNC_15(VAR_66);

 if (!VAR_67)
  FUNC_18(VAR_66, VAR_8, VAR_13);

 VAR_71 |= FUNC_0(1);

 switch (VAR_66->params.speed) {
 case 128:
  VAR_71 |= VAR_6;
  break;
 case 129:
  if (VAR_66->params.phy_type == VAR_32)
   VAR_71 |= VAR_4;
  else
   VAR_71 |= VAR_3;
  break;
 default:
  VAR_71 |= VAR_5;
 }

 if (VAR_66->params.ipg_isoc_en)
  VAR_71 |= VAR_7;

 FUNC_19(VAR_66, VAR_71, VAR_1);


 FUNC_19(VAR_66, 0xffffffff, VAR_61);


 FUNC_19(VAR_66, 0xffffffff, VAR_43);
 VAR_68 = VAR_46 | VAR_57 |
  VAR_48 | VAR_47 |
  VAR_58 | VAR_55 |
  VAR_45 | VAR_54 |
  VAR_59 | VAR_60 |
  VAR_52;

 if (!FUNC_23(VAR_66))
  VAR_68 |= VAR_50 | VAR_51;

 if (!VAR_66->params.external_id_pin_ctl)
  VAR_68 |= VAR_44;

 FUNC_19(VAR_66, VAR_68, VAR_42);

 if (FUNC_24(VAR_66)) {
  FUNC_19(VAR_66, VAR_39 | VAR_38 |
       VAR_66->params.ahbcfg,
       VAR_37);


  if (FUNC_23(VAR_66))
   FUNC_18(VAR_66, VAR_1, VAR_2);

 } else {
  FUNC_19(VAR_66, ((VAR_66->dedicated_fifos) ?
      (VAR_40 |
       VAR_41) : 0) |
       VAR_39, VAR_37);
 }







 FUNC_19(VAR_66, ((VAR_66->dedicated_fifos && !FUNC_24(VAR_66)) ?
  VAR_21 | VAR_19 : 0) |
  VAR_18 | VAR_22 |
  VAR_20 | VAR_16,
  VAR_15);





 FUNC_19(VAR_66, (FUNC_24(VAR_66) ? (VAR_22 |
  VAR_29) : 0) |
  VAR_27 | VAR_25 |
  VAR_28,
  VAR_24);


 if (FUNC_23(VAR_66)) {
  FUNC_18(VAR_66, VAR_24, VAR_26);
  FUNC_18(VAR_66, VAR_15, VAR_17);
 }


 if (FUNC_23(VAR_66) && VAR_66->params.service_interval)
  FUNC_18(VAR_66, VAR_8, VAR_12);

 FUNC_19(VAR_66, 0, VAR_0);

 FUNC_5(VAR_66->dev, "EP0: DIEPCTL0=0x%08x, DOEPCTL0=0x%08x\n",
  FUNC_17(VAR_66, VAR_14),
  FUNC_17(VAR_66, VAR_23));


 FUNC_11(VAR_66, VAR_53 | VAR_49);






 if (!FUNC_24(VAR_66))
  FUNC_11(VAR_66, VAR_56);


 FUNC_10(VAR_66, 0, 0, 1);
 FUNC_10(VAR_66, 0, 1, 1);

 if (!VAR_67) {
  FUNC_18(VAR_66, VAR_8, VAR_11);
  FUNC_22(10);
  FUNC_6(VAR_66, VAR_8, VAR_11);
 }

 FUNC_5(VAR_66->dev, "DCTL=0x%08x\n", FUNC_17(VAR_66, VAR_8));







 FUNC_19(VAR_66, FUNC_1(1) | FUNC_2(1) |
        FUNC_3(8), VAR_30);

 FUNC_19(VAR_66, FUNC_13(VAR_66->eps_out[0]->ep.maxpacket) |
        VAR_33 | VAR_34 |
        VAR_35,
        VAR_23);


 FUNC_19(VAR_66, FUNC_13(VAR_66->eps_out[0]->ep.maxpacket) |
        VAR_35, VAR_14);


 VAR_69 = VAR_10 | VAR_9;
 if (!VAR_67)
  VAR_69 |= VAR_13;
 FUNC_18(VAR_66, VAR_8, VAR_69);


 FUNC_8(VAR_66);


 if (FUNC_23(VAR_66) && VAR_66->params.service_interval)
  FUNC_9(VAR_66);


 FUNC_21(3);

 VAR_66->lx_state = VAR_31;

 FUNC_12(VAR_66);

 FUNC_5(VAR_66->dev, "EP0: DIEPCTL0=0x%08x, DOEPCTL0=0x%08x\n",
  FUNC_17(VAR_66, VAR_14),
  FUNC_17(VAR_66, VAR_23));
}

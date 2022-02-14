
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {scalar_t__ signal_voltage; } ;
struct mmc_host {int caps2; struct mmc_card* card; TYPE_6__ ios; TYPE_1__* ops; int claimed; } ;
struct TYPE_11__ {scalar_t__ sd3_bus_mode; } ;
struct TYPE_10__ {int * type; } ;
struct TYPE_9__ {scalar_t__ vendor; scalar_t__ device; int max_dtr; } ;
struct TYPE_8__ {scalar_t__ high_speed; } ;
struct mmc_card {scalar_t__ type; int quirks; int ocr; int host; TYPE_5__ sw_caps; TYPE_4__ dev; TYPE_3__ cis; TYPE_2__ cccr; int rca; int raw_cid; } ;
struct TYPE_7__ {int (* init_card ) (struct mmc_host*,struct mmc_card*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct mmc_card*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 struct mmc_card* FUNC_4 (struct mmc_host*,int *) ;
 int FUNC_5 (struct mmc_card*) ;
 int FUNC_6 (struct mmc_card*,int ) ;
 int FUNC_7 (struct mmc_host*) ;
 scalar_t__ FUNC_8 (struct mmc_host*) ;
 scalar_t__ FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (struct mmc_host*) ;
 int FUNC_11 (struct mmc_card*) ;
 scalar_t__ FUNC_12 (struct mmc_host*,int,int ,int *) ;
 int FUNC_13 (struct mmc_host*,struct mmc_card*) ;
 int FUNC_14 (struct mmc_host*,struct mmc_card*,int ) ;
 int FUNC_15 (struct mmc_card*) ;
 int FUNC_16 (struct mmc_card*) ;
 int FUNC_17 (struct mmc_host*,struct mmc_card*) ;
 int FUNC_18 (struct mmc_card*) ;
 int FUNC_19 (struct mmc_host*,int,int*) ;
 int FUNC_20 (struct mmc_host*,int *) ;
 int FUNC_21 (struct mmc_host*,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct mmc_host*,int) ;
 int FUNC_24 (struct mmc_host*,int ) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (char*,int ) ;
 int VAR_11 ;
 int FUNC_28 (struct mmc_card*) ;
 int FUNC_29 (struct mmc_card*) ;
 int FUNC_30 (struct mmc_card*) ;
 int VAR_12 ;
 int FUNC_31 (struct mmc_card*,int) ;
 int FUNC_32 (struct mmc_card*) ;
 int FUNC_33 (struct mmc_host*,struct mmc_card*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_34(struct mmc_host *VAR_14, u32 VAR_15,
         struct mmc_card *VAR_16)
{
 struct mmc_card *VAR_17;
 int VAR_18;
 int VAR_19 = 10;
 u32 VAR_20 = 0;
 u32 VAR_21 = VAR_15;

 FUNC_2(!VAR_14->claimed);


 if (FUNC_9(VAR_14))
  VAR_15 |= VAR_9;

try_again:
 if (!VAR_19) {
  FUNC_27("%s: Skipping voltage switch\n", FUNC_10(VAR_14));
  VAR_15 &= ~VAR_9;
 }




 VAR_18 = FUNC_19(VAR_14, VAR_15, &VAR_20);
 if (VAR_18)
  goto err;




 if (FUNC_8(VAR_14)) {
  VAR_18 = FUNC_24(VAR_14, VAR_13);
  if (VAR_18)
   goto err;
 }




 VAR_17 = FUNC_4(VAR_14, ((void*)0));
 if (FUNC_0(VAR_17)) {
  VAR_18 = FUNC_1(VAR_17);
  goto err;
 }

 if ((VAR_20 & VAR_10) &&
     FUNC_12(VAR_14, VAR_15 & VAR_20, VAR_17->raw_cid, ((void*)0)) == 0) {
  VAR_17->type = VAR_8;

  if (VAR_16 && (VAR_16->type != VAR_8 ||
      FUNC_3(VAR_17->raw_cid, VAR_16->raw_cid, sizeof(VAR_17->raw_cid)) != 0)) {
   FUNC_11(VAR_17);
   FUNC_25("%s: Perhaps the card was replaced\n",
    FUNC_10(VAR_14));
   return -VAR_2;
  }
 } else {
  VAR_17->type = VAR_7;

  if (VAR_16 && VAR_16->type != VAR_7) {
   FUNC_11(VAR_17);
   FUNC_25("%s: Perhaps the card was replaced\n",
    FUNC_10(VAR_14));
   return -VAR_2;
  }
 }




 if (VAR_14->ops->init_card)
  VAR_14->ops->init_card(VAR_14, VAR_17);
 if (VAR_20 & VAR_15 & VAR_9) {
  VAR_18 = FUNC_23(VAR_14, VAR_21);
  if (VAR_18 == -VAR_0) {
   FUNC_17(VAR_14, VAR_17);
   VAR_19--;
   goto try_again;
  } else if (VAR_18) {
   VAR_15 &= ~VAR_9;
  }
 }




 if (!FUNC_8(VAR_14)) {
  VAR_18 = FUNC_20(VAR_14, &VAR_17->rca);
  if (VAR_18)
   goto remove;






  if (VAR_16)
   VAR_16->rca = VAR_17->rca;
 }




 if (!VAR_16 && VAR_17->type == VAR_8) {
  VAR_18 = FUNC_13(VAR_14, VAR_17);
  if (VAR_18)
   return VAR_18;

  FUNC_5(VAR_17);
 }




 if (!FUNC_8(VAR_14)) {
  VAR_18 = FUNC_18(VAR_17);
  if (VAR_18)
   goto remove;
 }

 if (VAR_17->quirks & VAR_4) {






  FUNC_21(VAR_14, VAR_17->cis.max_dtr);

  if (VAR_17->cccr.high_speed) {
   FUNC_22(VAR_17->host, VAR_6);
  }

  goto finish;
 }





 VAR_18 = FUNC_31(VAR_17, VAR_15);
 if (VAR_18) {
  FUNC_17(VAR_14, VAR_17);
  if (VAR_15 & VAR_9) {

   VAR_19 = 0;
   goto try_again;
  } else {
   goto remove;
  }
 }




 VAR_18 = FUNC_32(VAR_17);
 if (VAR_18)
  goto remove;

 if (VAR_16) {
  int VAR_22 = (VAR_17->cis.vendor == VAR_16->cis.vendor &&
       VAR_17->cis.device == VAR_16->cis.device);
  FUNC_11(VAR_17);
  if (!VAR_22) {
   FUNC_25("%s: Perhaps the card was replaced\n",
    FUNC_10(VAR_14));
   return -VAR_2;
  }

  VAR_17 = VAR_16;
 }
 VAR_17->ocr = VAR_21;
 FUNC_6(VAR_17, VAR_12);

 if (VAR_17->type == VAR_8) {
  VAR_18 = FUNC_14(VAR_14, VAR_17, VAR_16 != ((void*)0));

  if (VAR_18) {
   FUNC_7(VAR_14);
   if (FUNC_8(VAR_14))

    FUNC_24(VAR_14, VAR_13);
   VAR_17->type = VAR_7;
  } else
   VAR_17->dev.type = &VAR_11;
 }




 VAR_18 = FUNC_28(VAR_17);
 if (VAR_18)
  goto remove;



 if ((VAR_15 & VAR_9) && VAR_17->sw_caps.sd3_bus_mode) {
  VAR_18 = FUNC_16(VAR_17);
  if (VAR_18)
   goto remove;
 } else {



  VAR_18 = FUNC_30(VAR_17);
  if (VAR_18 > 0)
   FUNC_22(VAR_17->host, VAR_6);
  else if (VAR_18)
   goto remove;




  FUNC_21(VAR_14, FUNC_15(VAR_17));




  VAR_18 = FUNC_29(VAR_17);
  if (VAR_18)
   goto remove;
 }

 if (VAR_14->caps2 & VAR_3 &&
     VAR_14->ios.signal_voltage == VAR_5) {
  FUNC_26("%s: Host failed to negotiate down from 3.3V\n",
   FUNC_10(VAR_14));
  VAR_18 = -VAR_1;
  goto remove;
 }
finish:
 if (!VAR_16)
  VAR_14->card = VAR_17;
 return 0;

remove:
 if (!VAR_16)
  FUNC_11(VAR_17);

err:
 return VAR_18;
}

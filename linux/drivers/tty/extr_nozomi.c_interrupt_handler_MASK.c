
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct nozomi {int last_ier; int spin_mutex; TYPE_2__* port; int flip; int reg_ier; int reg_fcr; TYPE_1__* pdev; int reg_iir; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int port; int toggle_dl; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int,int) ;
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
 unsigned int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct nozomi*,size_t,int *,int,int ,int ) ;
 int FUNC_4 (struct nozomi*,size_t,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nozomi*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (size_t,struct nozomi*) ;
 int FUNC_9 (struct nozomi*) ;
 scalar_t__ FUNC_10 (size_t,struct nozomi*) ;
 scalar_t__ FUNC_11 (struct nozomi*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (unsigned int,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_22, void *VAR_23)
{
 struct nozomi *VAR_24 = VAR_23;
 unsigned int VAR_25;
 u16 VAR_26;

 if (!VAR_24)
  return VAR_11;

 FUNC_12(&VAR_24->spin_mutex);
 VAR_26 = FUNC_7(VAR_24->reg_iir);


 if (VAR_26 == (u16)-1)
  goto none;




 VAR_26 &= VAR_24->last_ier;

 if (VAR_26 == 0)
  goto none;


 FUNC_1("%s irq:0x%04X, prev:0x%04X", FUNC_5(VAR_26), VAR_26,
  VAR_24->last_ier);

 if (VAR_26 & VAR_21) {
  if (FUNC_16(!FUNC_6(VAR_24))) {
   VAR_24->last_ier = 0x0;
   FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
   FUNC_2(&VAR_24->pdev->dev, "Could not read status from "
    "card, we should disable interface\n");
  } else {
   FUNC_17(VAR_21, VAR_24->reg_fcr);
  }

  goto exit_handler;
 }
 if (VAR_26 & VAR_5) {
  FUNC_0("CTRL_UL");
  VAR_24->last_ier &= ~VAR_5;
  FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  if (FUNC_11(VAR_24)) {
   FUNC_17(VAR_5, VAR_24->reg_fcr);
   VAR_24->last_ier = VAR_24->last_ier | VAR_5;
   FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  }
 }
 if (VAR_26 & VAR_4) {
  FUNC_9(VAR_24);
  FUNC_17(VAR_4, VAR_24->reg_fcr);
 }
 if (VAR_26 & VAR_12) {
  if (!FUNC_3(VAR_24, VAR_20,
    &(VAR_24->port[VAR_20].toggle_dl), VAR_26,
    VAR_13, VAR_14)) {
   FUNC_2(&VAR_24->pdev->dev, "MDM_DL out of sync!\n");
   goto exit_handler;
  }
 }
 if (VAR_26 & VAR_15) {
  if (!FUNC_4(VAR_24, VAR_20, VAR_26)) {
   FUNC_2(&VAR_24->pdev->dev, "MDM_UL out of sync!\n");
   goto exit_handler;
  }
 }
 if (VAR_26 & VAR_6) {
  if (!FUNC_3(VAR_24, VAR_19,
    &(VAR_24->port[VAR_19].toggle_dl), VAR_26,
    VAR_7, VAR_8)) {
   FUNC_2(&VAR_24->pdev->dev, "DIAG_DL out of sync!\n");
   goto exit_handler;
  }
 }
 if (VAR_26 & VAR_9) {
  VAR_24->last_ier &= ~VAR_9;
  FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  if (FUNC_10(VAR_19, VAR_24)) {
   FUNC_17(VAR_9, VAR_24->reg_fcr);
   VAR_24->last_ier = VAR_24->last_ier | VAR_9;
   FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  }
 }
 if (VAR_26 & VAR_0) {
  if (FUNC_8(VAR_17, VAR_24))
   FUNC_17(VAR_0, VAR_24->reg_fcr);
 }
 if (VAR_26 & VAR_1) {
  VAR_24->last_ier &= ~VAR_1;
  FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  if (FUNC_10(VAR_17, VAR_24)) {
   FUNC_17(VAR_1, VAR_24->reg_fcr);
   VAR_24->last_ier = VAR_24->last_ier | VAR_1;
   FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  }
 }
 if (VAR_26 & VAR_2) {
  if (FUNC_8(VAR_18, VAR_24))
   FUNC_17(VAR_2, VAR_24->reg_fcr);
 }
 if (VAR_26 & VAR_3) {
  VAR_24->last_ier &= ~VAR_3;
  FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  if (FUNC_10(VAR_18, VAR_24)) {
   FUNC_17(VAR_3, VAR_24->reg_fcr);
   VAR_24->last_ier = VAR_24->last_ier | VAR_3;
   FUNC_17(VAR_24->last_ier, VAR_24->reg_ier);
  }
 }

exit_handler:
 FUNC_13(&VAR_24->spin_mutex);

 for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++)
  if (FUNC_14(VAR_25, &VAR_24->flip))
   FUNC_15(&VAR_24->port[VAR_25].port);

 return VAR_10;
none:
 FUNC_13(&VAR_24->spin_mutex);
 return VAR_11;
}

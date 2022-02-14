
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hisi_hba {int n_phy; int ctrl_reset_sts_reg; scalar_t__ ctrl; scalar_t__ ctrl_clock_ena_reg; scalar_t__ ctrl_reset_reg; struct device* dev; } ;
struct device {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (scalar_t__,char*,int *,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (struct hisi_hba*,int,int ) ;
 int FUNC_6 (struct hisi_hba*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct hisi_hba*,int ) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct hisi_hba *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;
 struct device *VAR_15 = VAR_11->dev;

 for (VAR_12 = 0; VAR_12 < VAR_11->n_phy; VAR_12++) {
  u32 VAR_16 = FUNC_5(VAR_11, VAR_12, VAR_7);

  VAR_16 |= VAR_8;
  FUNC_6(VAR_11, VAR_12, VAR_7, VAR_16);
 }
 FUNC_9(1);


 for (VAR_12 = 0; VAR_12 < VAR_11->n_phy; VAR_12++) {
  u32 VAR_17, VAR_18;

  VAR_13 = VAR_10 + FUNC_8(1000);

  while (1) {
   VAR_17 = FUNC_5(VAR_11, VAR_12,
           VAR_3);
   VAR_18 = FUNC_5(VAR_11, VAR_12,
           VAR_1);

   if (!(VAR_17 & VAR_4) &&
    !(VAR_18 & VAR_2))
    break;

   FUNC_9(20);
   if (FUNC_12(VAR_10, VAR_13))
    return -VAR_6;
  }
 }


 VAR_13 = VAR_10 + FUNC_8(1000);
 while (1) {
  u32 VAR_19 =
   FUNC_7(VAR_11, VAR_0);

  if (VAR_19 == 0)
   break;

  FUNC_9(20);
  if (FUNC_12(VAR_10, VAR_13))
   return -VAR_6;
 }

 if (FUNC_1(VAR_15)) {
  acpi_status VAR_20;

  VAR_20 = FUNC_2(FUNC_1(VAR_15), "_RST", ((void*)0), ((void*)0));
  if (FUNC_0(VAR_20)) {
   FUNC_3(VAR_15, "Reset failed\n");
   return -VAR_6;
  }
 } else if (VAR_11->ctrl) {


  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_reset_reg,
        VAR_9);
  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_clock_ena_reg + 4,
        VAR_9);
  FUNC_9(1);
  FUNC_10(VAR_11->ctrl, VAR_11->ctrl_reset_sts_reg, &VAR_14);
  if (VAR_9 != (VAR_14 & VAR_9)) {
   FUNC_3(VAR_15, "Reset failed\n");
   return -VAR_6;
  }



  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_reset_reg + 4,
        VAR_9);
  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_clock_ena_reg,
        VAR_9);
  FUNC_9(1);
  FUNC_10(VAR_11->ctrl, VAR_11->ctrl_reset_sts_reg, &VAR_14);
  if (VAR_14 & VAR_9) {
   FUNC_3(VAR_15, "De-reset failed\n");
   return -VAR_6;
  }
 } else {
  FUNC_4(VAR_15, "no reset method\n");
  return -VAR_5;
 }

 return 0;
}

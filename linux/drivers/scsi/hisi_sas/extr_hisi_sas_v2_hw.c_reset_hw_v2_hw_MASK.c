
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
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (scalar_t__,char*,int *,int *) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct hisi_hba*,int,int ) ;
 int FUNC_5 (struct hisi_hba*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct hisi_hba*,int ) ;
 int FUNC_7 (struct hisi_hba*,int ,int ) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct hisi_hba *VAR_11)
{
 int VAR_12, VAR_13;
 u32 VAR_14;
 unsigned long VAR_15;
 struct device *VAR_16 = VAR_11->dev;


 if (VAR_11->n_phy == 9)
  VAR_13 = 0x1fffff;
 else
  VAR_13 = 0x7ffff;

 FUNC_7(VAR_11, VAR_1, 0);


 for (VAR_12 = 0; VAR_12 < VAR_11->n_phy; VAR_12++) {
  u32 VAR_17 = FUNC_4(VAR_11, VAR_12, VAR_8);

  VAR_17 &= ~VAR_9;
  FUNC_5(VAR_11, VAR_12, VAR_8, VAR_17);
 }
 FUNC_13(50);


 for (VAR_12 = 0; VAR_12 < VAR_11->n_phy; VAR_12++) {
  u32 VAR_18, VAR_19;

  VAR_15 = VAR_10 + FUNC_8(1000);

  while (1) {
   VAR_18 = FUNC_4(VAR_11, VAR_12,
           VAR_4);
   VAR_19 = FUNC_4(VAR_11, VAR_12,
           VAR_2);

   if (!(VAR_18 & VAR_5) &&
    !(VAR_19 & VAR_3))
    break;

   FUNC_9(20);
   if (FUNC_12(VAR_10, VAR_15))
    return -VAR_7;
  }
 }


 VAR_15 = VAR_10 + FUNC_8(1000);
 while (1) {
  u32 VAR_20 =
   FUNC_6(VAR_11, VAR_0);

  if (VAR_20 == 0)
   break;

  FUNC_9(20);
  if (FUNC_12(VAR_10, VAR_15))
   return -VAR_7;
 }

 if (FUNC_1(VAR_16)) {
  acpi_status VAR_21;

  VAR_21 = FUNC_2(FUNC_1(VAR_16), "_RST", ((void*)0), ((void*)0));
  if (FUNC_0(VAR_21)) {
   FUNC_3(VAR_16, "Reset failed\n");
   return -VAR_7;
  }
 } else if (VAR_11->ctrl) {

  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_reset_reg,
    VAR_13);
  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_clock_ena_reg + 4,
    VAR_13);
  FUNC_9(1);
  FUNC_10(VAR_11->ctrl, VAR_11->ctrl_reset_sts_reg, &VAR_14);
  if (VAR_13 != (VAR_14 & VAR_13)) {
   FUNC_3(VAR_16, "SAS reset fail.\n");
   return -VAR_7;
  }


  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_reset_reg + 4,
    VAR_13);
  FUNC_11(VAR_11->ctrl, VAR_11->ctrl_clock_ena_reg,
    VAR_13);
  FUNC_9(1);
  FUNC_10(VAR_11->ctrl, VAR_11->ctrl_reset_sts_reg,
    &VAR_14);
  if (VAR_14 & VAR_13) {
   FUNC_3(VAR_16, "SAS de-reset fail.\n");
   return -VAR_7;
  }
 } else {
  FUNC_3(VAR_16, "no reset method\n");
  return -VAR_6;
 }

 return 0;
}

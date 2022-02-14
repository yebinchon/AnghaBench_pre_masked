
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_pci {int mantis_int_stat; int mantis_int_mask; int gpif_status; int busy_block; int i2c_wq; int tasklet; int uart_work; int intmask_lock; struct mantis_ca* mantis_ca; } ;
struct mantis_ca {int hif_evm_work; int hif_write_wq; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int ,int,char*,...) ;
 int * VAR_31 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_32, void *VAR_33)
{
 u32 VAR_34 = 0, VAR_35 = 0;
 u32 VAR_36 = 0, VAR_37 = 0;

 struct mantis_pci *VAR_38;
 struct mantis_ca *VAR_39;

 VAR_38 = (struct mantis_pci *) VAR_33;
 if (FUNC_7(!VAR_38)) {
  FUNC_0(VAR_3, 1, "Mantis == NULL");
  return VAR_1;
 }
 VAR_39 = VAR_38->mantis_ca;

 VAR_34 = FUNC_1(VAR_29);
 VAR_35 = FUNC_1(VAR_13);
 if (!(VAR_34 & VAR_35))
  return VAR_1;

 VAR_37 = VAR_7 |
      VAR_5 |
      VAR_30 |
      VAR_4;

 VAR_36 = FUNC_1(VAR_6);
 VAR_36 &= VAR_37;
 FUNC_2(VAR_36, VAR_6);

 VAR_38->mantis_int_stat = VAR_34;
 VAR_38->mantis_int_mask = VAR_35;
 FUNC_0(VAR_2, 0, "\n-- Stat=<%02x> Mask=<%02x> --", VAR_34, VAR_35);
 if (VAR_34 & VAR_26) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[0]);
 }
 if (VAR_34 & VAR_11) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[1]);
  VAR_38->gpif_status = VAR_36;
  FUNC_8(&VAR_39->hif_write_wq);
  FUNC_3(&VAR_39->hif_evm_work);
 }
 if (VAR_34 & VAR_12) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[2]);
  FUNC_4(&VAR_38->intmask_lock);
  FUNC_2(FUNC_1(VAR_13) & ~VAR_12,
   VAR_13);
  FUNC_5(&VAR_38->intmask_lock);
  FUNC_3(&VAR_38->uart_work);
 }
 if (VAR_34 & VAR_14) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[3]);
 }
 if (VAR_34 & VAR_15) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[4]);
 }
 if (VAR_34 & VAR_25) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[5]);
 }
 if (VAR_34 & VAR_24) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[6]);
 }
 if (VAR_34 & VAR_8) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[7]);
 }
 if (VAR_34 & VAR_27) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[8]);
  VAR_38->busy_block = (VAR_34 & VAR_28) >> 28;
  FUNC_6(&VAR_38->tasklet);
 }
 if (VAR_34 & VAR_9) {
  FUNC_0(VAR_2, 0, "<%s>", VAR_31[9]);
  FUNC_8(&VAR_38->i2c_wq);
 }
 FUNC_2(VAR_34, VAR_29);
 VAR_34 &= ~(VAR_26 | VAR_9 |
    VAR_10 | VAR_23 |
    VAR_22 | VAR_21 |
    VAR_20 | VAR_19 |
    VAR_18 | VAR_17 |
    VAR_16 | VAR_12 |
    VAR_11 | VAR_14 |
    VAR_15 | VAR_25 |
    VAR_24 | VAR_8 |
    VAR_27);

 if (VAR_34)
  FUNC_0(VAR_2, 0, "<Unknown> Stat=<%02x> Mask=<%02x>", VAR_34, VAR_35);

 FUNC_0(VAR_2, 0, "\n");
 return VAR_0;
}

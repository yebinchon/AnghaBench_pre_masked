
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_pci {int gpif_status; int num; } ;
struct mantis_ca {int hif_write_wq; struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct mantis_ca *VAR_8)
{
 struct mantis_pci *VAR_9 = VAR_8->ca_priv;
 u32 VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0;

 if (FUNC_4(VAR_8->hif_write_wq,
          VAR_9->gpif_status & VAR_6,
          FUNC_2(500)) == -VAR_1) {

  FUNC_0(VAR_4, 1, "Adapter(%d) Slot(0): Write ACK timed out !", VAR_9->num);
  VAR_12 = -VAR_0;
 }
 FUNC_0(VAR_3, 1, "Write Acknowledged");
 VAR_9->gpif_status &= ~VAR_6;
 while (!VAR_10) {
  VAR_10 = (FUNC_1(VAR_5) & VAR_7);
  FUNC_3(500);
  VAR_11++;
  if (VAR_11 > 100) {
   FUNC_0(VAR_4, 1, "Adapter(%d) Slot(0): Write operation timed out!", VAR_9->num);
   VAR_12 = -VAR_2;
   break;
  }
 }
 FUNC_0(VAR_3, 1, "HIF Write success");
 return VAR_12;
}

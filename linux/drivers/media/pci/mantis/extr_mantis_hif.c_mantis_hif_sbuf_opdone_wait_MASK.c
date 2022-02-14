
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int num; } ;
struct mantis_ca {int hif_event; int hif_opdone_wq; struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mantis_ca *VAR_5)
{
 struct mantis_pci *VAR_6 = VAR_5->ca_priv;
 int VAR_7 = 0;

 if (FUNC_2(VAR_5->hif_opdone_wq,
          VAR_5->hif_event & VAR_4,
          FUNC_1(500)) == -VAR_1) {

  FUNC_0(VAR_3, 1, "Adapter(%d) Slot(0): Smart buffer operation timeout !", VAR_6->num);
  VAR_7 = -VAR_0;
 }
 FUNC_0(VAR_2, 1, "Smart Buffer Operation complete");
 VAR_5->hif_event &= ~VAR_4;
 return VAR_7;
}

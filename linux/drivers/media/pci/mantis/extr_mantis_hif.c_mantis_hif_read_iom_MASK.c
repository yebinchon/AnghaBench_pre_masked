
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mantis_pci {int num; } ;
struct mantis_ca {int ca_lock; struct mantis_pci* ca_priv; } ;


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
 int FUNC_0 (int ,int,char*,int) ;
 scalar_t__ FUNC_1 (struct mantis_ca*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

int FUNC_7(struct mantis_ca *VAR_11, u32 VAR_12)
{
 struct mantis_pci *VAR_13 = VAR_11->ca_priv;
 u32 VAR_14, VAR_15 = 0;

 FUNC_0(VAR_1, 1, "Adapter(%d) Slot(0): Request HIF I/O Read", VAR_13->num);
 FUNC_4(&VAR_11->ca_lock);
 VAR_15 &= ~VAR_9;
 VAR_15 |= VAR_8;
 VAR_15 |= VAR_10;
 VAR_15 |= VAR_12;

 FUNC_3(VAR_15, VAR_4);
 FUNC_3(1, VAR_5);
 FUNC_6(20);
 FUNC_3(VAR_15 | VAR_7, VAR_3);

 if (FUNC_1(VAR_11) != 0) {
  FUNC_0(VAR_2, 1, "Adapter(%d) Slot(0): HIF Smart Buffer operation failed", VAR_13->num);
  FUNC_5(&VAR_11->ca_lock);
  return -VAR_0;
 }
 VAR_14 = FUNC_2(VAR_6);
 FUNC_0(VAR_1, 1, "I/O Read: 0x%02x", VAR_14);
 FUNC_6(50);
 FUNC_5(&VAR_11->ca_lock);

 return (u8) VAR_14;
}

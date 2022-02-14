
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct fintek_dev {int hw_tx_capable; int chip_major; int chip_minor; int chip_vendor; int fintek_lock; int logical_dev_cir; int cr_dp; int cr_ip; } ;


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
 int FUNC_0 (struct fintek_dev*,int ) ;
 int FUNC_1 (struct fintek_dev*) ;
 int FUNC_2 (struct fintek_dev*) ;
 int FUNC_3 (struct fintek_dev*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct fintek_dev *VAR_13)
{
 unsigned long VAR_14;
 u8 VAR_15, VAR_16;
 u8 VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u16 VAR_21, VAR_22;

 FUNC_2(VAR_13);


 VAR_19 = FUNC_3(VAR_13, VAR_5);
 if (VAR_19 == 0xff) {
  FUNC_5(VAR_8, "first portsel read was bunk, trying alt");
  FUNC_1(VAR_13);
  VAR_13->cr_ip = VAR_2;
  VAR_13->cr_dp = VAR_1;
  FUNC_2(VAR_13);
  VAR_19 = FUNC_3(VAR_13, VAR_5);
 }
 FUNC_4("portsel reg: 0x%02x", VAR_19);

 VAR_20 = FUNC_0(VAR_13, VAR_0);
 FUNC_4("ir_class reg: 0x%02x", VAR_20);

 switch (VAR_20) {
 case 129:
 case 130:
  VAR_13->hw_tx_capable = 1;
  break;
 case 128:
 default:
  VAR_13->hw_tx_capable = 0;
  break;
 }

 VAR_15 = FUNC_3(VAR_13, VAR_3);
 VAR_16 = FUNC_3(VAR_13, VAR_4);
 VAR_22 = VAR_15 << 8 | VAR_16;

 VAR_17 = FUNC_3(VAR_13, VAR_6);
 VAR_18 = FUNC_3(VAR_13, VAR_7);
 VAR_21 = VAR_17 << 8 | VAR_18;

 if (VAR_21 != VAR_12)
  FUNC_5(VAR_9, "Unknown vendor ID: 0x%04x", VAR_21);
 else
  FUNC_4("Read Fintek vendor ID from chip");

 FUNC_1(VAR_13);

 FUNC_6(&VAR_13->fintek_lock, VAR_14);
 VAR_13->chip_major = VAR_15;
 VAR_13->chip_minor = VAR_16;
 VAR_13->chip_vendor = VAR_21;




 if ((VAR_22 != 0x0408) && (VAR_22 != 0x0804))
  VAR_13->logical_dev_cir = VAR_11;
 else
  VAR_13->logical_dev_cir = VAR_10;

 FUNC_7(&VAR_13->fintek_lock, VAR_14);

 return 0;
}

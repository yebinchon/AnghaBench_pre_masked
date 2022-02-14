
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct vpd_params {char* id; char* ec; char* sn; char* pn; char* na; } ;
struct adapter {int pdev_dev; int pdev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,scalar_t__*,unsigned int) ;
 unsigned int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,unsigned int,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,unsigned int,int ) ;
 int FUNC_6 (scalar_t__*) ;
 unsigned int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__* FUNC_10 (unsigned int) ;

int FUNC_11(struct adapter *VAR_15, struct vpd_params *VAR_16)
{
 int VAR_17, VAR_18 = 0, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 u8 *VAR_24, VAR_25;
 unsigned int VAR_26, VAR_27, VAR_28;

 VAR_24 = FUNC_10(VAR_14);
 if (!VAR_24)
  return -VAR_3;




 VAR_18 = FUNC_4(VAR_15->pdev, VAR_12, sizeof(u32), VAR_24);
 if (VAR_18 < 0)
  goto out;







 VAR_19 = *VAR_24 == VAR_0 ? VAR_12 : VAR_13;

 VAR_18 = FUNC_4(VAR_15->pdev, VAR_19, VAR_14, VAR_24);
 if (VAR_18 < 0)
  goto out;

 if (VAR_24[0] != VAR_7) {
  FUNC_1(VAR_15->pdev_dev, "missing VPD ID string\n");
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_28 = FUNC_7(VAR_24);
 if (VAR_28 > VAR_4)
  VAR_28 = VAR_4;

 VAR_17 = FUNC_5(VAR_24, 0, VAR_14, VAR_8);
 if (VAR_17 < 0) {
  FUNC_1(VAR_15->pdev_dev, "missing VPD-R section\n");
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_26 = FUNC_7(&VAR_24[VAR_17]);
 VAR_27 = VAR_17 + VAR_9;
 if (VAR_26 + VAR_27 > VAR_14) {
  FUNC_1(VAR_15->pdev_dev, "bad VPD-R length %u\n", VAR_26);
  VAR_18 = -VAR_2;
  goto out;
 }
 do { VAR_17 = FUNC_0(VAR_24, VAR_27, VAR_26, "RV"); if (VAR_17 < 0) { FUNC_1(VAR_15->pdev_dev, "missing VPD keyword " "RV" "\n"); VAR_18 = -VAR_2; goto out; } VAR_17 += VAR_6; } while (0);
 for (VAR_25 = 0; VAR_17 >= 0; VAR_17--)
  VAR_25 += VAR_24[VAR_17];

 if (VAR_25) {
  FUNC_1(VAR_15->pdev_dev,
   "corrupted VPD EEPROM, actual csum %u\n", VAR_25);
  VAR_18 = -VAR_2;
  goto out;
 }

 do { VAR_20 = FUNC_0(VAR_24, VAR_27, VAR_26, "EC"); if (VAR_20 < 0) { FUNC_1(VAR_15->pdev_dev, "missing VPD keyword " "EC" "\n"); VAR_18 = -VAR_2; goto out; } VAR_20 += VAR_6; } while (0);
 do { VAR_21 = FUNC_0(VAR_24, VAR_27, VAR_26, "SN"); if (VAR_21 < 0) { FUNC_1(VAR_15->pdev_dev, "missing VPD keyword " "SN" "\n"); VAR_18 = -VAR_2; goto out; } VAR_21 += VAR_6; } while (0);
 do { VAR_22 = FUNC_0(VAR_24, VAR_27, VAR_26, "PN"); if (VAR_22 < 0) { FUNC_1(VAR_15->pdev_dev, "missing VPD keyword " "PN" "\n"); VAR_18 = -VAR_2; goto out; } VAR_22 += VAR_6; } while (0);
 do { VAR_23 = FUNC_0(VAR_24, VAR_27, VAR_26, "NA"); if (VAR_23 < 0) { FUNC_1(VAR_15->pdev_dev, "missing VPD keyword " "NA" "\n"); VAR_18 = -VAR_2; goto out; } VAR_23 += VAR_6; } while (0);


 FUNC_2(VAR_16->id, VAR_24 + VAR_9, VAR_28);
 FUNC_8(VAR_16->id);
 FUNC_2(VAR_16->ec, VAR_24 + VAR_20, VAR_1);
 FUNC_8(VAR_16->ec);
 VAR_17 = FUNC_6(VAR_24 + VAR_21 - VAR_6);
 FUNC_2(VAR_16->sn, VAR_24 + VAR_21, FUNC_3(VAR_17, VAR_11));
 FUNC_8(VAR_16->sn);
 VAR_17 = FUNC_6(VAR_24 + VAR_22 - VAR_6);
 FUNC_2(VAR_16->pn, VAR_24 + VAR_22, FUNC_3(VAR_17, VAR_10));
 FUNC_8(VAR_16->pn);
 FUNC_2(VAR_16->na, VAR_24 + VAR_23, FUNC_3(VAR_17, VAR_5));
 FUNC_8((char *)VAR_16->na);

out:
 FUNC_9(VAR_24);
 return VAR_18 < 0 ? VAR_18 : 0;
}

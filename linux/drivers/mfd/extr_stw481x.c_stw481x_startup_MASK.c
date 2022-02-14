
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stw481x {TYPE_1__* client; int map; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (struct stw481x*,int ) ;

__attribute__((used)) static int FUNC_3(struct stw481x *VAR_16)
{

 static const u8 VAR_17[] = {
  100, 105, 110, 115, 120, 122, 124, 126, 128,
  130, 132, 134, 136, 138, 140, 145
 };
 static const u8 VAR_18[] = { 105, 120, 130, 180 };
 static const u8 VAR_19[] = { 15, 18, 25, 28 };
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 bool VAR_24;
 bool VAR_25;
 int VAR_26;
 unsigned int VAR_27;

 VAR_26 = FUNC_1(VAR_16->map, VAR_0, &VAR_27);
 if (VAR_26)
  return VAR_26;
 VAR_24 = !!(VAR_27 & VAR_3);
 VAR_25 = !!(VAR_27 & VAR_1);

 FUNC_0(&VAR_16->client->dev, "voltages %s\n",
  (VAR_27 & VAR_5) ? "OK" : "LOW");
 FUNC_0(&VAR_16->client->dev, "MMC level shifter %s\n",
  (VAR_27 & VAR_2) ? "high impedance" : "ON");
 FUNC_0(&VAR_16->client->dev, "VMMC: %s\n",
  (VAR_27 & VAR_4) ? "ON" : "disabled");

 FUNC_0(&VAR_16->client->dev, "STw481x power control registers:\n");

 VAR_26 = FUNC_2(VAR_16, VAR_13);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_20 = VAR_26 & 0x0f;

 VAR_26 = FUNC_2(VAR_16, VAR_12);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_23 = (VAR_26 >> 2) & 3;
 VAR_22 = (VAR_26 >> 4) & 1;

 VAR_26 = FUNC_2(VAR_16, VAR_14);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_22 |= (VAR_26 >> 1) & 2;

 FUNC_0(&VAR_16->client->dev, "VCORE: %u.%uV %s\n",
  VAR_17[VAR_20] / 100, VAR_17[VAR_20] % 100,
  (VAR_26 & 4) ? "ON" : "OFF");

 FUNC_0(&VAR_16->client->dev, "VPLL:  %u.%uV %s\n",
  VAR_18[VAR_22] / 100, VAR_18[VAR_22] % 100,
  (VAR_26 & 0x10) ? "ON" : "OFF");

 FUNC_0(&VAR_16->client->dev, "VAUX:  %u.%uV %s\n",
  VAR_19[VAR_23] / 10, VAR_19[VAR_23] % 10,
  VAR_24 ? "ON" : "OFF");

 VAR_26 = FUNC_1(VAR_16->map, VAR_6, &VAR_27);
 if (VAR_26)
  return VAR_26;

 FUNC_0(&VAR_16->client->dev, "TWARN: %s threshold, %s\n",
  VAR_25 ? "below" : "above",
  (VAR_27 & VAR_10) ?
   "enabled" : "mask through VDDOK");
 FUNC_0(&VAR_16->client->dev, "VMMC: %s\n",
  (VAR_27 & VAR_11) ? "internal" : "external");
 FUNC_0(&VAR_16->client->dev, "IT WAKE UP: %s\n",
  (VAR_27 & VAR_9) ? "enabled" : "masked");
 FUNC_0(&VAR_16->client->dev, "GPO1: %s\n",
  (VAR_27 & VAR_7) ? "low" : "high impedance");
 FUNC_0(&VAR_16->client->dev, "GPO2: %s\n",
  (VAR_27 & VAR_8) ? "low" : "high impedance");

 VAR_26 = FUNC_1(VAR_16->map, VAR_15, &VAR_27);
 if (VAR_26)
  return VAR_26;
 VAR_21 = VAR_27 & 0x0f;
 FUNC_0(&VAR_16->client->dev, "VCORE SLEEP: %u.%uV\n",
  VAR_17[VAR_21] / 100, VAR_17[VAR_21] % 100);

 return 0;
}

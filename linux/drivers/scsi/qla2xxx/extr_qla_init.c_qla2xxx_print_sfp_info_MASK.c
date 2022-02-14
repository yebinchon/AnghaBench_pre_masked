
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sff_8247_a0 {char* vendor_name; char* vendor_pn; int length_km; int length_100m; int length_50um_10m; int length_62um_10m; int length_om4_10m; int length_om3_10m; } ;
struct scsi_qla_host {TYPE_1__* hw; } ;
struct TYPE_2__ {scalar_t__ sfp_data; } ;


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
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_23 ;
 int FUNC_3 (int*,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_4(struct scsi_qla_host *VAR_24)
{

 struct sff_8247_a0 *VAR_25 = (struct sff_8247_a0 *)VAR_24->hw->sfp_data;
 u8 VAR_26[64], *VAR_27, VAR_28;
 int VAR_29, VAR_30;

 FUNC_1(VAR_26, 0, 64);
 FUNC_3(VAR_26, VAR_18+1, VAR_25->vendor_name);
 FUNC_2(VAR_23, VAR_24, 0x015a,
     "SFP MFG Name: %s\n", VAR_26);

 FUNC_1(VAR_26, 0, 64);
 FUNC_3(VAR_26, VAR_17+1, VAR_25->vendor_pn);
 FUNC_2(VAR_23, VAR_24, 0x015c,
     "SFP Part Name: %s\n", VAR_26);


 FUNC_1(VAR_26, 0, 64);
 VAR_27 = VAR_26;
 VAR_29 = 64;
 VAR_28 = VAR_30 = 0;
 FUNC_0(VAR_21, VAR_13, "Twin AX");
 FUNC_0(VAR_21, VAR_11, "Twisted Pair");
 FUNC_0(VAR_21, VAR_9, "Min Coax");
 FUNC_0(VAR_21, VAR_12, "Video Coax");
 FUNC_0(VAR_21, VAR_8, "MultiMode 62.5um");
 FUNC_0(VAR_21, VAR_7, "MultiMode 50um");
 FUNC_0(VAR_21, VAR_10, "SingleMode");
 FUNC_2(VAR_23, VAR_24, 0x0160,
     "SFP Media: %s\n", VAR_26);


 FUNC_1(VAR_26, 0, 64);
 VAR_27 = VAR_26;
 VAR_29 = 64;
 VAR_28 = VAR_30 = 0;
 FUNC_0(VAR_20, VAR_6, "Very Long");
 FUNC_0(VAR_20, VAR_4, "Short");
 FUNC_0(VAR_20, VAR_0, "Intermediate");
 FUNC_0(VAR_20, VAR_1, "Long");
 FUNC_0(VAR_20, VAR_3, "Medium");
 FUNC_2(VAR_23, VAR_24, 0x0196,
     "SFP Link Length: %s\n", VAR_26);

 FUNC_1(VAR_26, 0, 64);
 VAR_27 = VAR_26;
 VAR_29 = 64;
 VAR_28 = VAR_30 = 0;
 FUNC_0(VAR_20, VAR_5, "Short Wave (SA)");
 FUNC_0(VAR_20, VAR_2, "Long Wave(LC)");
 FUNC_0(VAR_22, VAR_16, "Short Wave (SN)");
 FUNC_0(VAR_22, VAR_15, "Short Wave (SL)");
 FUNC_0(VAR_22, VAR_14, "Long Wave (LL)");
 FUNC_2(VAR_23, VAR_24, 0x016e,
     "SFP FC Link Tech: %s\n", VAR_26);

 if (VAR_25->length_km)
  FUNC_2(VAR_23, VAR_24, 0x016f,
      "SFP Distant: %d km\n", VAR_25->length_km);
 if (VAR_25->length_100m)
  FUNC_2(VAR_23, VAR_24, 0x0170,
      "SFP Distant: %d m\n", VAR_25->length_100m*100);
 if (VAR_25->length_50um_10m)
  FUNC_2(VAR_23, VAR_24, 0x0189,
      "SFP Distant (WL=50um): %d m\n", VAR_25->length_50um_10m * 10);
 if (VAR_25->length_62um_10m)
  FUNC_2(VAR_23, VAR_24, 0x018a,
    "SFP Distant (WL=62.5um): %d m\n", VAR_25->length_62um_10m * 10);
 if (VAR_25->length_om4_10m)
  FUNC_2(VAR_23, VAR_24, 0x0194,
      "SFP Distant (OM4): %d m\n", VAR_25->length_om4_10m * 10);
 if (VAR_25->length_om3_10m)
  FUNC_2(VAR_23, VAR_24, 0x0195,
      "SFP Distant (OM3): %d m\n", VAR_25->length_om3_10m * 10);
}

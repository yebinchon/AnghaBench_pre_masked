
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint ;
typedef int u8 ;
struct ndis_802_11_var_ie {int ElementID; scalar_t__ Length; int data; } ;
struct ndis_802_11_fixed_ie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

 int FUNC_1 (int ,int ,int) ;

unsigned char FUNC_2(u8 *VAR_19, uint VAR_20)
{
 unsigned int VAR_21;
 struct ndis_802_11_var_ie *VAR_22;
 u8 VAR_23;
 u8 VAR_24;

 VAR_23 = 0;
 VAR_24 = 0;

 for (VAR_21 = sizeof(struct ndis_802_11_fixed_ie); VAR_21 < VAR_20;) {
  VAR_22 = (struct ndis_802_11_var_ie *)(VAR_19 + VAR_21);

  switch (VAR_22->ElementID) {
  case 128:
   if ((!FUNC_1(VAR_22->data, VAR_1, 3)) ||
       (!FUNC_1(VAR_22->data, VAR_2, 3))) {
    FUNC_0("link to Artheros AP\n");
    return VAR_8;
   } else if ((!FUNC_1(VAR_22->data, VAR_3, 3)) ||
       (!FUNC_1(VAR_22->data, VAR_4, 3))) {
    FUNC_0("link to Broadcom AP\n");
    return VAR_9;
   } else if (!FUNC_1(VAR_22->data, VAR_16, 3)) {
    FUNC_0("link to Marvell AP\n");
    return VAR_11;
   } else if (!FUNC_1(VAR_22->data, VAR_17, 3)) {
    if (!VAR_24) {
     VAR_24 = 1;
    } else {
     FUNC_0("link to Ralink AP\n");
     return VAR_12;
    }
   } else if (!FUNC_1(VAR_22->data, VAR_5, 3)) {
    FUNC_0("link to Cisco AP\n");
    return VAR_10;
   } else if (!FUNC_1(VAR_22->data, VAR_18, 3)) {
    FUNC_0("link to Realtek 96B\n");
    return VAR_13;
   } else if (!FUNC_1(VAR_22->data, VAR_0, 3)) {
    FUNC_0("link to Airgo Cap\n");
    return VAR_7;
   } else if (!FUNC_1(VAR_22->data, VAR_6, 3)) {
    VAR_23 = 1;
    if (VAR_24) {
     FUNC_0("link to Tenda W311R AP\n");
     return VAR_14;
    } else {
     FUNC_0("Capture EPIGRAM_OUI\n");
    }
   } else {
    break;
   }

  default:
   break;
  }
  VAR_21 += (VAR_22->Length + 2);
 }

 if (VAR_24 && !VAR_23) {
  FUNC_0("link to Ralink AP\n");
  return VAR_12;
 } else if (VAR_24 && VAR_23) {
  FUNC_0("link to Tenda W311R AP\n");
  return VAR_14;
 } else {
  FUNC_0("link to new AP\n");
  return VAR_15;
 }
}

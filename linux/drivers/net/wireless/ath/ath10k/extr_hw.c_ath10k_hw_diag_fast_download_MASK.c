
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bmi_segmented_metadata {int * data; int length; int addr; } ;
struct bmi_segmented_file_header {scalar_t__ file_flags; scalar_t__ data; int magic_num; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int) ;
 int FUNC_2 (struct ath10k*,int ,char*,...) ;
 int FUNC_3 (struct ath10k*,int const*,int,int) ;
 int FUNC_4 (struct ath10k*,char*,int,...) ;

int FUNC_5(struct ath10k *VAR_3,
     u32 VAR_4,
     const void *VAR_5,
     u32 VAR_6)
{
 const u8 *VAR_7 = VAR_5;
 bool VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 struct bmi_segmented_file_header *VAR_12;
 struct bmi_segmented_metadata *VAR_13;
 int VAR_14 = 0;

 if (VAR_6 < sizeof(*VAR_12))
  return -VAR_2;




 VAR_12 = (struct bmi_segmented_file_header *)VAR_7;
 if (FUNC_0(VAR_12->magic_num) != VAR_1) {
  FUNC_2(VAR_3, VAR_0,
      "Not a supported firmware, magic_num:0x%x\n",
      VAR_12->magic_num);
  return -VAR_2;
 }

 if (VAR_12->file_flags != 0) {
  FUNC_2(VAR_3, VAR_0,
      "Not a supported firmware, file_flags:0x%x\n",
      VAR_12->file_flags);
  return -VAR_2;
 }

 VAR_13 = (struct bmi_segmented_metadata *)VAR_12->data;
 VAR_11 = VAR_6 - sizeof(*VAR_12);

 while (VAR_11 > 0) {
  if (VAR_11 < sizeof(*VAR_13)) {
   FUNC_4(VAR_3, "firmware segment is truncated: %d\n",
        VAR_11);
   VAR_14 = -VAR_2;
   break;
  }
  VAR_9 = FUNC_0(VAR_13->addr);
  VAR_10 = FUNC_0(VAR_13->length);
  VAR_7 = VAR_13->data;
  VAR_11 -= sizeof(*VAR_13);

  switch (VAR_10) {
  case 130:

   VAR_14 = FUNC_1(VAR_3, VAR_9);
   VAR_10 = 0;
   break;
  case 129:

   VAR_10 = 0;
   VAR_8 = 1;
   VAR_14 = 0;
   break;
  case 131:
  case 128:
   FUNC_4(VAR_3,
        "firmware has unsupported segment:%d\n",
        VAR_10);
   VAR_14 = -VAR_2;
   break;
  default:
   if (VAR_10 > VAR_11) {

    FUNC_4(VAR_3,
         "firmware has invalid segment length, %d > %d\n",
         VAR_10, VAR_11);
    VAR_14 = -VAR_2;
    break;
   }

   VAR_14 = FUNC_3(VAR_3,
             VAR_7,
             VAR_9,
             VAR_10);

   if (VAR_14)
    FUNC_4(VAR_3,
         "failed to download firmware via diag interface:%d\n",
         VAR_14);
   break;
  }

  if (VAR_14 || VAR_8)
   break;

  VAR_13 = (struct bmi_segmented_metadata *)(VAR_7 + VAR_10);
  VAR_11 -= VAR_10;
 }

 if (VAR_14 == 0)
  FUNC_2(VAR_3, VAR_0,
      "boot firmware fast diag download successfully.\n");
 return VAR_14;
}

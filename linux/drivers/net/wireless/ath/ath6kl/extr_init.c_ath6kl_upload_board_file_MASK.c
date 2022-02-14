
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ target_ver; } ;
struct TYPE_3__ {scalar_t__ board_addr; } ;
struct ath6kl {int target_type; scalar_t__ fw_board_len; TYPE_2__ version; int * fw_board; TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath6kl*,int ,scalar_t__*) ;
 int FUNC_2 (struct ath6kl*,scalar_t__,int *,scalar_t__) ;
 int FUNC_3 (struct ath6kl*,int ,scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;

 if (FUNC_0(VAR_14->fw_board == ((void*)0)))
  return -VAR_9;






 if (VAR_14->hw.board_addr != 0) {
  VAR_15 = VAR_14->hw.board_addr;
  FUNC_3(VAR_14, VAR_10,
          VAR_15);
 } else {
  VAR_20 = FUNC_1(VAR_14, VAR_10, &VAR_15);
  if (VAR_20) {
   FUNC_5("Failed to get board file target address.\n");
   return VAR_20;
  }
 }


 VAR_20 = FUNC_1(VAR_14, VAR_12, &VAR_16);
 if (VAR_20) {
  FUNC_5("Failed to get extended board file target address.\n");
  return VAR_20;
 }

 if (VAR_14->target_type == 129 &&
     VAR_16 == 0) {
  FUNC_5("Failed to get board file target address.\n");
  return -VAR_8;
 }

 switch (VAR_14->target_type) {
 case 129:
  VAR_18 = VAR_0;
  VAR_19 = VAR_1;
  if (VAR_14->fw_board_len > (VAR_18 + VAR_19))
   VAR_19 = VAR_2;
  break;
 case 128:
  VAR_18 = VAR_3;
  VAR_19 = VAR_4;
  break;
 default:
  FUNC_0(1);
  return -VAR_8;
 }

 if (VAR_16 &&
     VAR_14->fw_board_len == (VAR_18 + VAR_19)) {

  FUNC_4(VAR_7,
      "writing extended board data to 0x%x (%d B)\n",
      VAR_16, VAR_19);

  VAR_20 = FUNC_2(VAR_14, VAR_16,
           VAR_14->fw_board + VAR_18,
           VAR_19);
  if (VAR_20) {
   FUNC_5("Failed to write extended board data: %d\n",
       VAR_20);
   return VAR_20;
  }


  VAR_17 = (VAR_19 << 16) | 1;

  FUNC_3(VAR_14, VAR_13, VAR_17);
 }

 if (VAR_14->fw_board_len < VAR_18) {
  FUNC_5("Too small board file: %zu\n", VAR_14->fw_board_len);
  VAR_20 = -VAR_8;
  return VAR_20;
 }

 FUNC_4(VAR_7, "writing board file to 0x%x (%d B)\n",
     VAR_15, VAR_18);

 VAR_20 = FUNC_2(VAR_14, VAR_15, VAR_14->fw_board,
          VAR_18);

 if (VAR_20) {
  FUNC_5("Board file bmi write failed: %d\n", VAR_20);
  return VAR_20;
 }


 if ((VAR_14->version.target_ver == VAR_5) ||
     (VAR_14->version.target_ver == VAR_6))
  VAR_17 = VAR_18;
 else
  VAR_17 = 1;

 FUNC_3(VAR_14, VAR_11, VAR_17);

 return VAR_20;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath6kl {TYPE_1__* wiphy; int target_type; } ;
typedef int __le32 ;
struct TYPE_2__ {int fw_version; int hw_version; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct ath6kl*,int,int *,int) ;
 int FUNC_5 (struct ath6kl*,int,int*) ;
 int FUNC_6 (struct ath6kl*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct ath6kl *VAR_4)
{
 __le32 VAR_5[VAR_2];
 u32 VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;


 VAR_7 = FUNC_6(VAR_4, FUNC_1(VAR_3));
 VAR_7 = FUNC_2(VAR_4->target_type, VAR_7);


 VAR_9 = FUNC_5(VAR_4, VAR_7, &VAR_8);

 if (VAR_9 || !VAR_8) {
  FUNC_8("failed to get ptr to register dump area: %d\n",
       VAR_9);
  return;
 }

 FUNC_3(VAR_0, "register dump data address 0x%x\n",
     VAR_8);
 VAR_8 = FUNC_2(VAR_4->target_type, VAR_8);


 VAR_9 = FUNC_4(VAR_4, VAR_8, (u8 *)&VAR_5[0],
      VAR_1 * (sizeof(u32)));
 if (VAR_9) {
  FUNC_8("failed to get register dump: %d\n", VAR_9);
  return;
 }

 FUNC_7("crash dump:\n");
 FUNC_7("hw 0x%x fw %s\n", VAR_4->wiphy->hw_version,
      VAR_4->wiphy->fw_version);

 FUNC_0(VAR_1 % 4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += 4) {
  FUNC_7("%d: 0x%8.8x 0x%8.8x 0x%8.8x 0x%8.8x\n",
       VAR_6,
       FUNC_9(VAR_5[VAR_6]),
       FUNC_9(VAR_5[VAR_6 + 1]),
       FUNC_9(VAR_5[VAR_6 + 2]),
       FUNC_9(VAR_5[VAR_6 + 3]));
 }
}

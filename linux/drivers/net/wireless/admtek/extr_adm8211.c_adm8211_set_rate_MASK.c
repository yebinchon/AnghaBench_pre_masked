
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {TYPE_1__* pdev; } ;
struct TYPE_5__ {int bitrate; } ;
struct TYPE_4__ {scalar_t__ revision; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (struct ieee80211_hw*,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5)
{
 struct adm8211_priv *VAR_6 = VAR_5->priv;
 u32 VAR_7;
 int VAR_8 = 0;
 u8 VAR_9[12] = {0};


 if (VAR_6->pdev->revision != VAR_0) {
  VAR_9[0] = FUNC_2(VAR_4);
  for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_4); VAR_8++)
   VAR_9[VAR_8 + 1] = (VAR_4[VAR_8].bitrate / 5) | 0x80;
 } else {

  VAR_9[0] = 0x04;
  VAR_9[1] = 0x82;
  VAR_9[2] = 0x04;
  VAR_9[3] = 0x0b;
  VAR_9[4] = 0x16;
 }

 FUNC_3(VAR_5, VAR_1, VAR_9,
     FUNC_2(VAR_4) + 1);

 VAR_7 = FUNC_0(VAR_2) & 0x00FFFFFF;
 VAR_7 |= 1 << 15;
 VAR_7 |= 110 << 24;
 FUNC_1(VAR_2, VAR_7);




 FUNC_1(VAR_3, (512 << 16) | (110 << 8) | (224 << 0));

 return 0;
}

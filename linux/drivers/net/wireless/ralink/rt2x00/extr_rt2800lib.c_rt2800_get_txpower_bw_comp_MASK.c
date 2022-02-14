
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_9,
          enum nl80211_band VAR_10)
{
 u16 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_0(VAR_9, VAR_1);




 if (VAR_11 == 0xffff ||
     !FUNC_2(VAR_0, &VAR_9->flags))
  return 0;

 if (VAR_10 == VAR_8) {
  VAR_12 = FUNC_1(VAR_11,
     VAR_2);
  if (VAR_12) {
   VAR_13 = FUNC_1(VAR_11,
        VAR_4);
   VAR_14 = FUNC_1(VAR_11,
         VAR_6);
   if (!VAR_13)
    VAR_14 = -VAR_14;
  }
 } else {
  VAR_12 = FUNC_1(VAR_11,
     VAR_3);
  if (VAR_12) {
   VAR_13 = FUNC_1(VAR_11,
        VAR_5);
   VAR_14 = FUNC_1(VAR_11,
         VAR_7);
   if (!VAR_13)
    VAR_14 = -VAR_14;
  }
 }

 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtw_dev*,char*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static bool
FUNC_4(struct rtw_dev *VAR_8, u32 VAR_9)
{
 u8 VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_7);

 if (FUNC_1(VAR_8, VAR_6) & VAR_0) {
  if (VAR_9 < VAR_5) {
   VAR_10 |= VAR_4;
   VAR_10 &= ~VAR_3;
   FUNC_3(VAR_8, VAR_7, VAR_10);
  } else {
   VAR_10 |= VAR_2;
   VAR_10 &= ~VAR_1;
   FUNC_3(VAR_8, VAR_7, VAR_10);
  }

  FUNC_0(VAR_8, "invalid fw checksum\n");

  return 0;
 }

 if (VAR_9 < VAR_5) {
  VAR_10 |= (VAR_4 | VAR_3);
  FUNC_3(VAR_8, VAR_7, VAR_10);
 } else {
  VAR_10 |= (VAR_2 | VAR_1);
  FUNC_3(VAR_8, VAR_7, VAR_10);
 }

 return 1;
}

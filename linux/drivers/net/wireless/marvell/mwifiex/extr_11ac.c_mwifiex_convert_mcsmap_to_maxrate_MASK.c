
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int usr_dot_11ac_dev_cap_bg; int usr_dot_11ac_dev_cap_a; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__** VAR_4 ;

__attribute__((used)) static u16
FUNC_2(struct mwifiex_private *VAR_5,
      u8 VAR_6, u16 VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;
 u16 VAR_11 = 0;
 u32 VAR_12 = 0;
 struct mwifiex_adapter *VAR_13 = VAR_5->adapter;

 if (VAR_6 & VAR_0)
  VAR_12 = VAR_13->usr_dot_11ac_dev_cap_a;
 else
  VAR_12 = VAR_13->usr_dot_11ac_dev_cap_bg;


 VAR_9 = 1;
 for (VAR_8 = 1; VAR_8 <= 8; VAR_8++) {
  VAR_10 = FUNC_1(VAR_7, VAR_8);
  if (VAR_10 < VAR_1)
   VAR_9 = VAR_8;
 }
 VAR_10 = FUNC_1(VAR_7, VAR_9);


 if (VAR_10 == VAR_1)
  VAR_10 = VAR_2;

 if (FUNC_0(VAR_12)) {

  VAR_11 = VAR_3[VAR_9 - 1][VAR_10];
  if (!VAR_11)

   VAR_11 = VAR_3[VAR_9 - 1][VAR_10 - 1];
 } else {
  VAR_11 = VAR_4[VAR_9 - 1][VAR_10];
  if (!VAR_11)

   VAR_11 = VAR_4[VAR_9 - 1][VAR_10 - 1];
 }

 return VAR_11;
}

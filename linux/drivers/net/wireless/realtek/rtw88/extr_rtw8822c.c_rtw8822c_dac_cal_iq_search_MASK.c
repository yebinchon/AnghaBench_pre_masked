
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,int*,int*) ;
 int FUNC_1 (struct rtw_dev*,int*,int*) ;
 int FUNC_2 (struct rtw_dev*,int,int*,int*) ;
 int FUNC_3 (struct rtw_dev*,int ,char*,int,int,int) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_2,
           u32 *VAR_3, u32 *VAR_4,
           u32 *VAR_5, u32 *VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 u32 VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15 = 0;

 do {
  VAR_9 = VAR_3[0];
  VAR_7 = VAR_3[0];
  VAR_10 = VAR_4[0];
  VAR_8 = VAR_4[0];
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
   FUNC_2(VAR_2, VAR_3[VAR_14], &VAR_9, &VAR_7);
   FUNC_2(VAR_2, VAR_4[VAR_14], &VAR_10, &VAR_8);
  }

  if (VAR_7 < 0x200 && VAR_9 < 0x200)
   VAR_11 = VAR_7 - VAR_9;
  else if (VAR_7 >= 0x200 && VAR_9 >= 0x200)
   VAR_11 = VAR_7 - VAR_9;
  else
   VAR_11 = VAR_7 + (0x400 - VAR_9);

  if (VAR_8 < 0x200 && VAR_10 < 0x200)
   VAR_12 = VAR_8 - VAR_10;
  else if (VAR_8 >= 0x200 && VAR_10 >= 0x200)
   VAR_12 = VAR_8 - VAR_10;
  else
   VAR_12 = VAR_8 + (0x400 - VAR_10);

  FUNC_3(VAR_2, VAR_1,
   "[DACK] i: min=0x%08x, max=0x%08x, delta=0x%08x\n",
   VAR_9, VAR_7, VAR_11);
  FUNC_3(VAR_2, VAR_1,
   "[DACK] q: min=0x%08x, max=0x%08x, delta=0x%08x\n",
   VAR_10, VAR_8, VAR_12);

  FUNC_1(VAR_2, VAR_3, VAR_4);

  if (VAR_11 > 5 || VAR_12 > 5) {
   VAR_13 = FUNC_4(VAR_2, 0x2dbc, 0x3fffff);
   VAR_3[0] = (VAR_13 & 0x3ff000) >> 12;
   VAR_4[0] = VAR_13 & 0x3ff;
   VAR_13 = FUNC_4(VAR_2, 0x2dbc, 0x3fffff);
   VAR_3[VAR_0 - 1] = (VAR_13 & 0x3ff000) >> 12;
   VAR_4[VAR_0 - 1] = VAR_13 & 0x3ff;
  } else {
   break;
  }
 } while (VAR_15++ < 100);

 FUNC_0(VAR_2, VAR_3, VAR_5);
 FUNC_0(VAR_2, VAR_4, VAR_6);
}

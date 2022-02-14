
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct cfg80211_beacon_data {int tail_len; int tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (size_t const*) ;
 int FUNC_2 (size_t*,size_t const*,int) ;

__attribute__((used)) static int FUNC_3(struct cfg80211_beacon_data *VAR_2,
    u8 *VAR_3)
{
 const u8 *VAR_4;
 size_t VAR_5;
 u16 VAR_6;

 if (!VAR_2->tail)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2->tail, VAR_2->tail_len);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = *(VAR_4 + 1);

 VAR_4 += 2;


 if (VAR_5 < 2)
  return -VAR_0;
 VAR_4 += 2;
 VAR_5 -= 2;


 if (VAR_5 < 4)
  return 0;
 VAR_4 += 4;
 VAR_5 -= 4;


 if (VAR_5 < 2)
  return 0;
 VAR_6 = FUNC_1(VAR_4);
 VAR_4 += (2 + VAR_6 * 4);
 VAR_5 -= (2 + VAR_6 * 4);


 if (VAR_5 < 2)
  return 0;
 VAR_6 = FUNC_1(VAR_4);
 VAR_4 += (2 + VAR_6 * 4);
 VAR_5 -= (2 + VAR_6 * 4);

 if (VAR_5 < 2)
  return 0;

 FUNC_2(VAR_3, VAR_4, 2);

 return 0;
}

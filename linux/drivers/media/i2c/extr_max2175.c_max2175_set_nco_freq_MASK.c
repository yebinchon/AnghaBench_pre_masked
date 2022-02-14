
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max2175 {int xtal_freq; int decim_ratio; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct max2175*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct max2175*,int,int) ;
 int FUNC_4 (struct max2175*,int,int,int ,int) ;
 int FUNC_5 (struct max2175*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct max2175 *VAR_0, s32 VAR_1)
{
 s32 VAR_2 = VAR_0->xtal_freq / VAR_0->decim_ratio;
 u32 VAR_3, VAR_4 = FUNC_0(VAR_1);
 s64 VAR_5;
 int VAR_6;

 if (VAR_4 < VAR_2 / 2) {
  VAR_5 = 2 * VAR_1;
 } else {
  VAR_5 = 2LL * (VAR_2 - VAR_4);
  if (VAR_1 < 0)
   VAR_5 = -VAR_5;
 }

 VAR_3 = FUNC_2(VAR_5 << 20, VAR_2);

 if (VAR_1 < 0)
  VAR_3 += 0x200000;


 VAR_6 = FUNC_1(VAR_0);
 if (VAR_6)
  return VAR_6;

 FUNC_5(VAR_0, "freq %d desired %lld reg %u\n",
  VAR_1, VAR_5, VAR_3);


 FUNC_4(VAR_0, 7, 4, 0, (VAR_3 >> 16) & 0x1f);
 FUNC_3(VAR_0, 8, VAR_3 >> 8);
 FUNC_3(VAR_0, 9, VAR_3);

 return VAR_6;
}

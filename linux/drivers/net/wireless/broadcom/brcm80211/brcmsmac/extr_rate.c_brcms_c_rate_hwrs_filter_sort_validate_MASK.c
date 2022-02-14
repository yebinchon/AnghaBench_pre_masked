
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u8 ;
struct brcms_c_rateset {size_t count; int* rates; int* mcs; } ;
typedef int rateset ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct brcms_c_rateset*,int) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__* VAR_3 ;

bool
FUNC_2(struct brcms_c_rateset *VAR_4,
       const struct brcms_c_rateset *VAR_5,
       bool VAR_6, u8 VAR_7)
{
 u8 VAR_8[VAR_1 + 1];
 u8 VAR_9;
 uint VAR_10;
 uint VAR_11;

 FUNC_1(VAR_8, 0, sizeof(VAR_8));
 VAR_10 = VAR_4->count;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {

  VAR_9 = (int)VAR_4->rates[VAR_11] & VAR_0;
  if ((VAR_9 > VAR_1) || (VAR_3[VAR_9] == 0))
   continue;
  VAR_8[VAR_9] = VAR_4->rates[VAR_11];
 }


 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5->count; VAR_11++) {
  VAR_9 = VAR_5->rates[VAR_11] & VAR_0;
  if (VAR_8[VAR_9])
   VAR_4->rates[VAR_10++] = VAR_8[VAR_9];
 }

 VAR_4->count = VAR_10;


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_4->mcs[VAR_11] = (VAR_4->mcs[VAR_11] & VAR_5->mcs[VAR_11]);

 if (FUNC_0(VAR_4, VAR_6))
  return 1;
 else
  return 0;
}

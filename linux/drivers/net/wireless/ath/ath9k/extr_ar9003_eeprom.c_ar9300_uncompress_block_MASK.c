
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*,int,int,int,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static bool FUNC_3(struct ath_hw *VAR_1,
        u8 *VAR_2,
        int VAR_3,
        u8 *VAR_4,
        int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct ath_common *VAR_10 = FUNC_0(VAR_1);

 VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += (VAR_9+2)) {
  VAR_8 = VAR_4[VAR_6];
  VAR_8 &= 0xff;
  VAR_7 += VAR_8;
  VAR_9 = VAR_4[VAR_6+1];
  VAR_9 &= 0xff;

  if (VAR_9 > 0 && VAR_7 >= 0 && VAR_7+VAR_9 <= VAR_3) {
   FUNC_1(VAR_10, VAR_0,
    "Restore at %d: spot=%d offset=%d length=%d\n",
    VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_2(&VAR_2[VAR_7], &VAR_4[VAR_6+2], VAR_9);
   VAR_7 += VAR_9;
  } else if (VAR_9 > 0) {
   FUNC_1(VAR_10, VAR_0,
    "Bad restore at %d: spot=%d offset=%d length=%d\n",
    VAR_6, VAR_7, VAR_8, VAR_9);
   return 0;
  }
 }
 return 1;
}

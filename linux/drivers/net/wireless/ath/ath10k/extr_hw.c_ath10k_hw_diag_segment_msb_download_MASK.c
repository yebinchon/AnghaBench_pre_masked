
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef scalar_t__ u32 ;
struct ath10k {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ath10k*,scalar_t__,void const*,scalar_t__) ;
 int FUNC_2 (struct ath10k*,scalar_t__) ;
 int FUNC_3 (struct ath10k*,char*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_3,
            const void *VAR_4,
            u32 VAR_5,
            u32 VAR_6)
{
 u32 VAR_7 = VAR_5 & VAR_2;
 int VAR_8, VAR_9, VAR_10;
 const u8 *VAR_11;

 FUNC_2(VAR_3, FUNC_0(VAR_5));

 if (VAR_7 + VAR_6 > VAR_1) {
  VAR_10 = VAR_1 - VAR_7;
  VAR_9 = VAR_6 - VAR_10;

  VAR_8 = FUNC_1(VAR_3, VAR_5, VAR_4, VAR_10);
  if (VAR_8) {
   FUNC_3(VAR_3,
        "failed to download the first %d bytes segment to address:0x%x: %d\n",
        VAR_10, VAR_5, VAR_8);
   goto done;
  }


  FUNC_2(VAR_3,
      FUNC_0(VAR_5) + 1);
  VAR_11 = VAR_4 + VAR_10;
  VAR_8 = FUNC_1(VAR_3,
         VAR_5 & ~VAR_2,
         VAR_11, VAR_9);
  if (VAR_8) {
   FUNC_3(VAR_3,
        "failed to download the second %d bytes segment to address:0x%x: %d\n",
        VAR_9,
        VAR_5 & ~VAR_2,
        VAR_8);
   goto done;
  }
 } else {
  VAR_8 = FUNC_1(VAR_3, VAR_5, VAR_4, VAR_6);
  if (VAR_8) {
   FUNC_3(VAR_3,
        "failed to download the only %d bytes segment to address:0x%x: %d\n",
        VAR_6, VAR_5, VAR_8);
   goto done;
  }
 }

done:

 FUNC_2(VAR_3,
     FUNC_0(VAR_0));
 return VAR_8;
}

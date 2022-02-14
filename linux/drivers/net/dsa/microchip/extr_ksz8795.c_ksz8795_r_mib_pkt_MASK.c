
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_device {int alu_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ksz_device*,int ,int*) ;
 int FUNC_2 (struct ksz_device*,int ,int*) ;
 int FUNC_3 (struct ksz_device*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ksz_device *VAR_12, int VAR_13, u16 VAR_14,
         u64 *VAR_15, u64 *VAR_16)
{
 u16 VAR_17;
 u32 VAR_18;
 u8 VAR_19;
 int VAR_20;

 VAR_14 -= VAR_9;
 VAR_17 = (VAR_1 - VAR_0) * VAR_13;
 VAR_17 += VAR_14 + VAR_0;
 VAR_17 |= FUNC_0(VAR_10 | VAR_11);

 FUNC_4(&VAR_12->alu_mutex);
 FUNC_3(VAR_12, VAR_6, VAR_17);




 for (VAR_20 = 2; VAR_20 > 0; VAR_20--) {
  FUNC_2(VAR_12, VAR_8, &VAR_19);

  if (VAR_19 & VAR_3) {
   FUNC_1(VAR_12, VAR_7, &VAR_18);
   if (VAR_14 < 2) {
    u64 VAR_21;

    VAR_21 = VAR_19 & VAR_5;
    VAR_21 <<= 32;
    *VAR_16 += VAR_21;
    *VAR_16 += VAR_18;
    if (VAR_19 & VAR_2) {
     VAR_21 = VAR_5 + 1;
     VAR_21 <<= 32;
     *VAR_16 += VAR_21;
    }
   } else {
    if (VAR_19 & VAR_2)
     *VAR_16 += VAR_4 + 1;
    *VAR_16 += VAR_18 & VAR_4;
   }
   break;
  }
 }
 FUNC_5(&VAR_12->alu_mutex);
}

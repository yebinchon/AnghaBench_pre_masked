
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_device {int alu_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ksz_device*,int*) ;
 int FUNC_2 (struct ksz_device*,int ,int*) ;
 int FUNC_3 (struct ksz_device*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ksz_device *VAR_16, u16 VAR_17,
       u8 *VAR_18, u8 *VAR_19, u8 *VAR_20,
       u8 *VAR_21, u16 *VAR_22)
{
 u32 VAR_23, VAR_24;
 u16 VAR_25;
 u8 VAR_26;
 int VAR_27;

 VAR_25 = FUNC_0(VAR_14 | VAR_15) | VAR_17;

 FUNC_4(&VAR_16->alu_mutex);
 FUNC_3(VAR_16, VAR_12, VAR_25);

 VAR_27 = FUNC_1(VAR_16, &VAR_26);
 if (VAR_27 == -VAR_10) {
  if (VAR_17 == 0)
   *VAR_22 = 0;
 } else if (VAR_27 == -VAR_11) {
  *VAR_22 = 0;

 } else {
  u64 VAR_28 = 0;
  int VAR_29;

  FUNC_2(VAR_16, VAR_13, &VAR_28);
  VAR_23 = (u32)(VAR_28 >> 32);
  VAR_24 = (u32)VAR_28;


  VAR_29 = VAR_26 & VAR_5;
  VAR_29 <<= VAR_0;
  VAR_29 |= (VAR_23 & VAR_4) >>
   VAR_1;
  *VAR_22 = VAR_29 + 1;

  *VAR_19 = (VAR_23 & VAR_6) >>
   VAR_2;
  *VAR_20 = (VAR_23 & VAR_7) >>
   VAR_3;
  *VAR_21 = (VAR_23 & VAR_8) >>
   VAR_9;

  VAR_18[5] = (u8)VAR_24;
  VAR_18[4] = (u8)(VAR_24 >> 8);
  VAR_18[3] = (u8)(VAR_24 >> 16);
  VAR_18[2] = (u8)(VAR_24 >> 24);

  VAR_18[1] = (u8)VAR_23;
  VAR_18[0] = (u8)(VAR_23 >> 8);
  VAR_27 = 0;
 }
 FUNC_5(&VAR_16->alu_mutex);

 return VAR_27;
}

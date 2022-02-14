
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct lan78xx_net {int net; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct lan78xx_net *VAR_16, u32 VAR_17,
    u32 VAR_18, u8 *VAR_19)
{
 int VAR_20;
 int VAR_21;
 u32 VAR_22;
 unsigned long VAR_23;

 VAR_21 = FUNC_0(VAR_16, VAR_10, &VAR_22);

 if (VAR_22 & VAR_11) {

  VAR_21 = FUNC_1(VAR_16, VAR_10, 0);

  VAR_23 = VAR_15 + VAR_1;
  do {
   FUNC_5(1, 10);
   VAR_21 = FUNC_0(VAR_16, VAR_10, &VAR_22);
   if (FUNC_3(VAR_15, VAR_23)) {
    FUNC_2(VAR_16->net,
         "timeout on OTP_PWR_DN");
    return -VAR_0;
   }
  } while (VAR_22 & VAR_11);
 }

 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
  VAR_21 = FUNC_1(VAR_16, VAR_2,
     ((VAR_17 + VAR_20) >> 8) & VAR_3);
  VAR_21 = FUNC_1(VAR_16, VAR_4,
     ((VAR_17 + VAR_20) & VAR_5));

  VAR_21 = FUNC_1(VAR_16, VAR_8, VAR_9);
  VAR_21 = FUNC_1(VAR_16, VAR_6, VAR_7);

  VAR_23 = VAR_15 + VAR_1;
  do {
   FUNC_4(1);
   VAR_21 = FUNC_0(VAR_16, VAR_13, &VAR_22);
   if (FUNC_3(VAR_15, VAR_23)) {
    FUNC_2(VAR_16->net,
         "timeout on OTP_STATUS");
    return -VAR_0;
   }
  } while (VAR_22 & VAR_14);

  VAR_21 = FUNC_0(VAR_16, VAR_12, &VAR_22);

  VAR_19[VAR_20] = (u8)(VAR_22 & 0xFF);
 }

 return 0;
}

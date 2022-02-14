
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lan78xx_net *VAR_18, u32 VAR_19,
     u32 VAR_20, u8 *VAR_21)
{
 int VAR_22;
 int VAR_23;
 u32 VAR_24;
 unsigned long VAR_25;

 VAR_23 = FUNC_0(VAR_18, VAR_11, &VAR_24);

 if (VAR_24 & VAR_12) {

  VAR_23 = FUNC_1(VAR_18, VAR_11, 0);

  VAR_25 = VAR_17 + VAR_1;
  do {
   FUNC_4(1);
   VAR_23 = FUNC_0(VAR_18, VAR_11, &VAR_24);
   if (FUNC_3(VAR_17, VAR_25)) {
    FUNC_2(VAR_18->net,
         "timeout on OTP_PWR_DN completion");
    return -VAR_0;
   }
  } while (VAR_24 & VAR_12);
 }


 VAR_23 = FUNC_1(VAR_18, VAR_9, VAR_10);

 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
  VAR_23 = FUNC_1(VAR_18, VAR_2,
     ((VAR_19 + VAR_22) >> 8) & VAR_3);
  VAR_23 = FUNC_1(VAR_18, VAR_4,
     ((VAR_19 + VAR_22) & VAR_5));
  VAR_23 = FUNC_1(VAR_18, VAR_8, VAR_21[VAR_22]);
  VAR_23 = FUNC_1(VAR_18, VAR_15, VAR_16);
  VAR_23 = FUNC_1(VAR_18, VAR_6, VAR_7);

  VAR_25 = VAR_17 + VAR_1;
  do {
   FUNC_4(1);
   VAR_23 = FUNC_0(VAR_18, VAR_13, &VAR_24);
   if (FUNC_3(VAR_17, VAR_25)) {
    FUNC_2(VAR_18->net,
         "Timeout on OTP_STATUS completion");
    return -VAR_0;
   }
  } while (VAR_24 & VAR_14);
 }

 return 0;
}

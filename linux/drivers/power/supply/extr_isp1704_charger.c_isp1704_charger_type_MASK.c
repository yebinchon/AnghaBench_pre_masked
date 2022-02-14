
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isp1704_charger {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct isp1704_charger*,int ) ;
 int FUNC_3 (struct isp1704_charger*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline int FUNC_5(struct isp1704_charger *VAR_11)
{
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15 = VAR_1;

 VAR_13 = FUNC_2(VAR_11, VAR_3);
 VAR_14 = FUNC_2(VAR_11, VAR_8);


 VAR_12 = VAR_9 | VAR_10;
 FUNC_3(VAR_11, FUNC_0(VAR_8), VAR_12);


 FUNC_3(VAR_11, FUNC_0(VAR_3),
   VAR_7);
 FUNC_3(VAR_11, FUNC_1(VAR_3),
   VAR_4);


 VAR_12 = VAR_6 | VAR_5;
 FUNC_3(VAR_11, FUNC_1(VAR_3), VAR_12);
 FUNC_4(1000, 2000);

 VAR_12 = FUNC_2(VAR_11, VAR_2);
 if ((VAR_12 & 3) != 3)
  VAR_15 = VAR_0;


 FUNC_3(VAR_11, VAR_3, VAR_13);
 FUNC_3(VAR_11, VAR_8, VAR_14);

 return VAR_15;
}


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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct isp1704_charger*,int ) ;
 int FUNC_3 (struct isp1704_charger*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline int FUNC_5(struct isp1704_charger *VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12;


 VAR_12 = FUNC_2(VAR_10, VAR_3);
 VAR_12 |= VAR_5;
 FUNC_3(VAR_10, VAR_3, VAR_12);
 FUNC_4(1000, 2000);


 VAR_12 &= ~(VAR_5 | VAR_4);
 FUNC_3(VAR_10, VAR_3, VAR_12);


 VAR_12 = VAR_9 | VAR_8;
 FUNC_3(VAR_10, FUNC_0(VAR_7), VAR_12);


 VAR_12 = VAR_6 | VAR_5;
 FUNC_3(VAR_10, FUNC_1(VAR_3), VAR_12);
 FUNC_4(1000, 2000);


 if (!FUNC_2(VAR_10, VAR_2)) {

  FUNC_3(VAR_10, FUNC_0(VAR_3),
    VAR_6);
  return 1;
 }




 FUNC_3(VAR_10, FUNC_1(VAR_0),
   VAR_1);


 FUNC_3(VAR_10, FUNC_0(VAR_3),
   VAR_6);


 FUNC_3(VAR_10, FUNC_1(VAR_7),
   VAR_8);


 if (!(FUNC_2(VAR_10, VAR_2)))
  VAR_11 = 1;


 FUNC_3(VAR_10, FUNC_0(VAR_0),
   VAR_1);

 return VAR_11;
}

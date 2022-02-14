
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isp1704_charger {scalar_t__ online; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct isp1704_charger*) ;
 int FUNC_2 (struct isp1704_charger*,int ) ;
 int FUNC_3 (struct isp1704_charger*,int ,int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static inline int FUNC_7(struct isp1704_charger *VAR_5)
{
 unsigned long VAR_6;
 u8 VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_2(VAR_5, VAR_0);


 FUNC_3(VAR_5, VAR_0,
   VAR_2);


 FUNC_3(VAR_5, FUNC_0(VAR_0),
   VAR_2
   | VAR_1);
 FUNC_6(1000, 2000);

 VAR_6 = VAR_4 + FUNC_4(300);
 do {

  if (FUNC_2(VAR_5, VAR_0)
    & VAR_3) {
   VAR_8 = FUNC_1(VAR_5);
   break;
  }
 } while (!FUNC_5(VAR_4, VAR_6) && VAR_5->online);


 FUNC_3(VAR_5, VAR_0, VAR_7);

 return VAR_8;
}

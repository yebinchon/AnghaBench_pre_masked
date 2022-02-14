
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct adapter *VAR_1, u8 VAR_2)
{
 u8 VAR_3 = 0;
 int VAR_4 = 100;

 u8 VAR_5;



 do {
  VAR_5 = FUNC_2(VAR_1, VAR_0) & FUNC_0(VAR_2);
  if (0 == VAR_5) {
   VAR_3 = 1;
  }




 } while ((!VAR_3) && (VAR_4--));

 return VAR_3;

}

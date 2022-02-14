
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct esas2r_adapter*,int ) ;
 int FUNC_2 (struct esas2r_adapter*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct esas2r_adapter *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_4, VAR_1, VAR_0);
 VAR_5 = FUNC_3(VAR_3);

 while (1) {
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if (VAR_6 & VAR_0) {
   FUNC_2(VAR_4, VAR_2,
          VAR_6);
   break;
  }

  FUNC_5(FUNC_4(100));

  if ((FUNC_3(VAR_3) - VAR_5) > 30000) {
   FUNC_0("Timeout waiting for power down");
   break;
  }
 }
}

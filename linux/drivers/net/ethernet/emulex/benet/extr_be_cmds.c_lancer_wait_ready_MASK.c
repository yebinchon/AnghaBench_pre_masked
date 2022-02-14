
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {scalar_t__ db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct be_adapter *VAR_6)
{

 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 30; VAR_8++) {
  VAR_7 = FUNC_0(VAR_6->db + VAR_3);
  if (VAR_7 & VAR_4)
   return 0;

  if (VAR_7 & VAR_2 &&
      !(VAR_7 & VAR_5))
   return -VAR_0;

  FUNC_1(1000);
 }

 return VAR_7 ? : -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {scalar_t__ db; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct be_adapter *VAR_3)
{

 u32 VAR_4;
 int VAR_5 = 0, VAR_6;

 for (VAR_6 = 0; VAR_6 < 30; VAR_6++) {
  VAR_4 = FUNC_0(VAR_3->db + VAR_1);
  if ((VAR_4 & VAR_0) == 0)
   break;

  FUNC_1(1);
 }

 if (VAR_6 == 30)
  VAR_5 = -1;

 return VAR_5;
}

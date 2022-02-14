
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PI_UINT32 ;
typedef int DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(DFX_board_t *VAR_3, PI_UINT32 VAR_4)
 {
 int VAR_5;



 FUNC_0(VAR_3, VAR_4);



 for (VAR_5 = 100000; VAR_5 > 0; VAR_5--)
  {
  if (FUNC_1(VAR_3) == VAR_2)
   break;
  FUNC_2(100);
  }
 if (VAR_5 == 0)
  return VAR_0;
 return VAR_1;
 }

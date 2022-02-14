
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PI_UINT32 ;
typedef int DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
 DFX_board_t *VAR_8,
 PI_UINT32 VAR_9,
 PI_UINT32 VAR_10,
 PI_UINT32 VAR_11,
 PI_UINT32 *VAR_12
 )

 {
 PI_UINT32 VAR_13;
 int VAR_14;



 VAR_13 = (PI_UINT32) (VAR_9 | VAR_3);



 FUNC_1(VAR_8, VAR_6, VAR_10);
 FUNC_1(VAR_8, VAR_7, VAR_11);
 FUNC_1(VAR_8, VAR_5, VAR_13);



 if (VAR_9 == VAR_2)
  VAR_14 = 600000;
 else
  VAR_14 = 20000;

 for (; VAR_14 > 0; VAR_14--)
  {
  FUNC_0(VAR_8, VAR_5, &VAR_13);
  if (!(VAR_13 & VAR_3))
   break;
  FUNC_2(100);
  }
 if (VAR_14 == 0)
  return VAR_0;







 if (VAR_12 != ((void*)0))
  FUNC_0(VAR_8, VAR_4, VAR_12);
 return VAR_1;
 }

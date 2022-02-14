
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum da8xx_frame_complete { ____Placeholder_da8xx_frame_complete } da8xx_frame_complete ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5(enum da8xx_frame_complete VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_1);
 if (VAR_8 & VAR_2)
  FUNC_1(VAR_8 & ~VAR_2, VAR_1);
 else

  return;

 if ((VAR_7 == VAR_0) &&
   (VAR_6 == VAR_3)) {
  VAR_4 = 0;
  VAR_9 = FUNC_4(VAR_5,
    VAR_4 != 0,
    FUNC_2(50));
  if (VAR_9 == 0)
   FUNC_3("LCD Controller timed out\n");
 }
}

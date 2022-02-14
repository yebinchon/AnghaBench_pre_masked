
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vpbe_enc_timings_type { ____Placeholder_vpbe_enc_timings_type } vpbe_enc_timings_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_7,
         enum vpbe_enc_timings_type VAR_8,
         unsigned int VAR_9)
{
 if (VAR_7 == VAR_2)
  return;

 if (VAR_7 == VAR_3 && (VAR_8 == VAR_1 || (VAR_8 ==
     VAR_0 && VAR_9 <= 27000000))) {
  FUNC_0(VAR_5, 1);
  FUNC_0(VAR_6, 1);
  return;
 }

 if (VAR_7 == VAR_4 && VAR_8 == VAR_1)
  FUNC_0(VAR_5, 0);
}

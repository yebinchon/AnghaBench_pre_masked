
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

u16
FUNC_7(struct brcms_c_info *VAR_3, u32 VAR_4,
        uint VAR_5)
{
 uint VAR_6, VAR_7 = 0, VAR_8;

 if (FUNC_1(VAR_4)) {
  uint VAR_9 = VAR_4 & VAR_2;
  int VAR_10 = (FUNC_3(VAR_9) + 1) +
      FUNC_6(VAR_4);






  VAR_8 = FUNC_2(VAR_9, FUNC_4(VAR_4),
       FUNC_5(VAR_4)) * 4;

  if (FUNC_6(VAR_4) == 0)
   VAR_6 =
       FUNC_0((VAR_0 + 8 * VAR_5 +
      VAR_1) * 1000, VAR_8);
  else

   VAR_6 =
       2 *
       FUNC_0((VAR_0 + 8 * VAR_5 +
      VAR_1) * 1000, 2 * VAR_8);


  VAR_6 += (VAR_10 + 3);




  VAR_7 = (3 * VAR_6) - 3;
 }

 return (u16) VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static int FUNC_2(void)
{

 int VAR_4;
 int VAR_5 = 10;
 u8 VAR_6;

 do {
  VAR_4 = FUNC_1(VAR_3, &VAR_6,
          VAR_2);
  if (VAR_4 < 0)
   return VAR_4;

  if (!(VAR_6 & VAR_1))
   return 0;

  FUNC_0(1);
  VAR_5--;
 } while (VAR_5);

 return -VAR_0;
}

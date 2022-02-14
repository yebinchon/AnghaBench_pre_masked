
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*,int,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int*,int,int,int,int ,int *,int ,int) ;
 int FUNC_3 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_6, u8 VAR_7)
{
 int VAR_8;
 u8 VAR_9[5];

 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_5);
 if (VAR_8 != VAR_4)
  return VAR_3;

 VAR_9[0] = 0x40 | VAR_2;
 VAR_9[1] = 0;
 VAR_9[2] = 0;
 VAR_9[3] = 0;
 VAR_9[4] = 0;

 VAR_8 = FUNC_2(VAR_6, VAR_1, VAR_9, 5, 0x40, 1,
         VAR_0, ((void*)0), 0, 100);
 if (VAR_8 != VAR_4) {
  (void)FUNC_3(VAR_6);

  FUNC_0(VAR_6);
  return VAR_3;
 }

 return VAR_4;
}

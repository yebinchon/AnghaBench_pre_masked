
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
 int FUNC_0 (struct rtsx_chip*,int ,int,int ,int *,int) ;
 int FUNC_1 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_5, u8 VAR_6,
         u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 int VAR_10, VAR_11;
 u8 VAR_12[4];

 VAR_12[0] = VAR_6;
 VAR_12[1] = VAR_7;
 VAR_12[2] = VAR_8;
 VAR_12[3] = VAR_9;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_10 = FUNC_0(VAR_5, VAR_2, 4,
     VAR_1, VAR_12, 4);
  if (VAR_10 == VAR_4)
   return VAR_4;
  FUNC_1(VAR_5);
 }

 return VAR_3;
}

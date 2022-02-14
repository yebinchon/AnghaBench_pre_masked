
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ,int,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9[2];

 VAR_9[0] = VAR_2;
 VAR_9[1] = 0;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_0(VAR_6, VAR_5, 1, VAR_1,
     VAR_9, 2);
  if (VAR_7 == VAR_4)
   break;
 }
 if (VAR_7 != VAR_4)
  return VAR_3;

 return VAR_4;
}

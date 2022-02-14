
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int ,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_6, int VAR_7,
          u8 VAR_8)
{
 int VAR_9;
 u8 VAR_10[6];

 if (VAR_7 == 0)
  VAR_9 = FUNC_0(VAR_6, 0, 0, VAR_3, 1);
 else
  VAR_9 = FUNC_0(VAR_6, 0, 0, VAR_2, 6);

 if (VAR_9 != VAR_5)
  return VAR_4;

 VAR_10[0] = 0;
 VAR_10[1] = 0;
 if (VAR_7 == 1) {
  VAR_10[2] = 0;
  VAR_10[3] = 0;
  VAR_10[4] = 0;
  VAR_10[5] = VAR_8;
 }
 VAR_9 = FUNC_1(VAR_6, VAR_1, (VAR_7 == 0) ? 1 : 6,
    VAR_0, VAR_10, 6);
 if (VAR_9 != VAR_5)
  return VAR_4;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct rtsx_chip *VAR_4, int VAR_5,
     u8 *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 if (!VAR_6 || (VAR_7 < 0))
  return VAR_2;

 FUNC_4(VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_1(VAR_4, VAR_1, VAR_0 + VAR_5 + VAR_9,
        0, 0);

 VAR_8 = FUNC_5(VAR_4, 0, 250);
 if (VAR_8 < 0) {
  FUNC_2(VAR_4);
  return VAR_2;
 }

 FUNC_0(VAR_6, FUNC_3(VAR_4), VAR_7);

 return VAR_3;
}

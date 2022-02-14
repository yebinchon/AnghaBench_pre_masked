
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct solo_dev*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct solo_dev*,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct solo_dev *VAR_1, u8 VAR_2, u8 VAR_3,
    u8 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  u8 VAR_6 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);

  if (VAR_6 == VAR_4)
   return;

  FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
  FUNC_0(1);
 }



}

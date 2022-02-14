
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct solo_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct solo_dev*,int,int ,int ) ;
 int FUNC_3 (struct solo_dev*,int,int ,int ,int) ;

void FUNC_4(struct solo_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;


 VAR_4 = VAR_1 / 4;
 VAR_1 %= 4;

 VAR_3 = FUNC_2(VAR_0, VAR_4,
         FUNC_0(VAR_1),
         FUNC_1(VAR_1));

 VAR_2 = (VAR_3 & ((VAR_1 % 2) ? 0x0f : 0xf0)) |
  ((VAR_1 % 2) ? (VAR_2 << 4) : VAR_2);

 FUNC_3(VAR_0, VAR_4, FUNC_0(VAR_1),
       FUNC_1(VAR_1), VAR_2);
}

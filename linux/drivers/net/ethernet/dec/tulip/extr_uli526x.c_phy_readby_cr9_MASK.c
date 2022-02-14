
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uli526x_board_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uli526x_board_info*) ;
 int FUNC_1 (struct uli526x_board_info*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct uli526x_board_info *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u16 VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 35; VAR_6++)
  FUNC_1(VAR_2, VAR_1);


 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1);


 FUNC_1(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);


 for (VAR_6 = 0x10; VAR_6 > 0; VAR_6 = VAR_6 >> 1)
  FUNC_1(VAR_2, VAR_3 & VAR_6 ? VAR_1 : VAR_0);


 for (VAR_6 = 0x10; VAR_6 > 0; VAR_6 = VAR_6 >> 1)
  FUNC_1(VAR_2, VAR_4 & VAR_6 ? VAR_1 : VAR_0);


 FUNC_0(VAR_2);


 for (VAR_5 = 0, VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_5 <<= 1;
  VAR_5 |= FUNC_0(VAR_2);
 }

 return VAR_5;
}

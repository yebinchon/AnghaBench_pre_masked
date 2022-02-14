
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rspi_data {int dummy; } ;


 int FUNC_0 (struct rspi_data const*,int) ;
 int FUNC_1 (struct rspi_data const*,int,int) ;

__attribute__((used)) static void FUNC_2(const struct rspi_data *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 VAR_4 &= ~VAR_1;
 VAR_4 |= (VAR_2 & VAR_1);
 FUNC_1(VAR_0, VAR_4, VAR_3);
}

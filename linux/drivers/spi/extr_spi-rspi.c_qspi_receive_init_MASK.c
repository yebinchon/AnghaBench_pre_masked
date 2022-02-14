
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rspi_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rspi_data const*,int ) ;
 int FUNC_1 (struct rspi_data const*) ;
 int FUNC_2 (struct rspi_data const*,int,int ) ;

__attribute__((used)) static void FUNC_3(const struct rspi_data *VAR_5)
{
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 & VAR_4)
  FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_3 | VAR_2, VAR_0);
 FUNC_2(VAR_5, 0, VAR_0);
}

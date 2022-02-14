
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rspi_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rspi_data const*,int ) ;
 int FUNC_1 (struct rspi_data const*) ;
 int FUNC_2 (struct rspi_data const*,int,int ) ;

__attribute__((used)) static void FUNC_3(const struct rspi_data *VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 & VAR_2)
  FUNC_1(VAR_3);
 if (VAR_4 & VAR_1)
  FUNC_2(VAR_3, FUNC_0(VAR_3, VAR_0) & ~VAR_1,
       VAR_0);
}

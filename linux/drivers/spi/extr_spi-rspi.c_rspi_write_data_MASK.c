
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rspi_data {scalar_t__ byte_access; } ;


 int VAR_0 ;
 int FUNC_0 (struct rspi_data const*,int ,int ) ;
 int FUNC_1 (struct rspi_data const*,int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct rspi_data *VAR_1, u16 VAR_2)
{
 if (VAR_1->byte_access)
  FUNC_1(VAR_1, VAR_2, VAR_0);
 else
  FUNC_0(VAR_1, VAR_2, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint ;
struct gasket_page_table {int dummy; } ;


 scalar_t__ FUNC_0 (struct gasket_page_table*,int ) ;
 int FUNC_1 (struct gasket_page_table*,int ,int ) ;
 int FUNC_2 (struct gasket_page_table*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gasket_page_table *VAR_0,
        ulong VAR_1, uint VAR_2)
{
 if (!VAR_2)
  return;

 if (FUNC_0(VAR_0, VAR_1))
  FUNC_2(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}

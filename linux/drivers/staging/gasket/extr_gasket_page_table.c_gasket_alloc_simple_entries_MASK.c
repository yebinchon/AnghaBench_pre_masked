
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint ;
struct gasket_page_table {scalar_t__ entries; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct gasket_page_table*,int ) ;

__attribute__((used)) static int FUNC_2(struct gasket_page_table *VAR_1,
           ulong VAR_2, uint VAR_3)
{
 if (!FUNC_0(VAR_1->entries +
          FUNC_1(VAR_1, VAR_2),
          VAR_3))
  return -VAR_0;

 return 0;
}

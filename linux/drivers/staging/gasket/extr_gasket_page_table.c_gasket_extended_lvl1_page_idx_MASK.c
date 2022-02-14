
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct gasket_page_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ulong FUNC_0(struct gasket_page_table *VAR_2,
        ulong VAR_3)
{
 return (VAR_3 >> VAR_0) &
        (VAR_1 - 1);
}

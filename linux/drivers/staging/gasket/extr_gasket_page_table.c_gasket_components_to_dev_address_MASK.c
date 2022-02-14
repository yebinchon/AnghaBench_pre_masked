
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint ;
struct gasket_page_table {int extended_flag; } ;


 int VAR_0 ;

__attribute__((used)) static ulong FUNC_0(struct gasket_page_table *VAR_1,
           int VAR_2, uint VAR_3,
           uint VAR_4)
{
 ulong VAR_5 = (VAR_3 << VAR_0) | VAR_4;

 return VAR_2 ? VAR_5 : (VAR_1->extended_flag | VAR_5);
}

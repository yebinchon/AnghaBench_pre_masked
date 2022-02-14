
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ uint ;
struct gasket_page_table {scalar_t__ base_slot; scalar_t__ entries; } ;


 int FUNC_0 (struct gasket_page_table*,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct gasket_page_table*,int ) ;

__attribute__((used)) static void FUNC_2(struct gasket_page_table *VAR_0,
          ulong VAR_1, uint VAR_2)
{
 uint VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_0->entries + VAR_3,
     VAR_0->base_slot + VAR_3, VAR_2, 1);
}

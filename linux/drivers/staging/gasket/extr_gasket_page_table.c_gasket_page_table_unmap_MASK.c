
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint ;
struct gasket_page_table {int mutex; } ;


 int FUNC_0 (struct gasket_page_table*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gasket_page_table *VAR_0, ulong VAR_1,
        uint VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mutex);
}

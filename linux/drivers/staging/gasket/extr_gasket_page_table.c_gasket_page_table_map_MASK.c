
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint ;
struct gasket_page_table {int mutex; } ;


 scalar_t__ FUNC_0 (struct gasket_page_table*,int ) ;
 int FUNC_1 (struct gasket_page_table*,int ,int ,int ) ;
 int FUNC_2 (struct gasket_page_table*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct gasket_page_table *VAR_0, ulong VAR_1,
     ulong VAR_2, uint VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return 0;

 FUNC_3(&VAR_0->mutex);

 if (FUNC_0(VAR_0, VAR_2)) {
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2,
           VAR_3);
 } else {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2,
      VAR_3);
 }

 FUNC_4(&VAR_0->mutex);
 return VAR_4;
}

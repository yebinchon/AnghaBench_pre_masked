
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_table {scalar_t__ addr; int data; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(adapter_t *VAR_1, struct init_table *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].addr == VAR_0) {
   FUNC_1( VAR_2[VAR_4].data );
   FUNC_0("sleep %d us\n",VAR_2[VAR_4].data);
  } else
   FUNC_2( VAR_1, VAR_2[VAR_4].addr, VAR_2[VAR_4].data );
 }
}

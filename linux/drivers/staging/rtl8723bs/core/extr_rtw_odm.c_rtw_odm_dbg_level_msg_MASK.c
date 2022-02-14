
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (void*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (struct adapter*,int ,int *) ;

void FUNC_2(void *VAR_3, struct adapter *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 FUNC_1(VAR_4, VAR_0, &VAR_5);
 FUNC_0(VAR_3, "odm.DebugLevel = %u\n", VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_2[VAR_6])
   FUNC_0(VAR_3, "%u %s\n",
     VAR_6, VAR_2[VAR_6]);
 }
}

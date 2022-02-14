
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {int num_stations; int * stations; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int*) ;

__attribute__((used)) static u8 FUNC_1(struct ipw_priv *VAR_1, u8 * VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_stations; VAR_3++)
  if (FUNC_0(VAR_1->stations[VAR_3], VAR_2))
   return VAR_3;

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct typec_altmode {scalar_t__ svid; } ;



__attribute__((used)) static u8 FUNC_0(struct typec_altmode **VAR_0, u16 VAR_1)
{
 u8 VAR_2 = 1;
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
  if (VAR_0[VAR_3]->svid == VAR_1)
   VAR_2++;

 return VAR_2;
}

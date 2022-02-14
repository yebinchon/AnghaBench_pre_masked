
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct typec_altmode {scalar_t__ svid; scalar_t__ mode; } ;



struct typec_altmode *FUNC_0(struct typec_altmode **VAR_0,
       size_t VAR_1, u16 VAR_2, u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!VAR_0[VAR_4])
   break;
  if (VAR_0[VAR_4]->svid == VAR_2 && VAR_0[VAR_4]->mode == VAR_3)
   return VAR_0[VAR_4];
 }

 return ((void*)0);
}

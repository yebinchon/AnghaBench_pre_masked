
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ ma; scalar_t__ ds_4we; scalar_t__ ds_16st; scalar_t__ ds_0204m31; scalar_t__ ds_0610m31; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_9, u32 VAR_10)
{
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
  if (VAR_8[VAR_11].ma != VAR_10)
   continue;

  if (VAR_9 == VAR_2 || VAR_9 == VAR_3)
   return VAR_8[VAR_11].ds_4we;
  else if (VAR_9 == VAR_1)
   return VAR_8[VAR_11].ds_16st;
  else if (VAR_9 == VAR_4 || VAR_9 == VAR_5)
   return VAR_8[VAR_11].ds_0204m31;
  else if (VAR_9 == VAR_6 || VAR_9 == VAR_7)
   return VAR_8[VAR_11].ds_0610m31;
 }

 return VAR_0;
}

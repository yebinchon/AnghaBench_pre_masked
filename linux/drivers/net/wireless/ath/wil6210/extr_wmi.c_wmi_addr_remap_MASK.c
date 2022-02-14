
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ from; scalar_t__ to; scalar_t__ host; scalar_t__ fw; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1)
{
 uint VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].fw &&
      ((VAR_1 >= VAR_0[VAR_2].from) && (VAR_1 < VAR_0[VAR_2].to)))
   return VAR_1 + VAR_0[VAR_2].host - VAR_0[VAR_2].from;
 }

 return 0;
}

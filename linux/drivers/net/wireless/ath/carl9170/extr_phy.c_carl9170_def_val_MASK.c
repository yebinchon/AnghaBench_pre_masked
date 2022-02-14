
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ reg; scalar_t__ _2ghz_40; scalar_t__ _2ghz_20; scalar_t__ _5ghz_40; scalar_t__ _5ghz_20; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1, bool VAR_2, bool VAR_3)
{
 unsigned int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4].reg != VAR_1)
   continue;

  if (VAR_2) {
   if (VAR_3)
    return VAR_0[VAR_4]._2ghz_40;
   else
    return VAR_0[VAR_4]._2ghz_20;
  } else {
   if (VAR_3)
    return VAR_0[VAR_4]._5ghz_40;
   else
    return VAR_0[VAR_4]._5ghz_20;
  }
 }
 return 0;
}

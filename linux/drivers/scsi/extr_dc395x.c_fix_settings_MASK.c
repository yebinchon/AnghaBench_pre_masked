
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; scalar_t__ min; scalar_t__ max; scalar_t__ def; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_9;

 FUNC_0(VAR_7,
  "setup: AdapterId=%08x MaxSpeed=%08x DevMode=%08x "
  "AdapterMode=%08x Tags=%08x ResetDelay=%08x\n",
  VAR_8[VAR_0].value,
  VAR_8[VAR_3].value,
  VAR_8[VAR_2].value,
  VAR_8[VAR_1].value,
  VAR_8[VAR_6].value,
  VAR_8[VAR_5].value);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 {
  if (VAR_8[VAR_9].value < VAR_8[VAR_9].min
      || VAR_8[VAR_9].value > VAR_8[VAR_9].max)
   VAR_8[VAR_9].value = VAR_8[VAR_9].def;
 }
}

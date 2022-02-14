
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AdapterCtlBlk {TYPE_1__* srb_array; } ;
struct TYPE_2__ {int segment_x; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterCtlBlk *VAR_3)
{
 int VAR_4;
 const unsigned VAR_5 = VAR_1/VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += VAR_5)
  FUNC_0(VAR_3->srb_array[VAR_4].segment_x);
}

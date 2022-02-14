
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_ff_layout_segment {int mirror_array_cnt; TYPE_1__** mirror_array; } ;
struct TYPE_3__ {scalar_t__ efficiency; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct nfs4_ff_layout_segment *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->mirror_array_cnt - 1; VAR_1++) {
  for (VAR_2 = VAR_1 + 1; VAR_2 < VAR_0->mirror_array_cnt; VAR_2++)
   if (VAR_0->mirror_array[VAR_1]->efficiency <
       VAR_0->mirror_array[VAR_2]->efficiency)
    FUNC_0(VAR_0->mirror_array[VAR_1],
         VAR_0->mirror_array[VAR_2]);
 }
}

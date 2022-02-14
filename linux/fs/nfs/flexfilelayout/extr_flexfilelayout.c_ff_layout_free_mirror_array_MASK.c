
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_layout_segment {int mirror_array_cnt; int * mirror_array; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_ff_layout_segment *VAR_0)
{
 int VAR_1;

 if (VAR_0->mirror_array) {
  for (VAR_1 = 0; VAR_1 < VAR_0->mirror_array_cnt; VAR_1++) {



   FUNC_0(VAR_0->mirror_array[VAR_1]);
  }
  FUNC_1(VAR_0->mirror_array);
  VAR_0->mirror_array = ((void*)0);
 }
}

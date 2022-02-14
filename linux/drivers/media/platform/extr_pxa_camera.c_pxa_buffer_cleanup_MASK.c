
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_buffer {scalar_t__ nb_planes; scalar_t__* plane_sizes; scalar_t__* sg_len; int ** sg; int ** descs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pxa_buffer *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 3 && VAR_0->descs[VAR_1]; VAR_1++) {
  FUNC_0(VAR_0->descs[VAR_1]);
  FUNC_1(VAR_0->sg[VAR_1]);
  VAR_0->descs[VAR_1] = ((void*)0);
  VAR_0->sg[VAR_1] = ((void*)0);
  VAR_0->sg_len[VAR_1] = 0;
  VAR_0->plane_sizes[VAR_1] = 0;
 }
 VAR_0->nb_planes = 0;
}

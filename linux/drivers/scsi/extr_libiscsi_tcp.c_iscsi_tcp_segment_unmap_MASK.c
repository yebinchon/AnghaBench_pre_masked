
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_segment {int * data; int * sg_mapped; int sg; scalar_t__ atomic_mapped; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct iscsi_segment *VAR_0)
{
 if (VAR_0->sg_mapped) {
  if (VAR_0->atomic_mapped)
   FUNC_1(VAR_0->sg_mapped);
  else
   FUNC_0(FUNC_2(VAR_0->sg));
  VAR_0->sg_mapped = ((void*)0);
  VAR_0->data = ((void*)0);
 }
}

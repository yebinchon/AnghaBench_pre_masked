
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_queue {int * q_header; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1,
    struct vmci_queue *VAR_2,
    struct vmci_queue *VAR_3)
{
 if (VAR_2->q_header) {
  if (VAR_2->q_header < VAR_3->q_header)
   FUNC_0(VAR_2->q_header);
  else
   FUNC_0(VAR_3->q_header);

  VAR_2->q_header = ((void*)0);
  VAR_3->q_header = ((void*)0);
 }

 return VAR_0;
}

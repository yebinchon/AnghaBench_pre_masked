
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_queue {scalar_t__ saved_header; int * q_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmci_queue*,struct vmci_queue*) ;

__attribute__((used)) static int FUNC_1(struct vmci_queue *VAR_3,
    struct vmci_queue *VAR_4)
{
 int VAR_5;

 if (((void*)0) == VAR_3->q_header || ((void*)0) == VAR_4->q_header) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5 < VAR_2)
   return (VAR_3->saved_header &&
    VAR_4->saved_header) ?
       VAR_1 :
       VAR_0;
 }

 return VAR_2;
}

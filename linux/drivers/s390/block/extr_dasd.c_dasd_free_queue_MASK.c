
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_block {int * request_queue; int tag_set; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dasd_block *VAR_0)
{
 if (VAR_0->request_queue) {
  FUNC_0(VAR_0->request_queue);
  FUNC_1(&VAR_0->tag_set);
  VAR_0->request_queue = ((void*)0);
 }
}

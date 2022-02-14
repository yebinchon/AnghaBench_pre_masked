
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {int inputstate; struct cardstate* cs; scalar_t__ tail; scalar_t__ head; } ;
struct cardstate {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct inbuf_t *VAR_1, struct cardstate *VAR_2)

{
 VAR_1->head = 0;
 VAR_1->tail = 0;
 VAR_1->cs = VAR_2;
 VAR_1->inputstate = VAR_0;
}

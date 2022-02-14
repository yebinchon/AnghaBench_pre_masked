
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inbuf_t {scalar_t__ head; scalar_t__ tail; int inputstate; struct cardstate* cs; } ;
struct cardstate {scalar_t__ mstate; TYPE_1__* bcs; } ;
struct TYPE_2__ {scalar_t__ proto2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,struct inbuf_t*) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (struct inbuf_t*) ;
 unsigned int FUNC_3 (unsigned int,struct inbuf_t*) ;
 unsigned int FUNC_4 (unsigned int,struct inbuf_t*) ;
 unsigned int FUNC_5 (unsigned int,struct inbuf_t*) ;

void FUNC_6(struct inbuf_t *VAR_5)
{
 struct cardstate *VAR_6 = VAR_5->cs;
 unsigned VAR_7, VAR_8;

 FUNC_1(VAR_0, "buffer state: %u -> %u", VAR_5->head, VAR_5->tail);

 while (VAR_5->head != VAR_5->tail) {

  FUNC_2(VAR_5);


  VAR_7 = (VAR_5->head > VAR_5->tail ?
       VAR_4 : VAR_5->tail) - VAR_5->head;
  FUNC_1(VAR_0, "processing %u bytes", VAR_7);





  if (VAR_6->mstate == VAR_3)
   VAR_8 = FUNC_5(VAR_7, VAR_5);
  else if (VAR_5->inputstate & VAR_1)
   VAR_8 = FUNC_0(VAR_7, VAR_5);
  else if (VAR_6->bcs->proto2 == VAR_2)
   VAR_8 = FUNC_3(VAR_7, VAR_5);
  else
   VAR_8 = FUNC_4(VAR_7, VAR_5);
  VAR_5->head += VAR_8;


  if (VAR_5->head >= VAR_4)
   VAR_5->head = 0;

  FUNC_1(VAR_0, "head set to %u", VAR_5->head);
 }
}

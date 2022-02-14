
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {unsigned int head; unsigned int tail; unsigned char* data; struct cardstate* cs; } ;
struct cardstate {scalar_t__ mstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned char*,unsigned int,struct inbuf_t*) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned char*) ;
 int FUNC_3 (struct cardstate*,unsigned char*,unsigned int) ;

void FUNC_4(struct inbuf_t *VAR_4)
{
 struct cardstate *VAR_5 = VAR_4->cs;
 unsigned VAR_6, VAR_7, VAR_8;
 unsigned char *VAR_9;

 VAR_7 = VAR_4->head;
 while (VAR_7 != (VAR_6 = VAR_4->tail)) {
  FUNC_1(VAR_0, "buffer state: %u -> %u", VAR_7, VAR_6);
  if (VAR_7 > VAR_6)
   VAR_6 = VAR_3;
  VAR_9 = VAR_4->data + VAR_7;
  VAR_8 = VAR_6 - VAR_7;
  FUNC_1(VAR_0, "processing %u bytes", VAR_8);

  if (VAR_5->mstate == VAR_2) {
   FUNC_2(VAR_1, "received response",
        VAR_8, VAR_9);
   FUNC_3(VAR_4->cs, VAR_9, VAR_8);
  } else {
   FUNC_0(VAR_9, VAR_8, VAR_4);
  }

  VAR_7 += VAR_8;
  if (VAR_7 == VAR_3)
   VAR_7 = 0;
  FUNC_1(VAR_0, "setting head to %u", VAR_7);
  VAR_4->head = VAR_7;
 }
}

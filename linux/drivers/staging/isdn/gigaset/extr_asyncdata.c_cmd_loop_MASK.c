
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {unsigned char* data; int head; int inputstate; struct cardstate* cs; } ;
struct cardstate {unsigned int cbytes; char* respdata; int dle; int dev; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,char*) ;
 int FUNC_2 (struct cardstate*) ;

__attribute__((used)) static unsigned FUNC_3(unsigned VAR_5, struct inbuf_t *VAR_6)
{
 unsigned char *VAR_7 = VAR_6->data + VAR_6->head;
 struct cardstate *VAR_8 = VAR_6->cs;
 unsigned VAR_9 = VAR_8->cbytes;
 unsigned VAR_10 = 0;
 unsigned char VAR_11;

 while (VAR_10 < VAR_5) {
  VAR_11 = *VAR_7++;
  VAR_10++;

  switch (VAR_11) {
  case '\n':
   if (VAR_9 == 0 && VAR_8->respdata[0] == '\r') {

    VAR_8->respdata[0] = 0;
    break;
   }

  case '\r':

   if (VAR_9 >= VAR_4) {
    FUNC_0(VAR_8->dev, "response too large (%d)\n",
      VAR_9);
    VAR_9 = VAR_4;
   }
   VAR_8->cbytes = VAR_9;
   FUNC_1(VAR_0, "received response",
        VAR_9, VAR_8->respdata);
   FUNC_2(VAR_8);
   VAR_9 = 0;


   VAR_8->respdata[0] = VAR_11;


   if (VAR_8->dle && !(VAR_6->inputstate & VAR_2))
    VAR_6->inputstate &= ~VAR_3;


   goto exit;

  case 128:
   if (VAR_6->inputstate & VAR_1) {

    VAR_6->inputstate &= ~VAR_1;
   } else if (VAR_8->dle ||
       (VAR_6->inputstate & VAR_2)) {

    VAR_6->inputstate |= VAR_1;
    goto exit;
   }


  default:

   if (VAR_9 < VAR_4)
    VAR_8->respdata[VAR_9] = VAR_11;
   VAR_9++;
  }
 }
exit:
 VAR_8->cbytes = VAR_9;
 return VAR_10;
}

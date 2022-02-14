
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {struct cardstate* cs; } ;
struct cardstate {unsigned int cbytes; char* respdata; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,char*) ;
 int FUNC_2 (struct cardstate*) ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_2, int VAR_3, struct inbuf_t *VAR_4)
{
 struct cardstate *VAR_5 = VAR_4->cs;
 unsigned VAR_6 = VAR_5->cbytes;
 unsigned char VAR_7;

 while (VAR_3--) {
  VAR_7 = *VAR_2++;
  switch (VAR_7) {
  case '\n':
   if (VAR_6 == 0 && VAR_5->respdata[0] == '\r') {

    VAR_5->respdata[0] = 0;
    break;
   }

  case '\r':

   if (VAR_6 >= VAR_1) {
    FUNC_0(VAR_5->dev, "response too large (%d)\n",
      VAR_6);
    VAR_6 = VAR_1;
   }
   VAR_5->cbytes = VAR_6;
   FUNC_1(VAR_0, "received response",
        VAR_6, VAR_5->respdata);
   FUNC_2(VAR_5);
   VAR_6 = 0;


   VAR_5->respdata[0] = VAR_7;
   break;
  default:

   if (VAR_6 < VAR_1)
    VAR_5->respdata[VAR_6] = VAR_7;
   VAR_6++;
  }
 }


 VAR_5->cbytes = VAR_6;
}

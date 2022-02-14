
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tailcount ;
struct eerbuffer {int buffersize; int residual; int tail; } ;
typedef int count ;


 int VAR_0 ;
 int FUNC_0 (struct eerbuffer*) ;
 int FUNC_1 (struct eerbuffer*,char*,int) ;
 int FUNC_2 (struct eerbuffer*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct eerbuffer *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 + sizeof(VAR_2) > VAR_1->buffersize)
  return -VAR_0;
 while (FUNC_0(VAR_1) < VAR_2 + sizeof(VAR_2)) {
  if (VAR_1->residual > 0) {
   VAR_1->tail += VAR_1->residual;
   if (VAR_1->tail >= VAR_1->buffersize)
    VAR_1->tail -= VAR_1->buffersize;
   VAR_1->residual = -1;
  }
  FUNC_1(VAR_1, (char *) &VAR_3,
         sizeof(VAR_3));
  VAR_1->tail += VAR_3;
  if (VAR_1->tail >= VAR_1->buffersize)
   VAR_1->tail -= VAR_1->buffersize;
 }
 FUNC_2(VAR_1, (char*) &VAR_2, sizeof(VAR_2));

 return 0;
}

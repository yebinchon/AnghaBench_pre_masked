
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipack {struct av7110* data; } ;
struct av7110 {int ** kbuf; scalar_t__ iobuf; int aout; int avout; struct ipack* ipack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipack*) ;
 int FUNC_1 (struct ipack*,int,void (*) (u8*,int,void*)) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3(struct av7110 *VAR_6)
{
 void (*VAR_7[])(u8 *, int, void *) = { VAR_4, VAR_5 };
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  struct ipack *VAR_10 = VAR_6->ipack + VAR_8;

  VAR_9 = FUNC_1(VAR_10, VAR_3, VAR_7[VAR_8]);
  if (VAR_9 < 0) {
   if (VAR_8)
    FUNC_0(--VAR_10);
   goto out;
  }
  VAR_10->data = VAR_6;
 }

 FUNC_2(&VAR_6->avout, VAR_6->iobuf, VAR_1);
 FUNC_2(&VAR_6->aout, VAR_6->iobuf + VAR_1, VAR_0);

 VAR_6->kbuf[0] = (u8 *)(VAR_6->iobuf + VAR_1 + VAR_0 + VAR_2);
 VAR_6->kbuf[1] = VAR_6->kbuf[0] + 2 * VAR_3;
out:
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inbuf_t {unsigned int tail; unsigned int head; scalar_t__ data; TYPE_1__* cs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (scalar_t__,unsigned char const*,unsigned int) ;

int FUNC_3(struct inbuf_t *VAR_2, const unsigned char *VAR_3,
         unsigned VAR_4)
{
 unsigned VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_1(VAR_0, "received %u bytes", VAR_4);

 if (!VAR_4)
  return 0;

 VAR_8 = VAR_4;
 VAR_7 = VAR_2->tail;
 VAR_6 = VAR_2->head;
 FUNC_1(VAR_0, "buffer state: %u -> %u", VAR_6, VAR_7);

 while (VAR_8) {
  if (VAR_6 > VAR_7)
   VAR_5 = VAR_6 - 1 - VAR_7;
  else if (VAR_6 == 0)
   VAR_5 = (VAR_1 - 1) - VAR_7;
  else
   VAR_5 = VAR_1 - VAR_7;
  if (!VAR_5) {
   FUNC_0(VAR_2->cs->dev,
    "buffer overflow (%u bytes lost)\n",
    VAR_8);
   break;
  }
  if (VAR_5 > VAR_8)
   VAR_5 = VAR_8;
  FUNC_2(VAR_2->data + VAR_7, VAR_3, VAR_5);
  VAR_8 -= VAR_5;
  VAR_7 = (VAR_7 + VAR_5) % VAR_1;
  VAR_3 += VAR_5;
 }
 FUNC_1(VAR_0, "setting tail to %u", VAR_7);
 VAR_2->tail = VAR_7;
 return VAR_4 != VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sccb_header {scalar_t__ length; } ;
struct evbuf_header {scalar_t__ length; int flags; } ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (struct evbuf_header*,void*,scalar_t__) ;

int
FUNC_1(struct sccb_header *VAR_0)
{
 struct evbuf_header *VAR_1;
 int VAR_2;
 u16 VAR_3;

 VAR_1 = (struct evbuf_header *) (VAR_0 + 1);
 VAR_2 = 0;
 VAR_3 = VAR_0->length - sizeof(struct sccb_header);
 while (VAR_3 > 0) {
  VAR_3 -= VAR_1->length;
  if (VAR_1->flags & 0x80) {
   VAR_0->length -= VAR_1->length;
   FUNC_0(VAR_1, (void *) ((addr_t) VAR_1 + VAR_1->length),
          VAR_3);
  } else {
   VAR_2++;
   VAR_1 = (struct evbuf_header *)
     ((addr_t) VAR_1 + VAR_1->length);
  }
 }
 return VAR_2;
}

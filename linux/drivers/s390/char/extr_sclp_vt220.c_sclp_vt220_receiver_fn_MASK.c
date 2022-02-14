
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuf_header {int length; } ;
typedef scalar_t__ addr_t ;





 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct evbuf_header *VAR_1)
{
 char *VAR_2;
 unsigned int VAR_3;

 VAR_2 = (char *) ((addr_t) VAR_1 + sizeof(struct evbuf_header));
 VAR_3 = VAR_1->length - sizeof(struct evbuf_header);

 switch (*VAR_2) {
 case 129:
 case 128:
  FUNC_1();
  break;
 case 130:

  VAR_2++;
  VAR_3--;
  FUNC_0(VAR_2, VAR_3);
  FUNC_2(&VAR_0);
  break;
 }
}

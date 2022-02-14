
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {unsigned char* data; int head; int cs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_2(unsigned VAR_1, struct inbuf_t *VAR_2)
{
 unsigned char *VAR_3 = VAR_2->data + VAR_2->head;

 FUNC_0(VAR_0, "received response", VAR_1, VAR_3);
 FUNC_1(VAR_2->cs, VAR_3, VAR_1);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isowbuf_t {unsigned char idle; scalar_t__ data; scalar_t__ wbits; int writesem; scalar_t__ write; scalar_t__ nextread; scalar_t__ read; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,unsigned char,int ) ;

void FUNC_2(struct isowbuf_t *VAR_2, unsigned char VAR_3)
{
 VAR_2->read = 0;
 VAR_2->nextread = 0;
 VAR_2->write = 0;
 FUNC_0(&VAR_2->writesem, 1);
 VAR_2->wbits = 0;
 VAR_2->idle = VAR_3;
 FUNC_1(VAR_2->data + VAR_1, VAR_3, VAR_0);
}

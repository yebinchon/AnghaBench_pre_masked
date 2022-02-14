
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_iv {int flags; struct airq_iv* avail; int bits; int vector; int vector_dma; struct airq_iv* bitlock; struct airq_iv* ptr; struct airq_iv* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct airq_iv*) ;

void FUNC_4(struct airq_iv *VAR_2)
{
 FUNC_3(VAR_2->data);
 FUNC_3(VAR_2->ptr);
 FUNC_3(VAR_2->bitlock);
 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_1, VAR_2->vector, VAR_2->vector_dma);
 else
  FUNC_0(VAR_2->vector, FUNC_2(VAR_2->bits));
 FUNC_3(VAR_2->avail);
 FUNC_3(VAR_2);
}

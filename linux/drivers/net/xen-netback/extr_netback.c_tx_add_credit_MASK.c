
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {unsigned long credit_bytes; unsigned long remaining_credit; int rate_limited; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct xenvif_queue *VAR_1)
{
 unsigned long VAR_2, VAR_3;





 VAR_2 = FUNC_0(131072UL, VAR_1->credit_bytes);


 VAR_3 = VAR_1->remaining_credit + VAR_1->credit_bytes;
 if (VAR_3 < VAR_1->remaining_credit)
  VAR_3 = VAR_0;

 VAR_1->remaining_credit = FUNC_1(VAR_3, VAR_2);
 VAR_1->rate_limited = 0;
}
